% a gentle introduction to octave/matlab

%elementary math operations
5+6 %can be executed in the command window as well
3-2
5*8
1/2
2^6

%logical operations
1==2 %false = 0
1~=2 %not equal to, true = 1
1&&0
1||0
xor(1,0)

%octave variables
%naming convention is more like C
a = 3
a = 3;%semicolon suppresses the output
b = 'hi';
b
c = (3>=1);
a = pi;
disp(a);%doc disp or help disp for more information
disp(sprintf('2 decimals: %0.2f', a));%more like C
disp(sprintf('6 decimals: %0.6f', a));

format long
a

format short
a

%vectors and matrices
A = [1 2;3 4;5 6];%semicolon means start new row
size(A)
[m,n] = size(A);
[m,~] = size(A);
size(A,1)
size(A,2)
B = [1 2;
    3 4;
    5 6];
v = [1 2 3];%row vector
v = [1;2;3];%(column) vector
length(v)
numel(v)
v = 1:0.1:2;%initialization:increment:end
v = v';%transpose operation
v = 1:10;%default increment value is 1


ones(2,3)
doc randn
C = 5*ones(2,3);
%equivalent to
C = [5 5 5;5 5 5];
w = ones(1,3);
w = zeros(1,3);
w = rand(1,3);
rand(3,3)%follows the uniform distribution
randn(3,3)%follows the Gaussian/Normal distribution (mu = 0, std = 1)
w = -6 + sqrt(10)*(randn(1,10000));%mean = -6, variance = 10, std = sqrt(10)
hist(w)
freq = hist(w,50);

I = eye(4);

%terminal commands
pwd
cd 'F:\Mine\Codes\4-1\CSE 4106 DSP'
ls
addpath('F:\Mine\Codes\4-1\CSE 4106 DSP')%octave search path

%load data from a file
load ex1data1.txt
load ('ex1data1.txt')
who %currently active variables
ex1data1
size(ex1data1)
whos%more detailed information
clear ex1data1%deletes a variable

a = ex1data1(2,1)
A = ex1data1(1:10,:);%: = all
v = ex1data1(1:10,1);
save population.mat v
load population.mat
save population.txt v -ascii%save as text

v = ex1data1(:,1);
w = ex1data1(:,2);
A = ex1data1([1 3],:)

A(:,2) = [10;11];

A = [A [1;2]]%to append a new column

A = [A; [1 2]]

A(:)

A = [1 2;3 4;5 6];
B = [11 12;13 14;15 16];
C = [A B]
C = [A;B]

%computation on data
A = [1 2;3 4;5 6]
B = [11 12;13 14;15 16]
C = [1 1;2 2]

A*C
A*B
A.*B
A.^2
v = [1;2;3]
1./v
1./A
log(v)
exp(v)
abs([-1;2;-3])
-v%-1*v
%to increment the elements of v
v + ones(length(v),1)
v + 1

A'%transpose operation
a = [1 15 2 0.5]
val = max(a)
[val,ind] = max(a)
a < 3 %element wise comparison
find(a<3)
A = magic(3);%rows,columns,diagonals add up to the same thing
[r,c] = find(A>=7)
[r c]
sum(a)
prod(a)
floor(a)
ceil(a)
max(A)
max(A,[],1)
max(A,[],2)
max(max(A))
max(A(:))

A = magic(9);
sum(A,1)
sum(A,2)
sum(sum(A.*eye(9)))%to sum the diagonal elements
sum(diag(A))

flipud(eye(5))

inv(A)
pinv(A)

%plotting data
t = 0:0.01:0.98;
y1 = sin(2*pi*4*t);
plot(t,y1);
y2 = cos(2*pi*4*t);
plot(t,y2);
%use of hold on
plot(t,y1);
hold on;
plot(t,y2,'r');
hold off
xlabel('time');
ylabel('value');
legend('sine','cosine');
title('my plot of sinusoidals');
grid on
print -dpng 'myplot.png'

close%to close the figure
close all

%numbering the figures
figure(1)
plot(t,y1);
figure(2)
plot(t,y2);

%subplot
figure(1)%1x2 grid
subplot(2,1,1),plot(t,y1),grid on;
subplot(2,1,2),plot(t,y2),grid on;

%change the axis
figure(2)
plot(t,y2),
axis([0 0.5 1 -1])%xmin xmax ymin ymax

%imagesc
A = magic(5);
imagesc(A);
imagesc(A),colorbar,colormap(gray);

%control statements
v = zeros(10,1);%initialization
for i=1:10
    v(i) = 2^i;
end

%while loop
i = 1;
while i<=5
    v(i) = 100;
    i = i + 1;
end

%usage of if and break
i = 1;
while true
    v(i) = 999;
    i = i + 1;
    if i == 6
        break;
    end
end

%if-elseif-else
v(1) = 2;
if v(1) == 1
    disp('The value is one');
elseif v(1) == 2
    disp('The value is two');
else
    disp('The value is not one or two.');
end

%function in matlab
myMax(10,9)
%function can return multiple values as well
[maxVal,minVal] = myMaxMin(10,9);

%vectorization of code
%advantages : less code (simpler implementation), less computation time
%inner product computation: component wise multiplication and then add the
%product terms
%unvectorized implementation using for loop
inner_product = 0;
u = [1;2;3];
v = [4;5;6];
for i = 1:3
    inner_product = inner_product + u(i)*v(i);
end

u'*v

%vectorized implementation
A = ex1data1(:,1);
A = [ones(size(A,1),1) A];
y = ex1data1(:,2);
theta = A\y;
figure(1)
plot(ex1data1(:,1),y,'*')
hold on
h = A*theta;
plot(ex1data1(:,1),h)
hold off



%least squares solution to fit a linear model (linear regression)


