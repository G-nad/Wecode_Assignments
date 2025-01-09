***Phát sinh mảng cho hàm max***
===
![alt text](image.png)
![alt text](image-1.png)

```c++
int max = array[0], count = 0;
for(int i = 1; i < n; i++){
	if (array[i] >= max) {
		max = array[i];
		count ++;
	}
}
```