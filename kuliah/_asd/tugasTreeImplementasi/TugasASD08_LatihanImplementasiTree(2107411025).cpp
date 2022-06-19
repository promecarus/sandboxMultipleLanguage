#include <iomanip>
#include <iostream>

using namespace std;

class Node {
   public:
    int key;
    Node *left;
    Node *right;
    int height;
};

// Fungsi menghitung height
int height(Node *N) {
    if (N == NULL) return 0;
    return N->height;
}

// Fungsi mendapatkan max dari 2 angka
int max(int a, int b) { return (a > b) ? a : b; }

// Fungsi membuat node baru
Node *newNode(int key) {
    Node *node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return (node);
}

// Fungsi rotate right
Node *rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

// Fungsi rotate left
Node *leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

// Fungsi menghitung balance factor
int getBalanceFactor(Node *N) {
    if (N == NULL) return 0;
    return height(N->left) - height(N->right);
}

// Fungsi menambahkan node baru
Node *insertNode(Node *node, int key) {
    // Mencari posisi yang tepat dan menambahkan node
    if (node == NULL) return (newNode(key));

    if (key < node->key)
        node->left = insertNode(node->left, key);
    else if (key > node->key)
        node->right = insertNode(node->right, key);
    else
        return node;

    // Mengupdate balance factor dari setiap node dan menyeimbangkan tree
    node->height = 1 + max(height(node->left), height(node->right));
    int balanceFactor = getBalanceFactor(node);
    if (balanceFactor > 1) {
        if (key < node->left->key) {
            return rightRotate(node);
        } else if (key > node->left->key) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }
    if (balanceFactor < -1) {
        if (key > node->right->key) {
            return leftRotate(node);
        } else if (key < node->right->key) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }
    return node;
}

// Node dengan nilai minimum
Node *nodeWithMinimumValue(Node *node) {
    Node *current = node;
    while (current->left != NULL) current = current->left;
    return current;
}

// Fungsi menghapus node
Node *deleteNode(Node *root, int key) {
    // Mencari node dan menghapusnya
    if (root == NULL) return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if ((root->left == NULL) || (root->right == NULL)) {
            Node *temp = root->left ? root->left : root->right;
            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else
                *root = *temp;
            free(temp);
        } else {
            Node *temp = nodeWithMinimumValue(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }

    if (root == NULL) return root;

    // Mengupdate balance factor dari setiap node dan menyeimbangkan tree
    root->height = 1 + max(height(root->left), height(root->right));
    int balanceFactor = getBalanceFactor(root);
    if (balanceFactor > 1) {
        if (getBalanceFactor(root->left) >= 0) {
            return rightRotate(root);
        } else {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
    }

    if (balanceFactor < -1) {
        if (getBalanceFactor(root->right) <= 0) {
            return leftRotate(root);
        } else {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    }

    return root;
}

// Fungsi mengupdate node
Node *updateNode(Node *root, int previousKey, int newKey) {
    root = deleteNode(root, previousKey);
    root = insertNode(root, newKey);
    return root;
}

// Fungsi menampilkan tree
void printTree(Node *root, string indent, bool last) {
    if (root != nullptr) {
        cout << indent;
        if (last) {
            cout << "R----";
            indent += "     ";
        } else {
            cout << "L----";
            indent += "|    ";
        }
        cout << root->key << "\n";
        printTree(root->left, indent, false);
        printTree(root->right, indent, true);
    }
}

// Fungsi menampilkan tree dengan judul
void printTreeWithTitle(Node *root, string title) {
    cout << "Tree" << title << ":"
         << "\n";
    printTree(root, "", true);
}

// Fungsi menghapus tree
void deleteTree(Node *root) {
    if (root != NULL) {
        deleteTree(root->left);
        deleteTree(root->right);
        free(root);
    }
}

// Fungsi menampilkan preorder
void preOrder(Node *root) {
    if (root != nullptr) {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Fungsi menampilkan inorder
void inOrder(Node *root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
}

// Fungsi menampilkan postorder
void postOrder(Node *root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
    }
}

// Fungsi input key
int inputKey(string pesan) {
    int key;
    cout << "Masukkan key yang " << pesan << ": ";
    cin >> key;
    return key;
}

// Fungsi konfirmasi
bool confirm(string pesan) {
    char c;
    cout << "Apakah anda yakin ingin " << pesan << "? [y/n]\n";
    cin >> c;
    return c == 'y';
}

int main() {
    // Karakteristik size tree
    int sizeTree = 0;

    // Membuat default tree
    Node *root = NULL;
    int defaultTree[] = {10, 5, 20, 7, 9, 50, 15, 40, 8, 45, 60};
    int n = sizeof(defaultTree) / sizeof(defaultTree[0]);
    for (int i = 0; i < n; i++) {
        root = insertNode(root, defaultTree[i]);
        sizeTree++;
    }

    int pilihan;
    while (pilihan != 9) {
        system("cls");
        string menu[] = {
            "[1] Insert node", "[2] Update node", "[3] Delete node",
            "[4] Preorder",    "[5] Inorder",     "[6] Postorder",
            "[7] Print Tree",  "[8] Delete Tree", "[9] Exit"};
        cout << "\n"
             << setfill('-') << setw(18) << left << "+-"
             << "+\n";
        for (int i = 0; i < sizeof(menu) / sizeof(string); i++) {
            cout << setfill(' ') << "| " << setw(16) << left << menu[i]
                 << "|\n";
        }
        cout << setfill('-') << setw(18) << left << "+-"
             << "+\n";

        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                system("cls");
                printTreeWithTitle(root, " sebelum insert node");
                root = insertNode(root, inputKey("akan diinsert"));
                sizeTree++;
                break;
            case 2:
                system("cls");
                printTreeWithTitle(root, " sebelum update node");
                root = updateNode(root, inputKey("akan diubah\t"),
                                  inputKey("baru\t\t"));
                break;
            case 3:
                system("cls");
                printTreeWithTitle(root, " sebelum delete node");
                root = deleteNode(root, inputKey("akan didelete"));

                sizeTree--;
                break;
            case 4:
                system("cls");
                cout << "Preorder: ";
                preOrder(root);
                cout << "\n";
                system("pause");
                break;
            case 5:
                system("cls");
                cout << "Inorder: ";
                inOrder(root);
                cout << "\n";
                system("pause");
                break;
            case 6:
                system("cls");
                cout << "Postorder: ";
                postOrder(root);
                cout << "\n";
                system("pause");
                break;
            case 7:
                system("cls");
                printTreeWithTitle(root, "");
                cout << "Size: " << sizeTree << "\n";
                cout << "Height: " << height(root) << "\n";
                system("pause");
                break;
            case 8:
                system("cls");
                printTreeWithTitle(root, " sebelum delete tree");
                if (confirm("hapus tree")) {
                    deleteTree(root);
                    root = NULL;
                    sizeTree = 0;
                    system("cls");
                    cout << "Berhasil menghapus tree\n";
                } else {
                    system("cls");
                    cout << "Batal menghapus tree\n";
                }
                system("pause");
                break;
            case 9:
                cout << "Terima kasih telah menggunakan program ini"
                     << "\n";
                break;
            default:
                cout << "Pilihan tidak ada"
                     << "\n";
                break;
        }
    }
}