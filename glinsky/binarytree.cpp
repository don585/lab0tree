#include "binarytree.h"
#include "util.h"

BinaryTree::BinaryTree() : mRoot(nullptr)
{
}

BinaryTree::~BinaryTree()
{

}

/*
 Not implemented

void BinaryTree::insert(int value)
{
    ;
}

void BinaryTree::remove(Node *n)
{
    ;
}
*/

BinaryTree::Node *BinaryTree::find(int value)
{
    return find(mRoot, value);
}

BinaryTree::Node *BinaryTree::find(Node *parent, int value)
{
    if (!parent)
    {
        return nullptr;
    }

    if (value < parent->value())
    {
        return find(parent->left(), value);
    }

    if (value > parent->value())
    {
        return find(parent->right(), value);
    }

    return parent;
}

BinaryTree::Node *BinaryTree::predecessor(Node *n)
{
    if (!n)
    {
        return n;
    }

    if (n->left())
    {
        return maxTree(n->left());
    }

    Node *parent = nullptr;
    if (parent)
    {
        while (n && n == parent->left())
        {
            n = parent;
            parent = n->parent();
        }
    }
    return parent;
}

BinaryTree::Node *BinaryTree::successor(Node *n)
{
    if (!n)
    {
        return n;
    }

    if (n->right())
    {
        return maxTree(n->right());
    }

    Node *parent = nullptr;
    if (parent)
    {
        while (n && n == parent->right())
        {
            n = parent;
            parent = n->parent();
        }
    }
    return parent;
}

BinaryTree::Node *BinaryTree::minTree(Node *root)
{
    Node *max = root;
    if (max)
    {
        while (max->left())
        {
            max = max->left();
        }
    }
    return max;
}

BinaryTree::Node *BinaryTree::maxTree(Node *root)
{
    Node *max = root;
    if (max)
    {
        while (max->right())
        {
            max = max->right();
        }
    }
    return max;
}

BinaryTree::Node::Node(BinaryTree::Node *parent, BinaryTree::Node *left, BinaryTree::Node *right)
    : mParent(parent)
    , mLeft(left)
    , mRight(right)
{
}

BinaryTree::Node *BinaryTree::Node::right() const
{
    return mRight;
}

void BinaryTree::Node::setRight(Node *right)
{
    mRight = right;
}

BinaryTree::Node *BinaryTree::Node::left() const
{
    return mLeft;
}

void BinaryTree::Node::setLeft(Node *left)
{
    mLeft = left;
}

BinaryTree::Node *BinaryTree::Node::parent() const
{
    return mParent;
}

void BinaryTree::Node::setParent(Node *parent)
{
    mParent = parent;
}

int BinaryTree::Node::value() const
{
    return mValue;
}

void BinaryTree::Node::setValue(int value)
{
    mValue = value;
}
