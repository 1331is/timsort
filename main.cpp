#include "mainwindow.h"
#include <algorithm>
#include <QApplication>
void Merge(int a[], int l, int m, int r){
    int i = l;
    int j = m+1;
    int k = l;
    int temp[5];

    while (i <=m && j <= r){

    }
}
void MergeSort(int a[], int l, int r){
    if (l < r){
        int m = (l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        Merge(a,l,m,r);
    }
}

int getMinrun(int n) {
    int r = 0;
    while (n >= 64) {
        r |= (n & 1);
        n >>= 1;
    }
    return n + r;
}
/*
 * Сортировки. Реализовать сортировку Timsort. В реализации должны быть выполнены все основные элементы алгоритма: сортировка вставками,
 * поиск последовательностей run, подсчёт minrun, слияние последовательностей run, режим галопа при слиянии.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
