simple
Pair: The pair container is a simple container defined in header consisting of two data elements or objects.

Vector: Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container.

forward_list: Forward list in STL implements singly linked list. 
Introduced from C++11, the forward list is useful than other containers in insertion, 
removal and moving operations (like sort) and allows time constant insertion and removal of elements.

List: Lists are sequence containers that allow non-contiguous memory allocation.

Container Adaptors
Stack: Stacks are a type of container adaptors with LIFO(Last In First Out) type of work, where a new element is added at one end and (top) an element is removed from that end only.

Queue: Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front.

Priority_queue: Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the queue and elements are in non-increasing order(hence we can see that each element of the queue has a priority{fixed order}).

Associative Containers: These implement sorted data structures that can be quickly searched (O(log n) complexity).
Set: Sets are a type of associative containers in which each element has to be unique because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element.

Map: Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have some key values.

Unordered_set: An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized.

Unordered_map: The unordered_map is an associated container that stores elements formed by a combination of key-value and a mapped value. 
                The key value is used to uniquely identify the element and mapped value is the content associated with the key. 
                Both key and value can be of any type of predefined or user-defined.

Iterators are used to point at the memory addresses of STL containers. 
We can use iterators to move through the contents of the container. 
They can be visualised as something similar to a pointer pointing to some location 
we can access the content at that particular location using them. 
They are primarily used in the sequence of numbers, characters etc. 
They reduce the complexity and execution time of the program.
