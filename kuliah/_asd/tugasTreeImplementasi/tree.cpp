#include <iostream>

using namespace std;

// deklarasi node
struct Node {
    char label;
    Node *left, *right, *parent;
};

// deklarasi variable pointer
Node *root, *nodeBaru;

// membuat tree
void createTree(char label) {
    if (root != NULL) {
        cout << "Tree sudah ada" << endl;
    } else {
        root = new Node;
        root->label = label;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << label << " sebagai root" << endl;
    }
}

// penambahan anak kiri
Node *insertLeft(char label, Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
        return NULL;
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

            cout << endl;
            cout << label << " anak kiri " << nodeBaru->parent->label << endl;

            return nodeBaru;
        }
    }
}

// penambahan anak sebelah kanan
Node *insertRight(char label, Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
        return NULL;
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

            cout << endl;
            cout << label << " anak kanan " << nodeBaru->parent->label << endl;

            return nodeBaru;
        }
    }
}

// fungsi empty
bool empty() {
    if (root == NULL) {
        return true;
    } else {
        return false;
    }
}

// fungsi update
void update(char label, Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node->label == label) {
            cout << "Label " << label << " sudah ada" << endl;
        } else {
            if (node == NULL) {
                cout << "Node yang dipanggil tidak ada!" << endl;
            } else {
                char awal = node->label;
                node->label = label;
                cout << awal << " diupdate menjadi " << label << endl;
            }
        }
    }
}

// fungsi retrieve
void retrieve(Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node == NULL) {
            cout << "Node yang dipanggil tidak ada!" << endl;
        } else {
            cout << "Node yang dipanggil berisi: " << node->label << endl;
        }
    }
}

// fungsi find
void find(Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        cout << "Node : " << node->label << endl;
        cout << "Root : " << root->label << endl;

        if (node->parent == NULL) {
            cout << "Node parent : tidak punya parent" << endl;
        } else {
            cout << "Node parent : " << node->parent->label << endl;
        }

        if (node->left == NULL) {
            cout << "Node kiri : tidak punya" << endl;
        } else {
            cout << "Node kiri : " << node->left->label << endl;
        }

        if (node->right == NULL) {
            cout << "Node kanan : tidak punya" << endl;
        } else {
            cout << "Node kanan : " << node->right->label << endl;
        }
    }
}

// fungsi preorder
void preorder(Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node != NULL) {
            cout << node->label << ", ";
            preorder(node->left);
            preorder(node->right);
        }
    }
}

// fungsi inorder
void inorder(Node *node = root) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node != NULL) {
            inorder(node->left);
            cout << node->label << ", ";
            inorder(node->right);
        }
    }
}

// fungsi postorder
void postorder(Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node != NULL) {
            postorder(node->left);
            postorder(node->right);
            cout << node->label << ", ";
        }
    }
}

// fungsi clear
void clear() {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        // root = NULL;
        deleteTree(root);
        cout << "Tree telah dihapus" << endl;
    }
}
// fungsi size
int size(Node *node = root) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
        return 0;
    } else {
        if (node == NULL) {
            return 0;
        } else {
            return 1 + size(node->left) + size(node->right);
        }
    }
}

// fungsi height
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
            if (heightKiri > heightKanan) {
                return heightKiri + 1;
            } else {
                return heightKanan + 1;
            }
        }
    }
}

// fungsi characteristics
void characteristics() {
    cout << "Height tree: " << height() << endl;
    cout << "Size tree: " << size() << endl;
    cout << "Average tree: " << size() / height() << endl;
}

// fungsi delete tree
void deleteTree(Node *node) {
    if (node == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        if (node != NULL) {
            if (node != root) {
                node->parent->left = NULL;
                node->parent->right = NULL;
            }
            deleteTree(node->left);
            deleteTree(node->right);
        }
        if (node == root) {
            delete root;
            root = NULL;
        } else {
            delete node;
        }
    }
}

// fungsi delete sub tree
void deleteSub(Node *node) {
    if (root == NULL) {
        cout << "Tree belum ada!" << endl;
    } else {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "Sub tree " << node->label << " berhasil dihapus" << endl;
    }
}

int main() {
    createTree('A');

    Node *node2, *node3, *node4, *node5, *node6, *node7, *node8, *node9;

    node2 = insertLeft('B', root);

    node3 = insertRight('C', root);

    node4 = insertLeft('D', node2);

    node5 = insertLeft('E', node3);

    node6 = insertRight('F', node3);

    node7 = insertRight('G', node4);

    node8 = insertLeft('H', node5);

    node9 = insertRight('I', node5);

    cout << "tree empty? : " << empty() << endl;

    update('K', node9);

    retrieve(node3);

    find(node3);

    cout << "Penelusuran preorder: " << endl;
    preorder(root);
    cout << endl;

    cout << "Penelusuran inorder: " << endl;
    inorder(root);
    cout << endl;

    cout << "Penelusuran postorder: " << endl;
    postorder(root);
    cout << endl;

    clear();

    characteristics();

    system("pause");
    return 0;
}