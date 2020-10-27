#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;
List Read();
void Print( List L ); 
List Merge( List L1, List L2 );
int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    return 0;
}
List Read() {
	PtrToNode L,Head,Tail;
	Head = Tail = NULL;
	int i,x;
	for (i=0;;i++) {
		scanf ("%d",&x);
		if (x==-1) break;
		L = (List)malloc(sizeof(struct Node));
		L->Data = x;
		L->Next = NULL;
		if (i==0) Head = L;
		else Tail->Next = L;
		Tail = L;
	}
	return Head;
}
List Merge( List L1, List L2 ) {
	List L3,Head,Tail;
	Head=Tail=L3=NULL;
	int i;
	for (i=0;;i++) {
		if (L1!=NULL&&L2!=NULL) {
			if (L1->Data<=L2->Data)  {
				L3 = (List)malloc(sizeof (struct Node));
				L3->Data = L1->Data;
				L3->Next = NULL;
			    L1 = L1->Next;
		}
		else if (L1->Data>L2->Data) {
			L3 = (List)malloc(sizeof (struct Node));
				L3->Data = L2->Data;
				L3->Next = NULL;
			    L2 = L2->Next;
		}
		}
		 else if (L1==NULL&&L2!=NULL) {
		 	L3 = (List)malloc(sizeof (struct Node));
				L3->Data = L2->Data;
				L3->Next = NULL;
			    L2 = L2->Next;
		}
		 else if (L2==NULL&&L1!=NULL) {
		 	L3 = (List)malloc(sizeof (struct Node));
				L3->Data = L1->Data;
				L3->Next = NULL;
			    L1 = L1->Next;
		}
		else if (L1==NULL&&L2==NULL) {
			break;
		}
		if (i==0) Head = L3;
		else Tail->Next = L3;
		Tail = L3;
	}
	return Head;       
}
void Print( List L ) {
	PtrToNode P;
	P = L;
	int t=0;
	if(P==NULL) printf("NULL");
	else{
		while (P!=NULL) {
		    t++;
		    if (t!=1) printf (" ");
		    printf ("%d",P->Data);
	     	P = P->Next;
	    }
	}
	
}

