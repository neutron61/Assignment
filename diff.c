#include <stdlib.h>

/*Step 5 : */

/*Return 0 if ds1 and ds2 are clones,
 * else return -1*/
int
diff (void *root1,    /*pointer to Data structure 1*/
      void *root2,    /*pointer to data structure 2*/
      void *(*iterator(void *)), /*Iterator function callback*/
      int comparator(void *, void *),
      void *(*get_app_data(void *))){  /*Comparison function callback*/

      /*Write your code here*/
	void * appdata1 = get_app_data(root1);
    void * appdata2 = get_app_data(root2);

    while (appdata1 && appdata2) {
        if (!comparator(appdata1,appdata2))
             return 0;

        iterator(root1);
        iterator(root2);
        appdata1 =  get_app_data(root1);
        appdata2 =  get_app_data(root2);
    }
	if (!comparator(appdata1,appdata2))
	     return 0;
	else
	     return 1;
}
