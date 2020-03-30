<center><h1>The&nbsp;&nbsp;&nbsp;New&nbsp;&nbsp;&nbsp;Note&nbsp;&nbsp;&nbsp;Of&nbsp;&nbsp;&nbsp;Chapter 03
</center>

## Vector

Analogous to the list in Python. We can get every element of every vector by index, and the index of every element must be integer. And there is one import thing is that we are mustn't use index which is negative number.

If the size of one vector is even, then the vector will assigned to two part. And there is one mid element in each side. just like that picture below.

```mermaid
graph TD

index0[0]-->start0
mid0[mid-1]-->
start0[elements <= median]
mid1[mid]-->
start1[elements >= median]
index1[size-1]-->start1
```

But if it's odd, that will be another story, like this picture below.

```mermaid
graph TD

idx0[0]-->
ele0[elements <= median]
mid0[mid-1]-->ele0
mid1[mid]-->
ele1[median]
mid2[mid+1]-->ele2
idx[size-1]-->
ele2[elements >= median]
```

