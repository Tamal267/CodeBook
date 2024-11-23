#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

ordered_set o_set;

// insert function to insert in
// ordered set same as SET STL
o_set.insert(5);
o_set.insert(1);
o_set.insert(2);

// Finding the second smallest element
// in the set using * because
//  find_by_order returns an iterator
*(o_set.find_by_order(1))

// Finding the number of elements
// strictly less than k=4
o_set.order_of_key(4)
