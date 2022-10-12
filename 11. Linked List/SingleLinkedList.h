// #pragma once
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

void create(int a[], int n, Node **first); // Tạo danh sách liên kết

void display(Node* p); // Duyệt danh sách liên kết không dùng đệ quy

void Display(Node* p); // Duyệt danh sách liên kết có dùng đệ quy

int count(Node* p); // Đếm phần tử của danh sách liên kết không dùng đệ quy

int Count(Node* p); // Đếm phần tử của danh sách liên kết dùng đệ quy

int add(Node* p); // Tính tổng các phần tử của danh sách liên kết không dùng đệ quy

int Add(Node* p); // Tính tổng các phần tử của danh sách liên kết dùng đệ quy

int max(Node* p);