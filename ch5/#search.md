#search

##看到该题就知道是使用关于查找的算法，在该题中我选择折半查找，只需要弄清折半查找的原理即可

##折半查找思想

###折半查找要求数组有序，该题满足

###设R[low,,,,,,,,,,,high]是当前查找的查找区间，却低估中间位置mid=(low+high)/2;看A[mid]=mid是否满足，满足则查找成功，返回该位置mid，否则确定新的查找区间

###若R[mid]>mid,则该记录必定是在mid左边的子表R[low,,,,,,,,,,,mid-1]中；若R[mid]<mid,则该记录必定在R[mid+1,,,,,,high]中。

###递归地处理新区间，直到子区间的长度小于1时查找过程结束。

###复杂度O（logN）