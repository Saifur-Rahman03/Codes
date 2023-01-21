x1 = [0, 0, 0, 1, 2, 0, -3, 4, 0, 0, 0]
x2 = [0, 0, 0, 4, 0, -5, 1, 0, 0, 0, 0]
t = [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5]

yc1 = zeros(1, 10)
yc2 = zeros(1, 10)

% Correlation
j = 1;
for i=-5:5
  yc1(j) =  sum(shift(x1, i) .* x2);
  yc2(j) = sum(shift(x2, i) .* x1);
  j = j + 1;
end

figure(4)

subplot(2,1,1), stem(t, yc1, 'r'), grid on;
title('Correlation of x1(n) and x2(n)');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');


subplot(2,1,2), stem(t, yc2, 'g'), grid on;
title('Correlation of x2(n) and x1(n)');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');

