#include<bits/stdc++.h>

using namespace std;

class TrieNode {
    public : 
        char data;
        TrieNode* children[26];
        bool isTerminal;
        int childrenCount;
        TrieNode(char ch) {
            data = ch;
            for(int i=0; i< 26; i++) {
                children[i] = NULL;
            }
            isTerminal = false;
            childrenCount = 0;
        }
};

class Trie {
    public : 
        TrieNode* root;
        Trie(char ch) {
            root = new TrieNode(ch);
        }
    void insertUtil(TrieNode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] -'a';
        TrieNode *child;
        // pesent
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent

            child = new TrieNode(word[0]);
            root->childrenCount++;
            root->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }

    void insert(string word) {
        insertUtil(root, word);
    }

    void lcp(string str, string &ans) {
         
        for(int i=0; i< str.length(); i++) {
             char ch = str[i];
            if(root -> childrenCount == 1) {
                ans.push_back(ch);
                int index = ch -'a';
                root = root->children[index];
            } else {
                break;
            }

            if(root -> isTerminal){
                break;
            }
        }
    }

};

string longestCommonPrefix(vector<string> &arr, int n)
{
  Trie* t = new Trie('\0');
  string ans="";
  for(int i=0; i<n; i++ ) {
      t->insert(arr[i]);
  }
  t->lcp(arr[0], ans);

  return ans;
}


