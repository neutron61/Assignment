#ifndef DIFF_H
#define DIFF_H

int  /*return 0 if two Data structures are equal, else -1*/
diff (void *root1,    /*pointer to starting node of list 1*/
      void *root2,    /*pointer to starting node of list 2*/
      void* (*iterator(void *)),        /*Iterator function callback*/
      int comparator(void *, void *),   /*Comparison function callback*/
      void* (*get_app_data(void *)));   /*get application data function callback*/

#endif // DIFF_H
