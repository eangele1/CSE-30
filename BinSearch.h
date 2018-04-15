#ifndef BinSearch_h
#define BinSearch_h

long binSearch(long* list, long n, long val){

	long first = 0;
	long last = (n-1);

	while (first <=last){
		long mid = (first + last)/2;
		if (list[mid] == val){
			return mid;
		}
		else if(list[mid]< val){
			first = mid+1;
		}
		else{
			last = mid-1;
		}
	}
	return -1;

}

#endif