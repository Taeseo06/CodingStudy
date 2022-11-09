# 배열

## 배열의 선언 및 사용양식

---

```jsx
const arr = [1, 2, 3, '사', 5, '육'];
//배열 arr 선언.
```

- 배열의 인덱스는 ‘0’부터 시작
- 배열 요소의 자료형은 섞여서 정의 될 수 있다.!!

```jsx
const arr = [1, 2, 3, '사', 5, '육'];
//배열 arr 선언.

console.log(arr);
//배열 arr출력

console.log(arr[3]);
//배열의 인덱스'3' 요소 출력.
```

- 다른 언어와 마찬가지로 .(도트연산자)를 사용하여 배열요소에 접근할 수 있다.

## 배열의 기본함수

---

- 배열은 변경 (추가, 삭제)될 수 있다.

```jsx
const arr = ['banana', 'car', 'cup'];
//배열 arr선언
```

- 배열의 요소를 추가하는 방법
    - 배열의 마지막 인덱스보다 1큰 배열의 요소를 정의
        
        ```jsx
        arr[3] = 'cup2';
        //arr = ['banana', 'car', 'cup', 'cup2']
        ```
        
    - **.unshift() 사용 - (배열 제일 앞에 새로운 요소추가)**
        
        ```jsx
        arr.unshift('strawberry');
        //arr = ['strawberry', 'banana', 'car', 'cup']
        ```
        
    - **.push() 사용 - (배열 맨뒤에 새로운 요소추가)**
        
        ```jsx
        arr.push('time');
        //arr = ['banana', 'car', 'cup', 'cup2', 'time']
        ```
        

- 배열의 요소를 삭제하는 방법
    - .shift() 사용 - (배열 제일 앞의 요소삭제)
        
        ```jsx
        arr.shift();
        //arr = ['car', 'cup']
        ```
        
    - .pop() 사용 - (배열 제일 뒤의 요소삭제)
        
        ```jsx
        arr.pop();
        //arr = ['banana', 'car']
        ```
        

- 배열의 요소를 변경하는 방법
    - 변경할 요소의 인덱스를 사용하여 다른값을 대입
        
        ```jsx
        arr[0] = 'sunrin';
        //arr = ['sunrin', 'car', 'cup']
        ```
        
    - .splice() 사용 - (특정 구간 인덱스의 요소를 다른 요소로 바꾸거나 삭제하여 새로운 배열을 반환함)
        
        
        - splice는 배열의 삭제, 추가, 변경의 3가지 용도로 사용될 수 있음
        - splice는 원래 배열에 있던 값을 가진 배열을 반환함
        
        - splice(변경을 시작할 요소의 인덱스, 변경할 요소의 범위 + 대체되는 값 …)으로 사용됨
        - 원래의 배열에는 splice로 변경된 값이있음
        - splice로 반환된 배열은 원래 배열에서 변경(삭제)된 값으로 이루어져있음
        
        ```jsx
        // 배열의 요소를 삭제하는 용도의 splice
        
        const arr2 = arr.splice(0, 2);
        //arr = ['cup']
        //arr2 = ['banana', 'car']
        
        //배열의 요소를 변경하는 용도의 splice
        
        const arr2 = arr.splice(0, 2, '딸기', 1000);
        //arr = ['딸기', 1000, 'cup']
        //arr2 = ['banana', 'car']
        ```
        

## 배열의 길이 구하기

---

- 배열의 인덱스는 ‘0’부터 시작한다.

. length 사용 - (배열요소의 갯수를 반환)

```jsx
console.log(arr.length);
//print -> 3
//arr = ['banana', 'car', 'cup']
```

** .length 는 인덱스와 관계없이 배열요소의 개수만을 반환함.
