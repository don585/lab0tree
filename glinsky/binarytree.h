#ifndef BINARYTREE_H
#define BINARYTREE_H

/**
 * The binary tree class storing integer values for now
 * TODO: rewrite to template class
 */
class BinaryTree
{
public:
    class Node
    {
    public:
        Node *parent() const;
        Node *left() const;
        Node *right() const;

        int value() const;
        void setValue(int value);

    private:
        Node(Node *parent, Node *left, Node *right);

        void setParent(Node *parent);
        void setLeft(Node *left);
        void setRight(Node *right);

        friend class BinaryTree;

        Node *mParent;
        Node *mLeft;
        Node *mRight;
        int mValue;
    };

    BinaryTree();
    virtual ~BinaryTree();

    void insert(int value);
    void remove(Node *n);

    Node *find(int value);
    Node *find(Node *parent, int value);

    Node *predecessor(Node *n);
    Node *successor(Node *n);

    Node *minTree(Node *root);
    Node *maxTree(Node *root);

    Node *root() const
    {
        return mRoot;
    }

private:
    Node *mRoot;
};

#endif // BINARYTREE_H
