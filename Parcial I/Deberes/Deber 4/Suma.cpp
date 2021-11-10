#pragma once
#include<iostream>
#include"Suma.h"

template<typename T>
T& Suma<T>::sum(T vec[]) {
	T tot = 0;
	for (int i = 0; i < sizeof(vec);i++) {
		tot = vec[i] + tot;
	}
	return tot;
}