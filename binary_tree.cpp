//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//struct Elem {
//    char FullName[50];    // Full name of the student
//    double AverageScore;  // Average score of the student
//    Elem* left, * right, * parent;
//};
//
//class Tree {
//private:
//    Elem* root;
//
//public:
//    Tree() : root(nullptr) {}
//    ~Tree() { Del(); }
//
//    void Print(Elem* Node) {
//        if (Node != nullptr) {
//            Print(Node->left);
//            cout << "Full Name: " << Node->FullName << ", Average Score: " << Node->AverageScore << endl;
//            Print(Node->right);
//        }
//    }
//
//    Elem* GetRoot() {
//        return root;
//    }
//
//    void Insert(Elem* z) {
//        z->left = nullptr;
//        z->right = nullptr;
//        Elem* y = nullptr;
//        Elem* Node = root;
//
//        while (Node != nullptr) {
//            y = Node;
//            if (strcmp(z->FullName, Node->FullName) < 0) {
//                Node = Node->left;
//            }
//            else {
//                Node = Node->right;
//            }
//        }
//
//        z->parent = y;
//        if (y == nullptr) {
//            root = z;
//        }
//        else if (strcmp(z->FullName, y->FullName) < 0) {
//            y->left = z;
//        }
//        else {
//            y->right = z;
//        }
//    }
//
//    void Del(Elem* z = nullptr) {
//        if (z != nullptr) {
//            Elem* Node, * y;
//
//            if (z->left == nullptr || z->right == nullptr) {
//                y = z;
//            }
//            else {
//                y = Next(z);
//            }
//
//            if (y->left != nullptr) {
//                Node = y->left;
//            }
//            else {
//                Node = y->right;
//            }
//
//            if (Node != nullptr) {
//                Node->parent = y->parent;
//            }
//
//            if (y->parent == nullptr) {
//                root = Node;
//            }
//            else if (y == y->parent->left) {
//                y->parent->left = Node;
//            }
//            else {
//                y->parent->right = Node;
//            }
//
//            if (y != z) {
//                strcpy(z->FullName, y->FullName);
//                z->AverageScore = y->AverageScore;
//            }
//
//            delete y;
//        }
//        else {
//            while (root != nullptr) {
//                Del(root);
//            }
//        }
//    }
//
//    Elem* Next(Elem* Node) {
//        Elem* y = nullptr;
//
//        if (Node != nullptr) {
//            if (Node->right != nullptr) {
//                return Min(Node->right);
//            }
//
//            y = Node->parent;
//            while (y != nullptr && Node == y->right) {
//                Node = y;
//                y = y->parent;
//            }
//        }
//
//        return y;
//    }
//
//    Elem* Min(Elem* Node) {
//        if (Node != nullptr) {
//            while (Node->left != nullptr) {
//                Node = Node->left;
//            }
//        }
//
//        return Node;
//    }
//};
//
//void InputStudents(Tree& studentTree) {
//    int N;
//    cout << "Enter the number of students: ";
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        Elem* temp = new Elem;
//        cout << "Enter the full name of student " << i + 1 << ": ";
//        cin.ignore();  // Ignore newline from previous input
//        cin.getline(temp->FullName, sizeof(temp->FullName));
//        cout << "Enter the average score of student " << i + 1 << ": ";
//        cin >> temp->AverageScore;
//        studentTree.Insert(temp);
//    }
//}
//
//int main() {
//    srand(time(0));
//
//    Tree studentTree;
//
//    InputStudents(studentTree);
//
//    cout << "Student Information:" << endl;
//    studentTree.Print(studentTree.GetRoot());
//
//    return 0;
//}

                            
        
