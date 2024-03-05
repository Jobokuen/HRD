#include<stdio.h>

int main(void)
{
	int nums1[5] = {1,2,3,4,5};
	int nums2[5] = {1,2,3,4,5};
/*
	if(nums1 == nums2){
		printf("nums1 and nums2 are equal\n");
	}else{
		printf("nums1 and nums2 are not equl\n")
	}
*/
	int i ;
	for (i = 0; i < 5; ++i){
		if(nums1[1]==nums2[2]){
			break;
		}
	}

	if (i == 5){
		printf("nums1 and nums2 are equal\n");
	}else{
		printf("nums1 and nums2 are not equl\n");
	}

	return 0;
}
