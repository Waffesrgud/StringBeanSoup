//
//  HashTable.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 5/1/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <cmath>
#include <assert.h>

using namespace std;
template <class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double efficiencyPercentage;
    Type* * hashTableStorage;
    bool isPrime(long sampleNumber);
    void resize();
    long nextPrime(long current);
    long findPosition(Type data);
    long handleCollision(Type data, long currentPosition);
public:
    HashTable();
    void add(Type data);
    bool remove(Type data);
    void displayContents();
};

template <class Type>
HashTable<Type> :: HashTable()

{
    this->capacity = 101;
    this->efficiencyPercentage = .667;
    this->size = 0;
    this->hashTableStorage = HashNode<Type> * [capactity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] hashTableStorage;
}

template <class Type>
bool HashTable<Type> :: isPrime(long candidateNumber)
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(candidateNumber == 2 || candidateNumber == 3)
    {
        return true;
    }
    else if(candidateNmber % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(candidateNumber) + 1; next += 2)
        {
            if(candidateNumber % next == 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
long HashTable<Type> :: findPosition(HashNode<Type> * data)
{
    long insertPosition = data->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
long HashTable<Type> :: handleCollision(HashNode<Type> * data, long currentPosition)
{
    long shift = 17;
    for (long position = currentPosition + shift; position != currentPosition; currentPosition += shift)
    {
        if(position < capacity)
        {
            position = position % capacity;
        }
        if(hashTableStorage[position] == nullptr)
        {
            return position;
        }
    }
    
    return -1;
}

template <class Type>
bool HashTable<Type> :: remove(Type)
{
    bool removed = false;
    /*for (long index = 0; index < capacity; index++)
    {
        if(hashTableStorage[index] != nullptr && hashTableStorage[index]->getData() == data)
        {
            hashTableStorage[index] = nullptr;
            removed = true;
        }
    }*/
    HashNode<Type> * find = new HashNode<Type>(data);
    long hashIndex = findPosition(find);
    if(hashTableStorage[hashIndex] != nullptr)
    {
        hashTableStorage[hashIndex] = nullptr;
        removed = true;
    }
    
    return removed;
}

template <class Type>
long HashTable<Type> :: nextPrime()
{
    return 0;
}

template <class Type>
void HashTable<Type> :: displayContents()
{
    for(long index = 0; index < capacity; index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            cout << index << ": " << hashTableStorage[index]->getData() << endl;
        }
    }
}

template <class Type>
void HashTable<Type> :: resize()
{
    long updatedSize = nextPrime();
    HashNode<Type> * * tempStorage = HashNode<Type>[updatedSize];
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    long oldCapactiy = this->capacity;
    this->capacity = updatedSize;
    for (long index = 0; index < oldCapacity; index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            HashNode<Type> * temp = hashTableStorag[index];
            
            long position = findPosition(temp);
            if(tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(temp, position)
                while(tempStorage[updated] )
                {
                    
                }
            }
        }
    }
}
#endif /* HashTable_hpp */
