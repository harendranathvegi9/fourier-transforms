History:

To understand the importance of the Fourier transform, it is important to step back a little and appreciate the power of the Fourier series put forth by Joseph Fourier. In a nut-shell, any periodic function g(x)g(x) integrable on the domain D=[−π,π]D=[−π,π] can be written as an infinite sum of sines and cosines as

g(x)=∑k=−∞∞τkeȷkx
g(x)=∑k=−∞∞τkeȷkx
τk=12π∫Dg(x)e−ȷkx dx
τk=12π∫Dg(x)e−ȷkx dx
where eıθ=cos(θ)+ȷsin(θ)eıθ=cos⁡(θ)+ȷsin⁡(θ). This idea that a function could be broken down into its constituent frequencies (i.e., into sines and cosines of all frequencies) was a powerful one and forms the backbone of the Fourier transform.

The Fourier transform:

The Fourier transform can be viewed as an extension of the above Fourier series to non-periodic functions. For completeness and for clarity, I'll define the Fourier transform here. If x(t)x(t) is a continuous, integrable signal, then its Fourier transform, X(f)X(f) is given by

X(f)=∫Rx(t)e−ȷ2πft dt,∀f∈R
X(f)=∫Rx(t)e−ȷ2πft dt,∀f∈R
and the inverse transform is given by

x(t)=∫RX(f)eȷ2πft df,∀t∈R
x(t)=∫RX(f)eȷ2πft df,∀t∈R
Importance in signal processing:

First and foremost, a Fourier transform of a signal tells you what frequencies are present in your signal and in what proportions.

Example: Have you ever noticed that each of your phone's number buttons sounds different when you press during a call and that it sounds the same for every phone model? That's because they're each composed of two different sinusoids which can be used to uniquely identify the button. When you use your phone to punch in combinations to navigate a menu, the way that the other party knows what keys you pressed is by doing a Fourier transform of the input and looking at the frequencies present.
Apart from some very useful elementary properties which make the mathematics involved simple, some of the other reasons why it has such a widespread importance in signal processing are:

The magnitude square of the Fourier transform, |X(f)|2|X(f)|2 instantly tells us how much power the signal x(t)x(t) has at a particular frequency ff.
From Parseval's theorem (more generally Plancherel's theorem), we have
∫R|x(t)|2 dt=∫R|X(f)|2 df
∫R|x(t)|2 dt=∫R|X(f)|2 df
which means that the total energy in a signal across all time is equal to the total energy in the transform across all frequencies. Thus, the transform is energy preserving.
Convolutions in the time domain are equivalent to multiplications in the frequency domain, i.e., given two signals x(t)x(t) and y(t)y(t), then if

z(t)=x(t)⋆y(t)
z(t)=x(t)⋆y(t)
where ⋆⋆ denotes convolution, then the Fourier transform of z(t)z(t) is merely

Z(f)=X(f)⋅Y(f)
Z(f)=X(f)⋅Y(f)
For discrete signals, with the development of efficient FFT algorithms, almost always, it is faster to implement a convolution operation in the frequency domain than in the time domain.
Similar to the convolution operation, cross-correlations are also easily implemented in the frequency domain as Z(f)=X(f)∗Y(f)Z(f)=X(f)∗Y(f), where ∗∗ denotes complex conjugate.
By being able to split signals into their constituent frequencies, one can easily block out certain frequencies selectively by nullifying their contributions.
Example: If you're a football (soccer) fan, you might've been annoyed at the constant drone of the vuvuzelas that pretty much drowned all the commentary during the 2010 world cup in South Africa. However, the vuvuzela has a constant pitch of ~235Hz which made it easy for broadcasters to implement a notch filter to cut-off the offending noise.[1]
A shifted (delayed) signal in the time domain manifests as a phase change in the frequency domain. While this falls under the elementary property category, this is a widely used property in practice, especially in imaging and tomography applications,
Example: When a wave travels through a heterogenous medium, it slows down and speeds up according to changes in the speed of wave propagation in the medium. So by observing a change in phase from what's expected and what's measured, one can infer the excess time delay which in turn tells you how much the wave speed has changed in the medium. This is of course, a very simplified layman explanation, but forms the basis for tomography.
Derivatives of signals (nth derivatives too) can be easily calculated(see 106) using Fourier transforms.
Digital signal processing (DSP) vs. Analog signal processing (ASP)

The theory of Fourier transforms is applicable irrespective of whether the signal is continuous or discrete, as long as it is "nice" and absolutely integrable. So yes, ASP uses Fourier transforms as long as the signals satisfy this criterion. However, it is perhaps more common to talk about Laplace transforms, which is a generalized Fourier transform, in ASP. The Laplace transform is defined as

X(s)=∫∞0x(t)e−st dt,∀s∈C
X(s)=∫0∞x(t)e−st dt,∀s∈C
The advantage is that one is not necessarily confined to "nice signals" as in the Fourier transform, but the transform is valid only within a certain region of convergence. It is widely used in studying/analyzing/designing LC/RC/LCR circuits, which in turn are used in radios/electric guitars, wah-wah pedals, etc.
