#include <iostream>
using namespace std;

struct Node {
    int label;
    Node *left, *right, *parent;
};

Node *root, *nodeBaru;

createTree(int label) {
    if (root != NULL) {
        cout << "Tree sudah ada\n";
    } else {
        root = new Node;
        root->label = label;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
    }
}

Node *insertLeft(int label, Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada\n";
    } else {
        if (node->left != NULL) {
            return NULL;
        } else {
            nodeBaru = new Node;
            nodeBaru->label = label;
            nodeBaru->left = NULL;
            nodeBaru->right = NULL;
            nodeBaru->parent = node;
            node->left = nodeBaru;
        }
    }
    return nodeBaru;
}

Node *insertRight(int label, Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada\n";
    } else {
        if (node->right != NULL) {
            return NULL;
        } else {
            nodeBaru = new Node;
            nodeBaru->label = label;
            nodeBaru->left = NULL;
            nodeBaru->right = NULL;
            nodeBaru->parent = node;
            node->right = nodeBaru;
        }
    }
    return nodeBaru;
}

bool empty() {
    if (root == NULL) {
        return true;
    } else {
        return false;
    }
}

void update(int label, Node *node) {
    if (empty()) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node == NULL) {
            cout << "node yang dipanggil tidak ada" << endl;
        } else {
            char awal = node->label;
            node->label = label;
            cout << awal << " diupdate menjadi " << label << endl;
        }
    }
}

void retrieve(Node *node) {
    if (empty()) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node == NULL) {
            cout << "node yang dipanggil tidak ada!\n";

        } else {
            cout << "node yang dipanggil berisi : " << node->label << endl;
        }
    }
}

void find(Node *node) {
    if (empty()) {
        cout << "Tree belum ada!\n";
    } else {
        cout << "Node : " << node->label << endl;
        cout << "root : " << root->label << endl;
        if (node->parent == NULL) {
            cout << "Node parent : tidak punya parent\n";
        } else {
            cout << "Node parent : " << node->parent->label << endl;
        }

        if (node->left == NULL) {
            cout << "Node kiri : tidak punya\n";
        } else {
            cout << "Node kiri : " << node->left->label << endl;
        }
        if (node->right == NULL) {
            cout << "Node kanan : tidak punya\n";
        } else {
            cout << "Node kanan : " << node->right->label << endl;
        }
    }
}

void preOrder(Node *node = root) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node != NULL) {
            cout << node->label << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}

void inOrder(Node *node = root) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node != NULL) {
            inOrder(node->left);
            cout << node->label << ", ";
            inOrder(node->right);
        }
    }
}

void postOrder(Node *node = root) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node != NULL) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->label << ", ";
        }
    }
}

void deleteTree(Node *node) {
    if (root == NULL) {
        cout << "Tree belm ada!" << endl;
    } else {
        if (node != NULL) {
            if (node != root) {
                node->parent->left == NULL;
                node->parent->right == NULL;
            }
            deleteTree(node->left);
            deleteTree(node->right);
        }
        if (node == root) {
            delete root;
            root = NULL;
        }
    }
}

void clear() {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        deleteTree(root);
        cout << "tree berhasil dihapus" << endl;
    }
}

int size(Node *node = root) {
    if (root == NULL) {
        cout << "Tree belum data!" << endl;
        return 0;
    } else {
        if (node == NULL) {
            return 0;
        } else {
            return 1 + size(node->left) + size(node->right);
        }
    }
}

int height(Node *node = root) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
        return 0;
    } else {
        if (node == NULL) {
            return 0;
        } else {
            int heightKiri = height(node->left);
            int heightKanan = height(node->right);

            if (heightKiri >= heightKanan) {
                return heightKiri + 1;
            } else {
                return heightKanan + 1;
            }
        }
    }
}

void characteristics() {
    cout << "Height tree    :" << height() << endl;
    cout << "size tree      :" << size() << endl;
    cout << "avg tree       :" << size() / height();
}

void tampilkanNode(Node *node[99]) {
    cout << "=========================\n";
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << node[i + 1]->label << endl;
    }
    cout << "=========================\n";
}

void pilih(Node *node[99]) {
    int pilihan;
    int nodes;
    int label;

    cout << "=========================\n";
    cout << " 1. Update\n";
    cout << " 2. Retrieve\n";
    cout << " 3. Find\n";
    cout << " 4. pengunjungan Pre order\n";
    cout << " 5. pengunjungan In order\n";
    cout << " 6. pengunjungan post order\n";
    cout << " 7. clear\n";
    cout << " 8. Characteristics\n";
    cout << " 9. Tampilkan node\n";
    cout << "=========================\n";

    cout << "Pilih menu ;";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            system("cls");
            tampilkanNode(node);
            cout << "Masukan node berapa yang ingin diganti :";
            cin >> nodes;
            cout << "Masukan label baru :";
            cin >> label;
            update(label, node[nodes]);
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            tampilkanNode(node);
            cout << "Masukan node berapa yang ingin diretrieve :";
            cin >> nodes;
            retrieve(node[nodes]);
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            tampilkanNode(node);
            cout << "Masukan node berapa yang ingin dicari :";
            cin >> nodes;
            find(node[nodes]);
            system("pause");
            system("cls");
            break;

        case 4:
            system("cls");
            preOrder();
            system("pause");
            system("cls");
            break;

        case 5:
            system("cls");
            inOrder();
            system("pause");
            system("cls");
            break;

        case 6:
            system("cls");
            postOrder();
            system("pause");
            system("cls");
            break;

        case 7:
            system("cls");
            clear();
            system("pause");
            system("cls");
            break;

        case 8:
            system("cls");
            characteristics();
            system("pause");
            system("cls");
            break;

        case 9:
            system("cls");
            tampilkanNode(node);
            system("pause");
            system("cls");
            break;
        default:
            break;
    }
}

int main() {
    Node *node[99];
    createTree(10);
    node[1] = insertLeft(5, root);
    node[2] = insertRight(7, node[1]);
    node[3] = insertRight(9, node[2]);
    node[4] = insertLeft(8, node[3]);
    node[5] = insertRight(20, root);
    node[6] = insertLeft(15, node[5]);
    node[7] = insertRight(50, node[5]);
    node[8] = insertLeft(40, node[7]);
    node[9] = insertRight(60, node[7]);
    node[10] = insertLeft(45, node[8]);

    int x = 0;
    while (x != 1) {
        pilih(node);
    }
}
