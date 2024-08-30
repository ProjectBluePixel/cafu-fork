
#ifndef CAFU_LINKED_LIST_HPP_INCLUDED
#define CAFU_LINKED_LIST_HPP_INCLUDED


/// This class represents a node of a singly-linked list.
template<class T> class ListNodeT
{
    public:

    ListNodeT();        ///< Constructor.
    // ~ListNodeT();    ///< Destructor.

    T             Data;
    ListNodeT<T>* Next;


    private:

    ListNodeT(const ListNodeT<T>& Other);                   ///< Use of the Copy Constructor    is not allowed.
    ListNodeT<T>& operator = (const ListNodeT<T>& Other);   ///< Use of the Assignment Operator is not allowed.
};


// The default constructor.
template<class T> inline ListNodeT<T>::ListNodeT()
{
}

#endif
