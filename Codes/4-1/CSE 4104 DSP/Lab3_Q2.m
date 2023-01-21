figure(2)
subplot(5,1,1),stem(t,sine),grid on;
title('Sine Signal');

subplot(5,1,2),stem(t,cosine),grid on;
title('Cosine Signal');

subplot(5,1,3),stem(t,ex),grid on;
title('Exponential Signal');

subplot(5,1,4),stem(t,unitstep),grid on;
title('Unit Step Signal');

subplot(5,1,5),stem(t,ramp),grid on;
title('Unit Ramp Signal');
