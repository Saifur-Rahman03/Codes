shift_value = 0.5

%Sine
left_shifted_sine = sin(2*pi*8*t + shift_value);
right_shifted_sine = sin(2*pi*8*t - shift_value);

%Cosine
left_shifted_cosine = cos(2*pi*8*t + shift_value);
right_shifted_cosine = cos(2*pi*8*t - shift_value);

%Exponential
t = -5:0.01:5
left_shifted_ex = exp(t + shift_value);
right_shifted_ex = exp(t - shift_value);

%Unit Step
left_shifted_step = t >= shift_value;
right_shifted_step = t >= -0.5;

%Unit Ramp
left_shifted_ramp = t.* left_shifted_step;
right_shifted_ramp = t.* right_shifted_step;

figure(3)
%subplot(5, 1, 1);
plot(t, sine, t, left_shifted_sine, 'g', t, right_shifted_sine, 'r');
xlabel('time');
ylabel('signal value');
axis([-0.5 0.5 -0.5 0.5])
legend('sine', 'left shifted sine', 'right shifted sine');
title('Shift Operation of Sine');
grid on


figure(4)
%subplot(5, 2, 1);
plot(t, cosine, t, left_shifted_cosine, 'g', t, right_shifted_cosine, 'r');
xlabel('time');
ylabel('signal value');
axis([-0.5 0.5 -0.5 0.5])
legend('cosine', 'left shifted cosine', 'right shifted cosine');
title('Shift Operation of Cosine');
grid on

figure(5)
%subplot(5, 1, 2);
plot(t, ex, t + 0.5, ex, t - 0.5, ex);
xlabel('time');
ylabel('signal value');
axis([-3 3 -3 3])
legend('exp', 'left shifted exponential', 'right shifted exponential');
title('Shift Operation of Exponential');
grid on

figure(6)
%subplot(5, 1, 2);
plot(t, unitstep, t, left_shifted_step, 'g', t, right_shifted_step, 'r');
axis([-2 2 -2 2])%xmin xmax ymin ymax
xlabel('time');
ylabel('signal value');
legend('unitstep', 'left shifted unitstep', 'right shifted unitstep');
title('Shift Operation of Step');
grid on

figure(7)
%subplot(5, 1, 2);
plot(t, ramp, t, left_shifted_ramp, 'g', t, right_shifted_ramp, 'r');
axis([-2 2 -2 2])%xmin xmax ymin ymax
xlabel('time');
ylabel('signal value');
legend('unitramp', 'left shifted unitramp', 'right shifted unitramp');
title('Shift Operation of Ramp');
grid on

%subplot(3, 1, 1), plot(t, sine), grid on, title('Sine Signal');
%subplot(3, 1, 2), plot(t, left_shifted_sine), grid on, title('Left Shifted Sine Signal');
%subplot(3, 1, 3), plot(t, right_shifted_sine), grid on, title('Right Shifted Sine Signal');
