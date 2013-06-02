
/**
\file main.cpp 
*/

/**
\fn int main() 
*/

#include <iostream>
#include <cstdlib>

#include "Queuewithpriority.h"

using namespace std;

/** 
@function main
Главная функция
*/
int main(void)
{
    cout << "Test class" << endl;
    QueueWithPriority queue;
    QueueElement qe("l_nya1", LOW);
    queue.putElement(qe); /// каждому элементу при добавлении присваивается уровень приоритета
    queue.putElement(QueueElement("n_nya1", NORMAL));
    queue.putElement("n_nya2", NORMAL);
    queue.putElement("h_nya1", HIGH);
    queue.putElement("h_nya2", HIGH);
    queue.putElement("n_nya3", NORMAL); ///элементу при добавлении присваивается уровень приоритета normal
    queue.putElement("h_nya3", HIGH); ///элементу при добавлении присваивается уровень приоритета high
    queue.putElement("l_nya2", LOW); ///элементу при добавлении присваивается уровень приоритета low

    queue.print_queue();
	cout <<"\nFirst element"<< endl; ///элементы из очереди извлекаются в соответствии с их приоритетами (high, потом normal, потом low)
    cout << queue.getElement() << endl;

	return 0;
}