/*
begin() – Returns an iterator pointing to the first element in the vector.
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector.
size() – Returns the number of elements in the vector.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
empty() – Returns whether the container is empty.
push_back() – It push the elements into a vector from the back.
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position.
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type and size.
clear() – It is used to remove all the elements of the vector container.
emplace() – It extends the container by inserting new element at position.
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector.
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    v.push_back(i+1);
    for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<" ";
    cout<<"\nSize of vector:"<<v.size();
    v.insert(v.begin()+1,88);
    cout<<"\n"<<"inserting 88 in vector:";
    for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<" ";
}
