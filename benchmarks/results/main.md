#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/make-benchmark/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/make-benchmark/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4472661707291417e-05 | 2.3466858742258315e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.457699769432804e-05 | 2.3511138190377336e-05 | 4.34% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4669814595103367e-05 | 2.357458413327997e-05 | 4.44% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.450717147433218e-05 | 2.3642213972068103e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4508420777571325e-05 | 2.354125808477535e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4739305860607103e-05 | 2.365137604216128e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.4665820195479183e-05 | 2.3789586724011713e-05 | 3.55% | 3.68% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.439969369872125e-05 | 2.36211604561169e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4615115855214678e-05 | 2.3619113185432274e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4678017114344647e-05 | 2.3634427387786082e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4572510597629415e-05 | 2.359994523727068e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4589460027862698e-05 | 2.3576902300287786e-05 | 4.12% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4626820810679497e-05 | 2.3656497480319165e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4747849276462312e-05 | 2.3645006642664146e-05 | 4.46% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4583974056238633e-05 | 2.359287923656128e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4544709483951567e-05 | 2.3595497673351355e-05 | 3.87% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4483334251996926e-05 | 2.3612979719667437e-05 | 3.55% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4560362582342804e-05 | 2.3715761336256807e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4618111348386204e-05 | 2.3531825590540738e-05 | 4.41% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4724049001109708e-05 | 2.369512151196294e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.455291702177301e-05 | 2.3489054130846976e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4546995701513382e-05 | 2.3648568737696574e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4702616628717063e-05 | 2.358890726708897e-05 | 4.51% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.472118702285308e-05 | 2.3681092928277004e-05 | 4.21% | 4.39% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4657610076223038e-05 | 2.3648651237013356e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4726823156436738e-05 | 2.3535193651716672e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3653914360877058e-05 | 2.2463522921498778e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.367130339675212e-05 | 2.2471090243249114e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3710275775608707e-05 | 2.2444446919854474e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.361477010723229e-05 | 2.260641163714182e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3672365620969454e-05 | 2.266128493790144e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3483728850967646e-05 | 2.2321158126020838e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3410234153005702e-05 | 2.2397207109235824e-05 | 4.33% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3879822142704216e-05 | 2.2610183494646515e-05 | 5.32% | 5.62% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3707341209669692e-05 | 2.23886273524005e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3551418758443034e-05 | 2.243911851308063e-05 | 4.72% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3510719283824624e-05 | 2.23905204187659e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3686083409607932e-05 | 2.2399041327006084e-05 | 5.43% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.353267925844908e-05 | 2.212439256999471e-05 | 5.98% | 6.37% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3603149375831055e-05 | 2.2304867249368943e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3655322211436717e-05 | 2.2458400294969834e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3551896996119484e-05 | 2.2462012545588188e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.348006899248821e-05 | 2.2337872550197466e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3731079182003324e-05 | 2.2435234485650645e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3593923305283106e-05 | 2.2709108638725713e-05 | 3.75% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3545559947666643e-05 | 2.232636109174195e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3601974701768285e-05 | 2.2472909513676315e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3717308345073365e-05 | 2.238082290750277e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3552463507213843e-05 | 2.2384453587258148e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3499628297959297e-05 | 2.249559328528787e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3439045884860202e-05 | 2.243335366937186e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3474665417591917e-05 | 2.244344015436289e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3649476421554493e-05 | 2.2514269895929077e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.350082432413607e-05 | 2.2379574973088306e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.354967374644227e-05 | 2.2356450460968857e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3699380822283682e-05 | 2.2363022962208177e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3688186994021613e-05 | 2.2504132572692648e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3459814647501343e-05 | 2.2459391453436926e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.353786183181441e-05 | 2.243084189816341e-05 | 4.70% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3710053351764536e-05 | 2.2425282471030707e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.351338512656775e-05 | 2.2703477064130654e-05 | 3.44% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3459888985467244e-05 | 2.224130189601139e-05 | 5.19% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3426082926715766e-05 | 2.2516488010573154e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3639904174216166e-05 | 2.2379075094912517e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3557719231807014e-05 | 2.2325865953665935e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3502684713504363e-05 | 2.2483876615499802e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3514853476755268e-05 | 2.2312054839415482e-05 | 5.12% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3561912372766432e-05 | 2.234327746781412e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.3597023147576657e-05 | 2.2328309898491414e-05 | 5.38% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.349464058788358e-05 | 2.2312919858327352e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3530382375257288e-05 | 2.2393526597393004e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3490329639579773e-05 | 2.2285679973939054e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.365497048561587e-05 | 2.2368718712111794e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3677383900212466e-05 | 2.257980858609838e-05 | 4.64% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.373143030034161e-05 | 2.2399243730856478e-05 | 5.61% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3418659748818482e-05 | 2.233583505805335e-05 | 4.62% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.371027313023741e-05 | 2.2377234922974275e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3476020332764552e-05 | 2.2262347783929915e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3650334570994406e-05 | 2.2456625990548107e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.360638845925334e-05 | 2.225244633189211e-05 | 5.74% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3599430114752546e-05 | 2.2276426502177903e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3659717892892452e-05 | 2.224203579393862e-05 | 5.99% | 6.37% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.356144305176894e-05 | 2.2182210934811652e-05 | 5.85% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3657955453601163e-05 | 2.254457567461397e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.363732391526449e-05 | 2.2349858719311495e-05 | 5.45% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.375499392533822e-05 | 2.2312162854192733e-05 | 6.07% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.358644437320078e-05 | 2.2560049659482412e-05 | 4.35% | 4.55% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3566858219457378e-05 | 2.2529515671086355e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3609738217025402e-05 | 2.234154698199972e-05 | 5.37% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.360249062156897e-05 | 2.2257091582596772e-05 | 5.70% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3587794438844678e-05 | 2.2344717666296922e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.355731697745838e-05 | 2.2411460741974493e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3543079305190536e-05 | 2.2266975316754835e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3627651785829928e-05 | 2.2303232130674877e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3508286837327063e-05 | 2.2286006884281854e-05 | 5.20% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.365663479960213e-05 | 2.24636060328567e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3606786794594802e-05 | 2.510523678816978e-05 | -6.35% | -5.97% | 0.94x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3712867547093327e-05 | 2.2491429260770252e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3638129883065257e-05 | 2.217741330634203e-05 | 6.18% | 6.59% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.350822288437943e-05 | 2.2473473186295112e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3735509956886047e-05 | 2.229784147513683e-05 | 6.06% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.36013913958991e-05 | 2.2335582363501212e-05 | 5.36% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.372542277858427e-05 | 2.2262855229102148e-05 | 6.16% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.349573528727234e-05 | 2.2312885095463225e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3741483154848343e-05 | 2.2661202762327262e-05 | 4.55% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3748330224055847e-05 | 2.2298272342409772e-05 | 6.11% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3611231613725396e-05 | 2.2481809513605065e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3635841102263847e-05 | 2.2410603161290452e-05 | 5.18% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.371284068676666e-05 | 2.2411515482566435e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.355537033211467e-05 | 2.2419893757539325e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3707024161814725e-05 | 2.2401077410274593e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3674661939976228e-05 | 2.216575296324091e-05 | 6.37% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3773489719073047e-05 | 2.265448854514742e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.364147893209844e-05 | 2.2339624109454158e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3758341857574795e-05 | 2.2093724080794743e-05 | 7.01% | 7.53% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3631634809177238e-05 | 2.243971373125132e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.361858769380911e-05 | 2.2386458170430285e-05 | 5.22% | 5.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3681610777233446e-05 | 2.239157479907887e-05 | 5.45% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3689329935813062e-05 | 2.2314884715662066e-05 | 5.80% | 6.16% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3728066745723532e-05 | 2.2534959614947212e-05 | 5.03% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.378492947793379e-05 | 2.2319332618047665e-05 | 6.16% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3631911877312698e-05 | 2.2298542172818308e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3677077914760805e-05 | 2.2424196499037976e-05 | 5.29% | 5.59% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3709334388712777e-05 | 2.2478038709757012e-05 | 5.19% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.372484070626804e-05 | 2.2302265645464103e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3647416430367883e-05 | 2.242730373350649e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.4049565375863137e-05 | 2.2422355673169315e-05 | 6.77% | 7.26% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3640689939527118e-05 | 2.2295142182668216e-05 | 5.69% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3596571450424333e-05 | 2.229508628832565e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3710205836199287e-05 | 2.242821953314232e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.335361486105321e-05 | 2.2314413699419055e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3517260899778204e-05 | 2.2230120287059016e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3453647063064917e-05 | 2.2322180605015268e-05 | 4.82% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3526805013436077e-05 | 2.245601976814912e-05 | 4.55% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.339135788737607e-05 | 2.2105579948578923e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3701058181330544e-05 | 2.247883509865566e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3711248345897714e-05 | 2.280591369081298e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3378621576994667e-05 | 2.2244870019947232e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3441983942264113e-05 | 2.2157035376587068e-05 | 5.48% | 5.80% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.343283511390203e-05 | 2.2372197901205154e-05 | 4.53% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3205660496689954e-05 | 2.231750448762149e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3611136666380603e-05 | 2.234785441543575e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3603381716775045e-05 | 2.264972683086415e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.3779646885708388e-05 | 2.2635397409758526e-05 | 4.81% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3604406799553288e-05 | 2.2323969945256724e-05 | 5.42% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.366637904434628e-05 | 2.248658159737897e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3626938783908857e-05 | 2.2302226662851185e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.347876503908877e-05 | 2.2282758235592302e-05 | 5.09% | 5.37% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3524264736678465e-05 | 2.2309981441903424e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.37266256087456e-05 | 2.255694463627861e-05 | 4.93% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.35869630724806e-05 | 2.2658809563816513e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3526615139728432e-05 | 2.2419636430956126e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3603471928787953e-05 | 2.23624526760868e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3466354049967494e-05 | 2.226282545999091e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.348035979303214e-05 | 2.229729534151137e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.355446438762229e-05 | 2.266761257281256e-05 | 3.77% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.355956825753474e-05 | 2.246064438097619e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3517083695787736e-05 | 2.2547314422149923e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3591089876334224e-05 | 2.243014862620661e-05 | 4.92% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3531115594799295e-05 | 2.2359195392193663e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3501341203005697e-05 | 2.233586489732463e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3524719677058867e-05 | 2.243946332590261e-05 | 4.61% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3368880976246652e-05 | 2.240879756271063e-05 | 4.11% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.330962605876996e-05 | 2.2384691176074942e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3577903314351824e-05 | 2.2373640504793813e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.354668151454387e-05 | 2.2336526481644465e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3479603265358603e-05 | 2.2447979132455663e-05 | 4.39% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.352228983364377e-05 | 2.23392744284128e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3590061967432985e-05 | 2.23475147348799e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3547466565964215e-05 | 2.264199540058984e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.351500458550898e-05 | 2.2374244090788593e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.358053294342417e-05 | 2.2358837910250792e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.190379988157797e-05 | 5.934538038641278e-05 | 27.54% | 38.01% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.306939431463772e-05 | 5.871836312443319e-05 | 29.31% | 41.47% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.18350433749647e-05 | 5.915802341894911e-05 | 27.71% | 38.33% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.151850216305233e-05 | 5.891015027224754e-05 | 27.73% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.187954747058233e-05 | 5.9522188372573715e-05 | 27.31% | 37.56% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.165298670236829e-05 | 5.8895778242261234e-05 | 27.87% | 38.64% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 8.015666503656268e-05 | 5.636580608468528e-05 | 29.68% | 42.21% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.299435712299563e-05 | 5.897243731602382e-05 | 28.94% | 40.73% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.209526564860326e-05 | 5.878302934937172e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.219794570044344e-05 | 5.8942664595957334e-05 | 28.29% | 39.45% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.266646314940752e-05 | 5.908512168616611e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.191289973878277e-05 | 5.9230602501143507e-05 | 27.69% | 38.29% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.242006104329696e-05 | 5.8831916827331786e-05 | 28.62% | 40.09% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.248998066857959e-05 | 5.8644429017875204e-05 | 28.91% | 40.66% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.24324151648069e-05 | 5.9038166584085244e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.20138807319668e-05 | 5.8241598663742474e-05 | 28.99% | 40.82% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.29576046089224e-05 | 5.846771270274366e-05 | 29.52% | 41.89% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.261282259865186e-05 | 5.879505285073481e-05 | 28.83% | 40.51% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.284415612197723e-05 | 5.9818821878731056e-05 | 27.79% | 38.49% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.18040996194119e-05 | 5.8882170226571184e-05 | 28.02% | 38.93% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.230085291108775e-05 | 5.9282401991982324e-05 | 27.97% | 38.83% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.184016471954797e-05 | 5.8836097776341775e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.20350173004139e-05 | 5.9099185002785685e-05 | 27.96% | 38.81% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.232634657337168e-05 | 5.8969987376407175e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.265823799851756e-05 | 5.9101634717045784e-05 | 28.50% | 39.86% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.127348929034912e-05 | 5.884959334779851e-05 | 27.59% | 38.10% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.0323789969524e-05 | 5.709163220273039e-05 | 28.92% | 40.69% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.040990334252973e-05 | 5.724486967501335e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.174733287634098e-05 | 5.9048096742616875e-05 | 27.77% | 38.44% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.220468111512177e-05 | 5.996623213296902e-05 | 27.05% | 37.08% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.242157311758781e-05 | 5.954675929630296e-05 | 27.75% | 38.41% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.3517181313903e-05 | 5.996525207398075e-05 | 28.20% | 39.28% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.226495794936503e-05 | 5.9849239834001016e-05 | 27.25% | 37.45% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.275795642211439e-05 | 5.97115946471853e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.248972071941094e-05 | 5.9105420477193046e-05 | 28.35% | 39.56% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.06583769469954e-05 | 5.6761411306731954e-05 | 29.63% | 42.10% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.342859903328984e-05 | 5.9083516825544157e-05 | 29.18% | 41.20% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.277335614072913e-05 | 5.9003158127748685e-05 | 28.72% | 40.29% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.272338446651138e-05 | 6.001493802792191e-05 | 27.45% | 37.84% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.319674283673023e-05 | 5.934207942308621e-05 | 28.67% | 40.20% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.336583601826963e-05 | 5.925328835292872e-05 | 28.92% | 40.69% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.215148830945994e-05 | 5.975433094794774e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.248656643039752e-05 | 6.0073172728794306e-05 | 27.17% | 37.31% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.202934692310486e-05 | 5.9897841958690104e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.299701225521836e-05 | 5.9209272001580495e-05 | 28.66% | 40.18% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.24562462120678e-05 | 5.906454846798839e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.26911094857488e-05 | 5.928744990410511e-05 | 28.30% | 39.47% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.334650901847517e-05 | 5.972757637932566e-05 | 28.34% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.238628864224607e-05 | 5.9647041042497146e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.362615315509049e-05 | 5.900502715179114e-05 | 29.44% | 41.73% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.25320335760378e-05 | 5.988205698569665e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.366725928176524e-05 | 5.933794158086095e-05 | 29.08% | 41.00% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.257130723389882e-05 | 5.806203120835167e-05 | 29.68% | 42.21% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.218181484660324e-05 | 6.011678870722912e-05 | 26.85% | 36.70% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.339078573234548e-05 | 5.9232738133578624e-05 | 28.97% | 40.78% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.18038388587744e-05 | 5.731708917396799e-05 | 29.93% | 42.72% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.246684336790971e-05 | 5.730594220744938e-05 | 30.51% | 43.91% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.331555987817469e-05 | 5.902576857460939e-05 | 29.15% | 41.15% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.262541693452296e-05 | 6.016890385186118e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.254603338104102e-05 | 5.9556847631629874e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.289980322205707e-05 | 5.945475213511626e-05 | 28.28% | 39.43% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.196601146907169e-05 | 5.9986457201494123e-05 | 26.82% | 36.64% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.247472236739025e-05 | 5.9679885320393936e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.182838137674554e-05 | 6.022047807700847e-05 | 26.41% | 35.88% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.100230318268411e-05 | 5.622103896727064e-05 | 30.59% | 44.08% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.268399683022635e-05 | 5.9242404339934066e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.368417926848318e-05 | 5.9896000749304865e-05 | 28.43% | 39.72% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.972273251013468e-05 | 5.9580936373408155e-05 | 25.26% | 33.81% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.248868139793032e-05 | 5.949036400085637e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.276231304619346e-05 | 5.937935366189107e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.210445735528278e-05 | 5.961196226615494e-05 | 27.39% | 37.73% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.29549210698803e-05 | 5.944126700817022e-05 | 28.35% | 39.56% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.305836089794266e-05 | 5.965193846031066e-05 | 28.18% | 39.24% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.342195755338989e-05 | 5.8720529437523465e-05 | 29.61% | 42.07% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.229921982544033e-05 | 5.929216200186053e-05 | 27.96% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.480120655195051e-05 | 5.940838054497666e-05 | 29.94% | 42.74% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.325303497639755e-05 | 5.934153174067927e-05 | 28.72% | 40.29% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.254264216731829e-05 | 5.90476081932961e-05 | 28.46% | 39.79% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.280443354180441e-05 | 5.979672559168633e-05 | 27.79% | 38.48% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.248463309432029e-05 | 5.986669237395913e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.32483943160949e-05 | 5.967312692634763e-05 | 28.32% | 39.51% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.332319380562967e-05 | 5.942125134073383e-05 | 28.69% | 40.22% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.297387854650085e-05 | 5.964153877945102e-05 | 28.12% | 39.12% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.241375131287796e-05 | 5.9711924968636506e-05 | 27.55% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.048451245919201e-05 | 5.690824172589235e-05 | 29.29% | 41.43% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.053455099169198e-05 | 5.739148997478836e-05 | 28.74% | 40.32% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.275223330289797e-05 | 5.9173005645839215e-05 | 28.49% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.105186004734886e-05 | 5.8003859022091226e-05 | 28.44% | 39.74% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.273560361168663e-05 | 6.067622227964549e-05 | 26.66% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.269635508359338e-05 | 6.023436069211172e-05 | 27.16% | 37.29% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.157208634255586e-05 | 5.905724809919495e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.193677559627354e-05 | 5.818811851834678e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.202741255959191e-05 | 5.915835239963054e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.894964681444543e-05 | 5.6644350189357074e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.127519283895609e-05 | 5.922029543361223e-05 | 27.14% | 37.24% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.146829115874127e-05 | 5.916134102225352e-05 | 27.38% | 37.71% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.161911378722524e-05 | 5.970169885843873e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010383269134602709 | 8.036156324030432e-05 | 22.60% | 29.21% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.94449955354334e-05 | 5.677473578859056e-05 | 28.54% | 39.93% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.192500146592935e-05 | 5.891459129163992e-05 | 28.09% | 39.06% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.230297558326546e-05 | 5.901208059020412e-05 | 28.30% | 39.47% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.194251070605032e-05 | 5.897350088054158e-05 | 28.03% | 38.95% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.150004087287909e-05 | 5.906512820854441e-05 | 27.53% | 37.98% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.147403952079107e-05 | 5.8948735349359155e-05 | 27.65% | 38.21% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.646762911321298e-05 | 7.462926367199821e-05 | 22.64% | 29.26% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.890979746114898e-05 | 5.76177794769648e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.948382061001204e-05 | 7.32151479945905e-05 | 26.40% | 35.88% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.285677140729749e-05 | 6.025146464123879e-05 | 27.28% | 37.52% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.139309330722131e-05 | 5.848353973388271e-05 | 28.15% | 39.17% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.191586176169067e-05 | 5.895904427728067e-05 | 28.02% | 38.94% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.177785081378596e-05 | 5.8894064719025375e-05 | 27.98% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.180280247881963e-05 | 5.910627578147117e-05 | 27.75% | 38.40% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.218237026078734e-05 | 6.026949161219534e-05 | 26.66% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.945711646350504e-05 | 5.626680568449005e-05 | 29.19% | 41.21% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.951565598931574e-05 | 5.6298164590781294e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.17818039682081e-05 | 5.953127149636881e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.023061829538044e-05 | 5.748860211971954e-05 | 28.35% | 39.56% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.122881810002127e-05 | 5.929266464153064e-05 | 27.01% | 37.00% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.111841312277588e-05 | 5.924382548343755e-05 | 26.97% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.005560228274258e-05 | 5.786158347990837e-05 | 27.72% | 38.36% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.036835898500966e-05 | 5.8267784922765574e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.108383815033608e-05 | 5.792121136243297e-05 | 28.57% | 39.99% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.828553026141559e-05 | 5.455796085052709e-05 | 30.31% | 43.49% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.058342266376741e-05 | 5.871231176404337e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.088212759148858e-05 | 5.781033106694499e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.103052819391699e-05 | 5.84753745577849e-05 | 27.84% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010502145010170153 | 8.12024845972436e-05 | 22.68% | 29.33% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.090135145183484e-05 | 5.8644098766747754e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.056686472834691e-05 | 5.772077360620228e-05 | 28.36% | 39.58% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.992459015922476e-05 | 5.753768476812431e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.109369857041423e-05 | 5.7359354553995725e-05 | 29.27% | 41.38% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.134969846186881e-05 | 5.900299416652736e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.162715018441804e-05 | 5.85611323638553e-05 | 28.26% | 39.39% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.59268759523392e-05 | 7.567598646064693e-05 | 21.11% | 26.76% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.06228655071301e-05 | 5.861250174110627e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.845893342731985e-05 | 7.506069143812594e-05 | 23.76% | 31.17% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.17399992426917e-05 | 5.94097225324592e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.132324147905934e-05 | 5.7712532626782305e-05 | 29.03% | 40.91% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.029629556537445e-05 | 5.832565972514969e-05 | 27.36% | 37.67% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.030794487916832e-05 | 5.816629572743251e-05 | 27.57% | 38.07% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.08390687644724e-05 | 5.728432779530604e-05 | 29.14% | 41.12% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.12800260295623e-05 | 5.9243544196419686e-05 | 27.11% | 37.20% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.811070465690947e-05 | 5.613959721580183e-05 | 28.13% | 39.14% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.894191613815326e-05 | 5.59389838300982e-05 | 29.14% | 41.12% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.054082858789044e-05 | 5.851001123656311e-05 | 27.35% | 37.65% | 1.38x | ✅ |
| `hexbytes_new['']` | 6.938619278288445e-05 | 3.760541703900335e-05 | 45.80% | 84.51% | 1.85x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.17517351843006e-05 | 5.0370068112333096e-05 | 45.10% | 82.16% | 1.82x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.074924301477318e-05 | 5.066484938897335e-05 | 44.17% | 79.12% | 1.79x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.565398370044108e-05 | 4.771718630114923e-05 | 44.29% | 79.50% | 1.80x | ✅ |
| `hexbytes_new['0x']` | 7.725664702057014e-05 | 3.882996071666457e-05 | 49.74% | 98.96% | 1.99x | ✅ |
| `hexbytes_new['0x1234']` | 8.429097997870164e-05 | 4.554478647275071e-05 | 45.97% | 85.07% | 1.85x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.438827612660532e-05 | 4.520680997711317e-05 | 46.43% | 86.67% | 1.87x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.403600284981716e-05 | 4.53006270585836e-05 | 46.09% | 85.51% | 1.86x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.475748082895605e-05 | 4.52282525403496e-05 | 46.64% | 87.40% | 1.87x | ✅ |
| `hexbytes_new['abc']` | 8.086201568945207e-05 | 4.7545473198866524e-05 | 41.20% | 70.07% | 1.70x | ✅ |
| `hexbytes_new['deadbeef']` | 7.570429274306797e-05 | 4.2122278998453166e-05 | 44.36% | 79.73% | 1.80x | ✅ |
| `hexbytes_new[0-9]` | 4.237510071616e-05 | 2.6309048186758913e-05 | 37.91% | 61.07% | 1.61x | ✅ |
| `hexbytes_new[0]` | 0.0001207044236616555 | 5.969908674901084e-05 | 50.54% | 102.19% | 2.02x | ✅ |
| `hexbytes_new[123456]` | 0.00012369956585346885 | 6.607715759253772e-05 | 46.58% | 87.20% | 1.87x | ✅ |
| `hexbytes_new[2**16]` | 0.00012361578323309407 | 6.568136750569354e-05 | 46.87% | 88.21% | 1.88x | ✅ |
| `hexbytes_new[2**256-1]` | 0.0001280822799575219 | 7.24366571099162e-05 | 43.45% | 76.82% | 1.77x | ✅ |
| `hexbytes_new[2**32]` | 0.00012443786451352677 | 6.821308332106753e-05 | 45.18% | 82.43% | 1.82x | ✅ |
| `hexbytes_new[2**64]` | 0.00012540451166720074 | 7.09794123948543e-05 | 43.40% | 76.68% | 1.77x | ✅ |
| `hexbytes_new[2**8]` | 0.00012252716872218335 | 6.345577590868693e-05 | 48.21% | 93.09% | 1.93x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.339174803270454e-05 | 2.731013743221346e-05 | 37.06% | 58.89% | 1.59x | ✅ |
| `hexbytes_new[False]` | 6.03837168361066e-05 | 2.676308872885696e-05 | 55.68% | 125.62% | 2.26x | ✅ |
| `hexbytes_new[True]` | 6.0816531341101104e-05 | 2.7062894364235804e-05 | 55.50% | 124.72% | 2.25x | ✅ |
| `hexbytes_new[all byte values]` | 4.363375525364799e-05 | 2.6877653320084318e-05 | 38.40% | 62.34% | 1.62x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3538257513170315e-05 | 2.6697977932997607e-05 | 38.68% | 63.08% | 1.63x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.377506451607436e-05 | 2.6875586455361764e-05 | 38.61% | 62.88% | 1.63x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.2666445100202885e-05 | 2.616686706865067e-05 | 38.67% | 63.06% | 1.63x | ✅ |
| `hexbytes_new[b'']` | 4.168449339451173e-05 | 2.542037724012178e-05 | 39.02% | 63.98% | 1.64x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.275307905560597e-05 | 2.625612717685198e-05 | 38.59% | 62.83% | 1.63x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.244781916280666e-05 | 2.5703013078055828e-05 | 39.45% | 65.15% | 1.65x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.350345449457151e-05 | 2.661157463500857e-05 | 38.83% | 63.48% | 1.63x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.5529256011204345e-05 | 3.885958457959185e-05 | 30.02% | 42.90% | 1.43x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.326020703542453e-05 | 2.61984116304066e-05 | 39.44% | 65.13% | 1.65x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.248132216975691e-05 | 2.6211183294512374e-05 | 38.30% | 62.07% | 1.62x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.259667035474647e-05 | 2.6115170614018678e-05 | 38.69% | 63.11% | 1.63x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2053410108130946e-05 | 2.6123096532551874e-05 | 37.88% | 60.98% | 1.61x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.267779942043575e-05 | 2.6217997176313375e-05 | 38.57% | 62.78% | 1.63x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.291619083103965e-05 | 2.6865156482154072e-05 | 37.40% | 59.75% | 1.60x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.075167504145122e-05 | 3.3199430823288664e-05 | 34.58% | 52.87% | 1.53x | ✅ |
| `hexbytes_new[b'abc']` | 4.2488018542870964e-05 | 2.6519504081855407e-05 | 37.58% | 60.21% | 1.60x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.878458131283852e-05 | 3.7240083221183345e-05 | 45.86% | 84.71% | 1.85x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.985115359135715e-05 | 3.778264588254597e-05 | 45.91% | 84.88% | 1.85x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.911742473937819e-05 | 3.802843927215381e-05 | 44.98% | 81.75% | 1.82x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.90019263668787e-05 | 3.790830804747277e-05 | 45.06% | 82.02% | 1.82x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.897162405011948e-05 | 3.793614908955955e-05 | 45.00% | 81.81% | 1.82x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.879613615322103e-05 | 4.076996537750976e-05 | 40.74% | 68.74% | 1.69x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.758860726389019e-05 | 3.5571258201564745e-05 | 47.37% | 90.01% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.94585844743919e-05 | 3.737516721536837e-05 | 46.19% | 85.84% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.888417000880959e-05 | 3.787867498468845e-05 | 45.01% | 81.85% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.922407640918112e-05 | 3.758085784644384e-05 | 45.71% | 84.20% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.013634310432992e-05 | 5.678903926740411e-05 | 37.00% | 58.72% | 1.59x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.989947108712522e-05 | 3.8159258614925595e-05 | 45.41% | 83.18% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.874091150602528e-05 | 3.779333271661767e-05 | 45.02% | 81.89% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.80019843127132e-05 | 3.7341941545472245e-05 | 45.09% | 82.11% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.830300579614708e-05 | 3.743678500676213e-05 | 45.19% | 82.45% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.949521752123289e-05 | 3.790427335381117e-05 | 45.46% | 83.34% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.925205136252939e-05 | 3.7653665445667726e-05 | 45.63% | 83.92% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.413324114992084e-05 | 5.0073075524725044e-05 | 40.48% | 68.02% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.89095689412439e-05 | 3.812388610239906e-05 | 44.68% | 80.75% | 1.81x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.427474198621472e-05 | 5.0416838657692486e-05 | 40.18% | 67.16% | 1.67x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.91808224859089e-05 | 3.764755990322622e-05 | 45.58% | 83.76% | 1.84x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.860518146305064e-05 | 3.733201180743785e-05 | 45.58% | 83.77% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.780069339701013e-05 | 3.795894198873789e-05 | 44.01% | 78.62% | 1.79x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.89184321921041e-05 | 3.805052374508036e-05 | 44.79% | 81.12% | 1.81x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.90938170801417e-05 | 3.771064115941096e-05 | 45.42% | 83.22% | 1.83x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.987840012003069e-05 | 3.7624769764429055e-05 | 46.16% | 85.72% | 1.86x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 7.000516463656183e-05 | 3.7687196540373684e-05 | 46.17% | 85.75% | 1.86x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.015859492200782e-05 | 3.785054729291423e-05 | 46.05% | 85.36% | 1.85x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.941110504189939e-05 | 3.806721542283591e-05 | 45.16% | 82.34% | 1.82x | ✅ |
| `hexbytes_new[long alternating]` | 5.0617458606221975e-05 | 3.3197977808250656e-05 | 34.41% | 52.47% | 1.52x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.285841260315195e-05 | 4.388353889002814e-05 | 47.04% | 88.81% | 1.89x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.43034407301335e-05 | 4.342217090998564e-05 | 48.49% | 94.15% | 1.94x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.352891036327335e-05 | 4.4133318333829334e-05 | 47.16% | 89.26% | 1.89x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.434044589648633e-05 | 4.401757391660821e-05 | 47.81% | 91.61% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.375316817375239e-05 | 4.381726201162182e-05 | 47.68% | 91.14% | 1.91x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.325435829272897e-05 | 4.3119868932190346e-05 | 48.21% | 93.08% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.074546988395617e-05 | 3.9798509102276206e-05 | 50.71% | 102.89% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.473821290272063e-05 | 4.3739309019476473e-05 | 48.38% | 93.73% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.277839816231509e-05 | 4.3447491597585724e-05 | 47.51% | 90.53% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.420769284794484e-05 | 4.357708329806015e-05 | 48.25% | 93.24% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010464641349548765 | 6.329160840146956e-05 | 39.52% | 65.34% | 1.65x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.216828041800318e-05 | 4.3544269016002456e-05 | 47.01% | 88.70% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.227146414316733e-05 | 4.362370193817801e-05 | 46.98% | 88.59% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.265903721479144e-05 | 4.3375237201619367e-05 | 47.53% | 90.57% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.367536206883866e-05 | 4.3386383257224006e-05 | 48.15% | 92.86% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.351041551341017e-05 | 4.332157431897943e-05 | 48.12% | 92.77% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.449341744830508e-05 | 4.387295937276842e-05 | 48.08% | 92.59% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.814737181945632e-05 | 5.7020825436471866e-05 | 41.90% | 72.13% | 1.72x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.419454583008365e-05 | 4.327156908772533e-05 | 48.61% | 94.57% | 1.95x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.682731675000878e-05 | 5.588489093011249e-05 | 42.28% | 73.26% | 1.73x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.180882420428777e-05 | 4.3382570181940554e-05 | 46.97% | 88.58% | 1.89x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.300722366951443e-05 | 4.2944218833470775e-05 | 48.26% | 93.29% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.28725845268707e-05 | 4.3189600607859877e-05 | 47.88% | 91.88% | 1.92x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.386659214107966e-05 | 4.241922905766875e-05 | 49.42% | 97.71% | 1.98x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.287787518438645e-05 | 4.262766999371227e-05 | 48.57% | 94.42% | 1.94x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.379761331339269e-05 | 4.359878960438296e-05 | 47.97% | 92.20% | 1.92x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.26511607904935e-05 | 4.298768516529673e-05 | 47.99% | 92.27% | 1.92x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.339817014639323e-05 | 4.3067625550951465e-05 | 48.36% | 93.64% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.275112224714799e-05 | 4.391395656304182e-05 | 46.93% | 88.44% | 1.88x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3095925186633244e-05 | 2.6781073775267203e-05 | 37.86% | 60.92% | 1.61x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.281892991444951e-05 | 2.6012609534216782e-05 | 39.25% | 64.61% | 1.65x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.273420128519318e-05 | 2.597909980250872e-05 | 39.21% | 64.49% | 1.64x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.1979992111094876e-05 | 2.601550961849127e-05 | 38.03% | 61.37% | 1.61x | ✅ |
| `hexbytes_new[palindrome]` | 4.285664705094974e-05 | 2.5961445845332673e-05 | 39.42% | 65.08% | 1.65x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.27439415323296e-05 | 2.6719970002806213e-05 | 37.49% | 59.97% | 1.60x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2261936799987275e-05 | 2.5512186268485627e-05 | 39.63% | 65.65% | 1.66x | ✅ |
| `hexbytes_new[single null byte]` | 4.214569941716429e-05 | 2.529209672055853e-05 | 39.99% | 66.64% | 1.67x | ✅ |
| `hexbytes_new[two patterns]` | 4.2684167156417634e-05 | 2.6716881789297264e-05 | 37.41% | 59.76% | 1.60x | ✅ |
| `hexbytes_repr[0-9]` | 2.894588524008421e-05 | 1.4899247747842206e-05 | 48.53% | 94.28% | 1.94x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012060524852572275 | 4.128620288946952e-05 | 65.77% | 192.12% | 2.92x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012085624745242802 | 4.147924330490503e-05 | 65.68% | 191.37% | 2.91x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.858495295259968e-05 | 2.0080497960463707e-05 | 58.67% | 141.95% | 2.42x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.923210552265169e-05 | 2.0175670745319566e-05 | 59.02% | 144.02% | 2.44x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.037655470204624e-05 | 1.8383612227928805e-05 | 54.47% | 119.63% | 2.20x | ✅ |
| `hexbytes_repr[b'']` | 2.1066234361430925e-05 | 1.2459731272482898e-05 | 40.85% | 69.07% | 1.69x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.607995898214466e-05 | 1.697274539933052e-05 | 52.96% | 112.58% | 2.13x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6273048148631072e-05 | 1.4464436076848599e-05 | 44.95% | 81.64% | 1.82x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.37556014602889e-05 | 2.377308403427677e-05 | 62.71% | 168.18% | 2.68x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007630583051378909 | 0.00022458614986725658 | 70.57% | 239.76% | 3.40x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.5907584747822565e-05 | 1.443686941690129e-05 | 44.28% | 79.45% | 1.79x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.6765296745786857e-05 | 1.4487959800621988e-05 | 45.87% | 84.74% | 1.85x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8233080452065127e-05 | 1.4805438807790449e-05 | 47.56% | 90.69% | 1.91x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8446872787651083e-05 | 1.4688553891964364e-05 | 48.36% | 93.67% | 1.94x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6213814176787643e-05 | 1.4337545312575689e-05 | 45.31% | 82.83% | 1.83x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.856495291395626e-05 | 2.0022713069369518e-05 | 58.77% | 142.55% | 2.43x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004031458809698011 | 0.00011884841348234935 | 70.52% | 239.21% | 3.39x | ✅ |
| `hexbytes_repr[b'abc']` | 2.5834359485922872e-05 | 1.4297845449476436e-05 | 44.66% | 80.69% | 1.81x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003995816625334203 | 0.00012242671432351475 | 69.36% | 226.38% | 3.26x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.770163130203125e-05 | 3.423432420152483e-05 | 64.96% | 185.39% | 2.85x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.884832441213508e-05 | 1.4938449881754098e-05 | 48.22% | 93.11% | 1.93x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.73782424098731e-05 | 1.444876865390348e-05 | 47.23% | 89.48% | 1.89x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.683518307320923e-05 | 1.4390224247051856e-05 | 46.38% | 86.48% | 1.86x | ✅ |
| `hexbytes_repr[palindrome]` | 3.1790496623232954e-05 | 1.5963203310177842e-05 | 49.79% | 99.15% | 1.99x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.399714320035098e-05 | 2.4031319185576113e-05 | 62.45% | 166.31% | 2.66x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5515490219912863e-05 | 1.4437645148760041e-05 | 43.42% | 76.73% | 1.77x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5167631951924074e-05 | 1.423133409787509e-05 | 43.45% | 76.85% | 1.77x | ✅ |
| `hexbytes_repr[two patterns]` | 4.8585950193884997e-05 | 2.0357756564245936e-05 | 58.10% | 138.66% | 2.39x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.544961809097447e-05 | 1.3642734209110571e-05 | 11.70% | 13.24% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.226468706127327e-05 | 4.0000431516804294e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.2334208867862064e-05 | 4.022960731066302e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0546203700786903e-05 | 1.8948895355544675e-05 | 7.77% | 8.43% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0689377084378802e-05 | 1.883388020305997e-05 | 8.97% | 9.85% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8760293349930132e-05 | 1.6893597428837184e-05 | 9.95% | 11.05% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0031205415641834e-05 | 1.121360482582497e-05 | -11.79% | -10.54% | 0.89x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.74070832714692e-05 | 1.583747911092421e-05 | 9.02% | 9.91% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5471478705487503e-05 | 1.3162780179825988e-05 | 14.92% | 17.54% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5197144233818322e-05 | 2.266483233562825e-05 | 10.05% | 11.17% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022236359129712874 | 0.00022144785128371759 | 0.41% | 0.41% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4799208604862832e-05 | 1.3285546280754111e-05 | 10.23% | 11.39% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4858089747206222e-05 | 1.3422149598616265e-05 | 9.66% | 10.70% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.524439942594406e-05 | 1.3603496717257668e-05 | 10.76% | 12.06% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.523115453100077e-05 | 1.3656859560581806e-05 | 10.34% | 11.53% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4809399667126596e-05 | 1.3165530735771046e-05 | 11.10% | 12.49% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.093005373752278e-05 | 1.8756976847091458e-05 | 10.38% | 11.59% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001224828188873382 | 0.00012151721609183016 | 0.79% | 0.79% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4818079393524982e-05 | 1.3045448251449776e-05 | 11.96% | 13.59% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012281016255790176 | 0.0001215506609373889 | 1.03% | 1.04% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.5462599693117424e-05 | 3.2950548204383006e-05 | 7.08% | 7.62% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5533365017689284e-05 | 1.3682603999838052e-05 | 11.91% | 13.53% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5251084450413287e-05 | 1.3439713929203534e-05 | 11.88% | 13.48% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5041965636324625e-05 | 1.3190416099044154e-05 | 12.31% | 14.04% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6386434345250324e-05 | 1.4618957929580712e-05 | 10.79% | 12.09% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5324289446271865e-05 | 2.2632787167562655e-05 | 10.63% | 11.89% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4582331149011055e-05 | 1.2600530033802218e-05 | 13.59% | 15.73% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4820136688977967e-05 | 1.2710660216070684e-05 | 14.23% | 16.60% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.063336110182005e-05 | 1.8939542032443143e-05 | 8.21% | 8.94% | 1.09x | ✅ |
