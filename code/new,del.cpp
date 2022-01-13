/*class A 
   { 
    private: 
      char *m_cBuffer; 
      int m_nLen; 
 
   `` public: 
      A(){ m_cBuffer = new char[m_nLen]; } 
      ~A() { delete [] m_cBuffer; } 
   }; 
 
   A *a = new A[10]; 
   delete a;         //仅释放了a指针指向的全部内存空间 但是只调用了a[0]对象的析构函数 剩下的从a[1]到a[9]这9个用户自行分配的m_cBuffer对应内存空间将不能释放 从而造成内存泄漏 
   delete[] a;      //调用使用类对象的析构函数释放用户自己分配内存空间并且   释放了a指针指向的全部内存空间 */

//(1) 为基本数据类型分配和回收空间;

//(2) 为自定义类型分配和回收空间;