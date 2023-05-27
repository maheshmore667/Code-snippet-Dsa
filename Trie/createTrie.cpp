#include <iostream>

using namespace std;

class TrieNode
{
public:
    char ch;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        this->ch = ch;
        for (int i = 0; i < 26; i++)
        {
            this->children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
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
            root->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }

    void inserWord(string word)
    {
        insertUtil(root, word);
    }
};

int main()
{
   
    Trie *T = new Trie();
    T->inserWord("ABCD");
    
    return 0;
}