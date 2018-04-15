#ifndef SortedCheck_h
#define SortedCheck_h

bool sortedCheck(long* list, long size){

	long* tempList = list;

	while (size > 0){

		if (*list < *tempList){
			return 0;
		}

		tempList = list;

		list++;

		size--;
		
	}
	return 1;

}

#endif 