% Z transformation without function

x = zeros(1, 10);
x(3:7) = [1, 2, 0, -3, 4];

h = zeros(1, 10);
h(5:9) = [4, 0, -5, 1, 0];

syms z;

X = 0;
H = 0;

for i = 1:10
  X = X + x(i) .* (z ^ (5 - i));
  H = H + h(i) .* (z ^ (5 - i));
end

disp(X)
disp(H)

