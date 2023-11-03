class TrieNode {
  TrieNode[] node;
  boolean isEndOfWord;

  TrieNode() {
    node = new TrieNode[26];
    isEndOfWord = false;
  }
}

public class Trie {
  TrieNode trie;
  
  Trie() {
    trie = new TrieNode();
  }

  public void insert(String key) {
    TrieNode crawl = trie;
    int n = key.length();
    for(int i = 0; i < n; i++) {
      int idx = key.charAt(i) - 'a';
      if(crawl.node[idx] == null) {
        crawl.node[idx] = new TrieNode();
      }
      crawl = crawl.node[idx];
    }
    crawl.isEndOfWord = true;
  }

  public boolean find(String key) {
    TrieNode crawl = trie;
    int n = key.length();
    for(int i = 0; i < n; i++) {
      int idx = key.charAt(i) - 'a';
      if(crawl.node[idx] == null) {
        return false;
      }
      crawl = crawl.node[idx];
    }
    if(crawl.isEndOfWord) {
      return true;
    }
    return false;
  }

  public static void main(String args[]) {
    Trie trie = new Trie();
    trie.insert("test");
    trie.insert("trie");
    trie.insert("tree");
    System.out.println("Find tree: " + trie.find("tree"));
    System.out.println("Find triei: " + trie.find("triei"));
    System.out.println("Find trie: " + trie.find("trie"));
    System.out.println("Find tri: " + trie.find("tri"));
  }
}
