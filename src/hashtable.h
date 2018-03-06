#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>

template<class K, class V>
class HashTable {

  // nested struct to keep everything nice and civil
  struct bucket {
    K              hash;
    std::vector<K> Keys;
    std::vector<V> Values;
  };

private:
  // pointer to hash function
  K (*hasher)(K);

  // number of entries
  int                 numberOfEntries;
  // underlying implementation
  std::vector<bucket> map;

public:
  // constructor takes a pointer to a
  // hashing function
  HashTable(K(*hashFunc)(K));

  // enroll emplaces a key value pair
  // creates a new bucket if the hash
  // does not already exist
  void enroll(K, V);

  // retrieves a value from a key
  V get(K);

  // updates a keypair
  void update(K, V);

  // returns current number of entries
  int getNumberOfEntries();

  // return all movies sorted like they need to be
  static std::vector<V>
  retrieveAllValues(HashTable<K, V>, bool(*sortComparator)(V, V));

  // helper function for unit testing purposes
  K getHash(K);
};


// Function implementations

/**
 *
 * @tparam K
 * @tparam V
 * @param hashFunction
 */
template <class K, class V>
HashTable<K, V>::HashTable(K(*hashFunction)(K)){
  this->hasher = hashFunction;
  this->numberOfEntries = 0;
}

/**
 *
 * @tparam K
 * @tparam V
 * @return
 */
template <class K, class V>
  int HashTable<K,V>::getNumberOfEntries(){
  return this->numberOfEntries;
}

/**
 *
 * @tparam K
 * @tparam V
 */
template<class K, class V>
void HashTable<K,V>::enroll(K, V){

}

/**
 *
 * @tparam K
 * @tparam V
 * @param arg
 * @return
 */
template<class K, class V>
K HashTable<K,V>::getHash(K arg){
return hasher(arg);
}

#endif //HASHTABLE_H
