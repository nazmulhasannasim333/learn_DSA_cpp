    if (val < root->val)
        insert(root->left, val);
    else
        insert(root->right, val);