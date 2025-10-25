#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/BobTheBuidler-patch-5/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/BobTheBuidler-patch-5/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4876948376061036e-05 | 2.3708932778859782e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4778695902149114e-05 | 2.362910703927283e-05 | 4.64% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.472518330222937e-05 | 2.3571158320287786e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.457131586194032e-05 | 2.3597207106808646e-05 | 3.96% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.488892409716905e-05 | 2.3523597290926474e-05 | 5.49% | 5.80% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4814927292075404e-05 | 2.3444569438821527e-05 | 5.52% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.481382879747833e-05 | 2.3627485456190935e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4986771815814715e-05 | 2.4404243040709098e-05 | 2.33% | 2.39% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4797251704973924e-05 | 2.3685148377567267e-05 | 4.48% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4812175378800477e-05 | 2.3759458950767345e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.479573677269794e-05 | 2.377655446541226e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4743995387894217e-05 | 2.3542374654424257e-05 | 4.86% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4757360651218576e-05 | 2.3559522492517093e-05 | 4.84% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4836841304665945e-05 | 2.3579746882159983e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4861702398047702e-05 | 2.357148531265937e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.5039229186298295e-05 | 2.3689761870794154e-05 | 5.39% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.486348919982075e-05 | 2.3820856530961726e-05 | 4.19% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4845575737757877e-05 | 2.3676314121685367e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4631759264606094e-05 | 2.3703837139264647e-05 | 3.77% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.469845361357082e-05 | 2.348138793617883e-05 | 4.93% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4852848144977656e-05 | 2.366177965608405e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.4826897203018808e-05 | 2.3528154677125724e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.5106239683800605e-05 | 2.3543332172406566e-05 | 6.23% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.4791600563176955e-05 | 2.3593306778615663e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4727932652213508e-05 | 2.3613573656175963e-05 | 4.51% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4720515087147807e-05 | 2.344926009614757e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3839643337183456e-05 | 2.231770376785076e-05 | 6.38% | 6.82% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3622654443491815e-05 | 2.2617653964922376e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3702335887737784e-05 | 2.248582299464167e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3844434546720683e-05 | 2.2363744051768615e-05 | 6.21% | 6.62% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3694846560388793e-05 | 2.225392427742994e-05 | 6.08% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.376015726102857e-05 | 2.2714169506126142e-05 | 4.40% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3883624101466604e-05 | 2.2327899757973946e-05 | 6.51% | 6.97% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3696310817081374e-05 | 2.214384474766009e-05 | 6.55% | 7.01% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3835649544074365e-05 | 2.256251030444473e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3660300923109396e-05 | 2.2373084922638455e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3609784453546948e-05 | 2.213981828336761e-05 | 6.23% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3773488507974853e-05 | 2.227503105932812e-05 | 6.30% | 6.73% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3636276419493898e-05 | 2.2186759465646456e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3709462706718626e-05 | 2.2515575373105796e-05 | 5.04% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3704301909536188e-05 | 2.218877723893007e-05 | 6.39% | 6.83% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.379119023989682e-05 | 2.2230133924663676e-05 | 6.56% | 7.02% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.365315234833061e-05 | 2.230545895615734e-05 | 5.70% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.380836767395278e-05 | 2.2429735960873354e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3685775838317467e-05 | 2.259533224421083e-05 | 4.60% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3658063985068393e-05 | 2.2591094995550232e-05 | 4.51% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.356118299413352e-05 | 2.231789020093553e-05 | 5.28% | 5.57% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3647869738571408e-05 | 2.238073895920128e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3655046803088928e-05 | 2.2387226882909464e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.37897353693128e-05 | 2.2164735740945154e-05 | 6.83% | 7.33% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.362219805021259e-05 | 2.237770919061693e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3752090239757143e-05 | 2.2427533036337546e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.370535528783595e-05 | 2.251969317734402e-05 | 5.00% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3670114961843656e-05 | 2.249305907826959e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.389944478882194e-05 | 2.247091664033268e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3882720336634765e-05 | 2.2444767585933827e-05 | 6.02% | 6.41% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3970190130264434e-05 | 2.2452201087209148e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3753218695757556e-05 | 2.2459711720220017e-05 | 5.45% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3750476340558538e-05 | 2.249216496989379e-05 | 5.30% | 5.59% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.4610379232873193e-05 | 2.24865084861052e-05 | 8.63% | 9.45% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3640708469677547e-05 | 2.2380218742198856e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.399622806181302e-05 | 2.2458577284111523e-05 | 6.41% | 6.85% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3941936353205455e-05 | 2.246937130392173e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3739492736036385e-05 | 2.2428248394336003e-05 | 5.52% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3614097589281187e-05 | 2.2454485778070102e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.392908718099722e-05 | 2.23048074797255e-05 | 6.79% | 7.28% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.4007860567534695e-05 | 2.233423739910132e-05 | 6.97% | 7.49% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3982090538179406e-05 | 2.243083669700063e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.412203296923226e-05 | 2.2417002165754845e-05 | 7.07% | 7.61% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3723488006397814e-05 | 2.230978461311863e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3555321287097096e-05 | 2.2693966308051304e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3646937107705657e-05 | 2.2147181169479104e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.389703388869078e-05 | 2.243363527998799e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.4116617703134815e-05 | 2.2331092052462753e-05 | 7.40% | 8.00% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3903466415641926e-05 | 2.3089598449339325e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.40571519607741e-05 | 2.2451154624723025e-05 | 6.68% | 7.15% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.393213164355176e-05 | 2.242906288376809e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3745942101112157e-05 | 2.246104221969963e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.418608766645171e-05 | 2.2413723535734175e-05 | 7.33% | 7.91% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3943612089814815e-05 | 2.2385696476017402e-05 | 6.51% | 6.96% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.363058692248617e-05 | 2.250116075245868e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3497581868545604e-05 | 2.24308502637417e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3474960849799332e-05 | 2.2430237530073132e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3581387461034712e-05 | 2.282900482165368e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3571059874490506e-05 | 2.2420195144838452e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3690713364097257e-05 | 2.2441932112707112e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3708980935550548e-05 | 2.248627753862518e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.350000813586683e-05 | 2.2612110449949418e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3550248604424552e-05 | 2.2386448896958822e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3779916916294397e-05 | 2.2429065100425503e-05 | 5.68% | 6.02% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.361862615135176e-05 | 2.252802103105825e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3538926527016016e-05 | 2.284499002836977e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3787437666650484e-05 | 2.249353828211181e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.351722758271e-05 | 2.243286126908401e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.449410872462619e-05 | 2.2494366338291413e-05 | 8.16% | 8.89% | 1.09x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3767002436733735e-05 | 2.2364293268806217e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.332711209172403e-05 | 2.246658214571087e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3605852322057325e-05 | 2.2432556657155685e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.357192389949824e-05 | 2.2517374649492746e-05 | 4.47% | 4.68% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3592690729621714e-05 | 2.252111535143944e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.348821972338933e-05 | 2.2621878780058646e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3569828623990462e-05 | 2.2269639535231918e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3411631856988406e-05 | 2.2439214783920104e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.347295196762597e-05 | 2.3072788142261705e-05 | 1.70% | 1.73% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.358574516116616e-05 | 2.2659113137814327e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3545008299939145e-05 | 2.2525703190914137e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3595325609225956e-05 | 2.2360074389458148e-05 | 5.24% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3614953448611513e-05 | 2.2393068752978487e-05 | 5.17% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3521178669381045e-05 | 2.2449544126479627e-05 | 4.56% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.364836656517758e-05 | 2.2407215403870234e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3652549627675017e-05 | 2.2344931255690507e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.388118910997989e-05 | 2.242493116574991e-05 | 6.10% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.359917504891072e-05 | 2.228460297767908e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.4037282070571016e-05 | 2.223274118754277e-05 | 7.51% | 8.12% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3726284159801175e-05 | 2.2273408518883118e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3568013909141127e-05 | 2.2336236419945132e-05 | 5.23% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3628172534700073e-05 | 2.2392786197585663e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3585692835638072e-05 | 2.2276754266264296e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3633159726632795e-05 | 2.2360915558674206e-05 | 5.38% | 5.69% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3624731168186305e-05 | 2.227839007931191e-05 | 5.70% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3424202321441808e-05 | 2.241799404710296e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3589063898368578e-05 | 2.222497344762994e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3530368597154128e-05 | 2.2427406392104746e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3741480634663964e-05 | 2.242614048921681e-05 | 5.54% | 5.87% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.367339304644347e-05 | 2.2409075919225955e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.355286713732827e-05 | 2.2474545927093932e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3646964679440242e-05 | 2.2663853436126368e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.4284589233810825e-05 | 2.2266722090625436e-05 | 8.31% | 9.06% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.4148609910551178e-05 | 2.275237256069112e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3873820687939638e-05 | 2.2561467942659468e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3732839403240766e-05 | 2.2394047955009165e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.377691574385044e-05 | 2.230940509342843e-05 | 6.17% | 6.58% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3891674655548074e-05 | 2.227376328718281e-05 | 6.77% | 7.26% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3702622149752494e-05 | 2.256958771256794e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.372307651657816e-05 | 2.261521393407582e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.373131958990815e-05 | 2.2515728749967713e-05 | 5.12% | 5.40% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3685312825107202e-05 | 2.255201190982542e-05 | 4.78% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.366193179728087e-05 | 2.2580636430642955e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3574481322654132e-05 | 2.2370522187352675e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.395523308265477e-05 | 2.252987316551584e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3737110920476315e-05 | 2.2470833333600506e-05 | 5.33% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.369696143598004e-05 | 2.2387280943168216e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3680758392565643e-05 | 2.2505696272552644e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.3682756067647395e-05 | 2.2367347103051753e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3849382767353425e-05 | 2.231610742572739e-05 | 6.43% | 6.87% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3734994899006946e-05 | 2.242086170702827e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3773312250152026e-05 | 2.234023735969153e-05 | 6.03% | 6.41% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3753347799838027e-05 | 2.2449755808930173e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3835446286189547e-05 | 2.2443983699444003e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.370457159637565e-05 | 2.2413194229516833e-05 | 5.45% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3805652809512488e-05 | 2.2221586935401715e-05 | 6.65% | 7.13% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.372975362005799e-05 | 2.2614378412955858e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3647602842819564e-05 | 2.2306333487310046e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.367456485693956e-05 | 2.2352891590299815e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.36672100826811e-05 | 2.2245644196928556e-05 | 6.01% | 6.39% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3687887662413777e-05 | 2.2272413164118203e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3737872602642063e-05 | 2.233846940226256e-05 | 5.90% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.372619994930648e-05 | 2.2407369668581537e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3916022967106067e-05 | 2.2455623373253713e-05 | 6.11% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3341585145363338e-05 | 2.229013212396066e-05 | 4.50% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3653550943782375e-05 | 2.237636133034021e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.4106741158618198e-05 | 2.2242842251748846e-05 | 7.73% | 8.38% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3908948815550568e-05 | 2.5037393763528525e-05 | -4.72% | -4.51% | 0.95x | ❌ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.382878444306156e-05 | 2.2235805701638653e-05 | 6.69% | 7.16% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3910330681991213e-05 | 2.2122814260737415e-05 | 7.48% | 8.08% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3614246159675256e-05 | 2.2263776112017867e-05 | 5.72% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3728558525379186e-05 | 2.2183614507631857e-05 | 6.51% | 6.96% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3638637574500258e-05 | 2.2344060842438426e-05 | 5.48% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3637401349038006e-05 | 2.2247766502829018e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.386293449920457e-05 | 2.2265948573010363e-05 | 6.69% | 7.17% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.467643738365276e-05 | 2.2393519314909862e-05 | 9.25% | 10.19% | 1.10x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.368853983149929e-05 | 2.2258978576126e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.092557040129003e-05 | 5.903979599423294e-05 | 27.04% | 37.07% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.23467431532974e-05 | 5.8479613604002034e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.076553657218985e-05 | 5.9143453434908266e-05 | 26.77% | 36.56% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.104337477858301e-05 | 5.86743654670263e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.26403829981542e-05 | 5.9135239513421726e-05 | 28.44% | 39.75% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.202122543979763e-05 | 5.8225487248791e-05 | 29.01% | 40.87% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.921000277816308e-05 | 5.615082139494147e-05 | 29.11% | 41.07% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.057759146650819e-05 | 5.94529148615148e-05 | 26.22% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.135468190845304e-05 | 5.922552375688496e-05 | 27.20% | 37.36% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.192645427669493e-05 | 5.9154019422435106e-05 | 27.80% | 38.50% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.202030139452492e-05 | 5.839306544995676e-05 | 28.81% | 40.46% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.171751253297603e-05 | 5.9865730549402944e-05 | 26.74% | 36.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.109720538276281e-05 | 5.965304437617994e-05 | 26.44% | 35.95% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.140446586300443e-05 | 5.94030513296158e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.157282029960816e-05 | 5.9261937389106245e-05 | 27.35% | 37.65% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.082712185072041e-05 | 5.912869319376807e-05 | 26.85% | 36.70% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.237423164443478e-05 | 5.902757929733483e-05 | 28.34% | 39.55% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.194598626360752e-05 | 5.9526791739864254e-05 | 27.36% | 37.66% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.204118827450849e-05 | 5.9232094758190455e-05 | 27.80% | 38.51% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.210625100839058e-05 | 5.840405724737706e-05 | 28.87% | 40.58% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.178700976068028e-05 | 5.8985329494610414e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.119333319018847e-05 | 5.857614710564017e-05 | 27.86% | 38.61% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.05741483564548e-05 | 5.893235603761448e-05 | 26.86% | 36.72% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.209079860494276e-05 | 5.889481735241839e-05 | 28.26% | 39.39% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.338493958816149e-05 | 5.9215331579647224e-05 | 28.99% | 40.82% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.130268371671554e-05 | 5.916990496188706e-05 | 27.22% | 37.41% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.951919216673437e-05 | 5.720494997953443e-05 | 28.06% | 39.01% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.957526352776275e-05 | 5.720279027232218e-05 | 28.11% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.282609541946258e-05 | 5.864119707540515e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.153861770896498e-05 | 5.982174450270665e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.319746245075363e-05 | 5.919422993132764e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.282297735535291e-05 | 6.03767245058062e-05 | 27.10% | 37.18% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.392877149044099e-05 | 5.963852618912136e-05 | 28.94% | 40.73% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.324251366922127e-05 | 6.030351292068372e-05 | 27.56% | 38.04% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.160327411483093e-05 | 5.9946280466823355e-05 | 26.54% | 36.13% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.121101053117884e-05 | 5.6851826282116284e-05 | 29.99% | 42.85% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.392883992708494e-05 | 5.9808026334210116e-05 | 28.74% | 40.33% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.333533900522582e-05 | 6.0465167992107446e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.196019399621511e-05 | 6.179962115761284e-05 | 24.60% | 32.62% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.349631859420873e-05 | 5.977251635972918e-05 | 28.41% | 39.69% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.327878125851465e-05 | 6.067794890674965e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.473009122521969e-05 | 5.951447064146154e-05 | 29.76% | 42.37% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.296308599825738e-05 | 6.0013836140210505e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.271409692210701e-05 | 6.00677277133438e-05 | 27.38% | 37.70% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.473553733886662e-05 | 5.9974142063477395e-05 | 29.22% | 41.29% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.370888158026339e-05 | 5.994297641919829e-05 | 28.39% | 39.65% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.227293650980891e-05 | 6.0257930955622225e-05 | 26.76% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.683467436720115e-05 | 5.9877628273400295e-05 | 31.04% | 45.02% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.244161791821653e-05 | 5.959207610125886e-05 | 27.72% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.384125771190585e-05 | 5.941081062913473e-05 | 29.14% | 41.12% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.214490135853046e-05 | 5.967202834931041e-05 | 27.36% | 37.66% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.353185497662022e-05 | 5.9782345307864535e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.301935200412679e-05 | 6.001194529547764e-05 | 27.71% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.252852332091893e-05 | 6.120017657181958e-05 | 25.84% | 34.85% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.33071883924591e-05 | 5.987589637050927e-05 | 28.13% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.233290575204431e-05 | 5.7574086338197274e-05 | 30.07% | 43.00% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.163649632293912e-05 | 5.746576792245302e-05 | 29.61% | 42.06% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.240602038320836e-05 | 5.96179318368855e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.255665653197452e-05 | 5.956469831911507e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.29247001730197e-05 | 5.980792480795419e-05 | 27.88% | 38.65% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.198625168853333e-05 | 5.979242367524071e-05 | 27.07% | 37.12% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.373248188304266e-05 | 5.9674107105051646e-05 | 28.73% | 40.32% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.204134113750472e-05 | 5.9389804376235016e-05 | 27.61% | 38.14% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.217785969520285e-05 | 5.987203112546199e-05 | 27.14% | 37.26% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.005031648793628e-05 | 5.705812251801965e-05 | 28.72% | 40.30% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.313612196968848e-05 | 5.944146666750088e-05 | 28.50% | 39.86% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.31417547197536e-05 | 5.962070909736794e-05 | 28.29% | 39.45% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.350997283812014e-05 | 5.931341475637175e-05 | 28.97% | 40.79% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.314184378108275e-05 | 6.166022040391302e-05 | 25.84% | 34.84% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.260314315492488e-05 | 6.00532105309063e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.34058523130029e-05 | 6.041244803129282e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.203239385082952e-05 | 5.9413426319888444e-05 | 27.57% | 38.07% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.335569291516606e-05 | 5.994814464346617e-05 | 28.08% | 39.05% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.546274221526312e-05 | 5.972587912468916e-05 | 30.11% | 43.09% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.303836088058888e-05 | 5.8633758957547456e-05 | 29.39% | 41.62% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.237208501180459e-05 | 5.888172144720755e-05 | 28.52% | 39.89% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.251070432840939e-05 | 5.972717618056438e-05 | 27.61% | 38.15% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.392205980344334e-05 | 5.996495915927327e-05 | 28.55% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.451267541456046e-05 | 5.9401002258045214e-05 | 29.71% | 42.27% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.354218434912156e-05 | 6.0447663146615365e-05 | 27.64% | 38.21% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.392810833643792e-05 | 5.917874958363557e-05 | 29.49% | 41.82% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.304587095116393e-05 | 5.9990151624606676e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.250290095734367e-05 | 5.957869653369157e-05 | 27.79% | 38.48% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.229586105215995e-05 | 5.969941410276596e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.058769124189945e-05 | 5.730630652670025e-05 | 28.89% | 40.63% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.032440921951361e-05 | 5.734095322380811e-05 | 28.61% | 40.08% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.66783481250508e-05 | 5.999701206122307e-05 | 30.78% | 44.47% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.10974578318166e-05 | 5.898923302016525e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.264319131454174e-05 | 6.388762593332856e-05 | 22.69% | 29.36% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.212634701225413e-05 | 6.14470024828318e-05 | 25.18% | 33.65% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.193390389305753e-05 | 5.9651654649328746e-05 | 27.20% | 37.35% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.713391670189344e-05 | 5.9504716823719514e-05 | 31.71% | 46.43% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.106136041756887e-05 | 5.986944207777515e-05 | 26.14% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 8.19754242775504e-05 | 5.66641646996733e-05 | 30.88% | 44.67% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.182181130480332e-05 | 5.942087836924445e-05 | 27.38% | 37.70% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.105561227508731e-05 | 5.904201759675259e-05 | 27.16% | 37.28% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.160699314394502e-05 | 6.199739923734626e-05 | 24.03% | 31.63% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010393255876920131 | 7.482698265623437e-05 | 28.00% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.940928735347298e-05 | 5.697665782946934e-05 | 28.25% | 39.37% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.248830663681747e-05 | 5.9679767050878024e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.206142196984244e-05 | 5.9408694484656555e-05 | 27.60% | 38.13% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.115579030681986e-05 | 5.933036565893539e-05 | 26.89% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.180275137588249e-05 | 5.946233480395809e-05 | 27.31% | 37.57% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.202226256375775e-05 | 5.937539111006226e-05 | 27.61% | 38.14% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.865113036570222e-05 | 7.369386079650313e-05 | 25.30% | 33.87% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 8.059102510113654e-05 | 5.7240929426350255e-05 | 28.97% | 40.79% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.868756031024502e-05 | 7.077052775680893e-05 | 28.29% | 39.45% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.204650571785683e-05 | 6.222001919146872e-05 | 24.16% | 31.87% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.216606864639628e-05 | 5.911997707753533e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.118876213336738e-05 | 5.9311337357347456e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.248838633364068e-05 | 5.982322674965894e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.194740352338388e-05 | 5.926153946509624e-05 | 27.68% | 38.28% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.167155414140718e-05 | 5.970904156309607e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.80686310801422e-05 | 5.651423029667617e-05 | 27.61% | 38.14% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 8.119367461111054e-05 | 5.6075814821299525e-05 | 30.94% | 44.79% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.181582560253549e-05 | 5.9630914589514416e-05 | 27.12% | 37.20% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.107352787012726e-05 | 5.80325476069859e-05 | 28.42% | 39.70% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.047292338505025e-05 | 5.9619791541164434e-05 | 25.91% | 34.98% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.006811930282364e-05 | 5.900857648341369e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.146372842615375e-05 | 5.855647387216914e-05 | 28.12% | 39.12% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.115584864688351e-05 | 5.8672648605345854e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.970428107100917e-05 | 5.830785688339696e-05 | 26.84% | 36.70% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.766757434786694e-05 | 5.529077028599464e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.059785824792842e-05 | 5.8883109241053396e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.077253931096894e-05 | 5.856645416159655e-05 | 27.49% | 37.92% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.117052367378329e-05 | 5.893680254979874e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.908856437234507e-05 | 7.7884833577679e-05 | 21.40% | 27.22% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.036060761895432e-05 | 5.843196986601198e-05 | 27.29% | 37.53% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.160292075527282e-05 | 5.888740652658134e-05 | 27.84% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.99673341012474e-05 | 5.876469582426735e-05 | 26.51% | 36.08% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.072610302550505e-05 | 5.788993958214443e-05 | 28.29% | 39.45% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.103118390722257e-05 | 5.85905533347905e-05 | 27.69% | 38.30% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.051662011929501e-05 | 5.865423009401215e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.550920528098378e-05 | 6.910376429494555e-05 | 27.65% | 38.21% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.048722059921177e-05 | 5.815398368081842e-05 | 27.75% | 38.40% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.576083106084344e-05 | 7.318950937320181e-05 | 23.57% | 30.84% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.068725744448035e-05 | 6.102112145725129e-05 | 24.37% | 32.23% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.037519058658887e-05 | 5.806725536306741e-05 | 27.75% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.037663756195046e-05 | 5.712977127841109e-05 | 28.92% | 40.69% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.111998876480989e-05 | 5.804803711872892e-05 | 28.44% | 39.75% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.000646008843005e-05 | 5.857016943417587e-05 | 26.79% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.02039297337157e-05 | 5.6900048305481415e-05 | 29.06% | 40.96% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.759047348384924e-05 | 5.559314579506907e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.801366524250954e-05 | 5.5749173819042755e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.038442872833564e-05 | 5.8493068760884875e-05 | 27.23% | 37.43% | 1.37x | ✅ |
| `hexbytes_new['']` | 7.060853419363899e-05 | 3.592420165032399e-05 | 49.12% | 96.55% | 1.97x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.08639639041123e-05 | 5.140470227288997e-05 | 43.43% | 76.76% | 1.77x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.090847868508386e-05 | 5.01695138884054e-05 | 44.81% | 81.20% | 1.81x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.865374551797902e-05 | 4.91575251134973e-05 | 44.55% | 80.35% | 1.80x | ✅ |
| `hexbytes_new['0x']` | 7.715932133767146e-05 | 3.805019563897002e-05 | 50.69% | 102.78% | 2.03x | ✅ |
| `hexbytes_new['0x1234']` | 8.438079847431519e-05 | 4.541127619024313e-05 | 46.18% | 85.81% | 1.86x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.452297211207133e-05 | 4.534830249515907e-05 | 46.35% | 86.39% | 1.86x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.513991174852169e-05 | 4.497198813912238e-05 | 47.18% | 89.32% | 1.89x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.675634745177443e-05 | 4.563544183744495e-05 | 47.40% | 90.11% | 1.90x | ✅ |
| `hexbytes_new['abc']` | 8.140022260323953e-05 | 4.8343358052572096e-05 | 40.61% | 68.38% | 1.68x | ✅ |
| `hexbytes_new['deadbeef']` | 7.53611294247802e-05 | 4.113786149942984e-05 | 45.41% | 83.19% | 1.83x | ✅ |
| `hexbytes_new[0-9]` | 4.2632760681223544e-05 | 2.5567302992305966e-05 | 40.03% | 66.75% | 1.67x | ✅ |
| `hexbytes_new[0]` | 0.00012043101937263742 | 6.16822732233031e-05 | 48.78% | 95.24% | 1.95x | ✅ |
| `hexbytes_new[123456]` | 0.00012745975215477484 | 6.767363892859245e-05 | 46.91% | 88.34% | 1.88x | ✅ |
| `hexbytes_new[2**16]` | 0.00012647683840851128 | 6.671166076779187e-05 | 47.25% | 89.59% | 1.90x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012899982890357176 | 7.435267437735665e-05 | 42.36% | 73.50% | 1.73x | ✅ |
| `hexbytes_new[2**32]` | 0.00012648533416741346 | 6.978455968243761e-05 | 44.83% | 81.25% | 1.81x | ✅ |
| `hexbytes_new[2**64]` | 0.0001301429698866431 | 7.167665575812671e-05 | 44.92% | 81.57% | 1.82x | ✅ |
| `hexbytes_new[2**8]` | 0.0001240321645909712 | 6.395501026727315e-05 | 48.44% | 93.94% | 1.94x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4096663254073495e-05 | 2.6731747117020203e-05 | 39.38% | 64.96% | 1.65x | ✅ |
| `hexbytes_new[False]` | 6.0162750600736186e-05 | 2.7032053368617585e-05 | 55.07% | 122.56% | 2.23x | ✅ |
| `hexbytes_new[True]` | 6.053660035433817e-05 | 2.7224441031362918e-05 | 55.03% | 122.36% | 2.22x | ✅ |
| `hexbytes_new[all byte values]` | 4.3844896258798435e-05 | 2.675499838263954e-05 | 38.98% | 63.88% | 1.64x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.325313123597093e-05 | 2.6123448218575476e-05 | 39.60% | 65.57% | 1.66x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.313429447510129e-05 | 2.6312810973925537e-05 | 39.00% | 63.93% | 1.64x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.266643378392264e-05 | 2.5983054630218584e-05 | 39.10% | 64.21% | 1.64x | ✅ |
| `hexbytes_new[b'']` | 4.2263262888489676e-05 | 2.569263705375035e-05 | 39.21% | 64.50% | 1.64x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.368925583478582e-05 | 2.61500010000916e-05 | 40.15% | 67.07% | 1.67x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.3566890696971286e-05 | 2.5598298849559768e-05 | 41.24% | 70.19% | 1.70x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.299622020334945e-05 | 2.6350811547286292e-05 | 38.71% | 63.17% | 1.63x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.504835550744291e-05 | 3.775943283890862e-05 | 31.41% | 45.79% | 1.46x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.3275673872153826e-05 | 2.555185944265257e-05 | 40.96% | 69.36% | 1.69x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2821870934632785e-05 | 2.5533033390194744e-05 | 40.37% | 67.71% | 1.68x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.248746062709934e-05 | 2.559235372730614e-05 | 39.76% | 66.02% | 1.66x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.222634311096918e-05 | 2.5589695361174113e-05 | 39.40% | 65.01% | 1.65x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.373596068961201e-05 | 2.5474998734092434e-05 | 41.75% | 71.68% | 1.72x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.4067869147011574e-05 | 2.6142859549331503e-05 | 40.68% | 68.57% | 1.69x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.062649082138617e-05 | 3.2583960427536115e-05 | 35.64% | 55.37% | 1.55x | ✅ |
| `hexbytes_new[b'abc']` | 4.2384189533177773e-05 | 2.5601233449974698e-05 | 39.60% | 65.56% | 1.66x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.915080978826585e-05 | 3.783604572345486e-05 | 45.28% | 82.76% | 1.83x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.027216916858941e-05 | 3.850233782470765e-05 | 45.21% | 82.51% | 1.83x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.937215878394174e-05 | 4.0744666254832454e-05 | 41.27% | 70.26% | 1.70x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.913922980919902e-05 | 3.783717382238655e-05 | 45.27% | 82.73% | 1.83x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.957392008156356e-05 | 3.9340482468668755e-05 | 43.46% | 76.85% | 1.77x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.963817291311537e-05 | 3.7886690766221434e-05 | 45.59% | 83.81% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.701039961841839e-05 | 3.7990791065201165e-05 | 43.31% | 76.39% | 1.76x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.887539363155249e-05 | 3.752054038977804e-05 | 45.52% | 83.57% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.796113389441062e-05 | 3.77386581299387e-05 | 44.47% | 80.08% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.762279052687692e-05 | 3.764689114492298e-05 | 44.33% | 79.62% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.996936415322991e-05 | 5.680607920570699e-05 | 36.86% | 58.38% | 1.58x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.907981611305769e-05 | 3.786673341736097e-05 | 45.18% | 82.43% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.882608802189131e-05 | 3.806490569466409e-05 | 44.69% | 80.81% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.82473058496746e-05 | 3.7689170756726593e-05 | 44.78% | 81.08% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.842085374928543e-05 | 3.7885853264151664e-05 | 44.63% | 80.60% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.830709351111788e-05 | 3.7642377919629635e-05 | 44.89% | 81.46% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.959653708930089e-05 | 3.7980612762615705e-05 | 45.43% | 83.24% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.452612944109316e-05 | 5.1504443147000425e-05 | 39.07% | 64.11% | 1.64x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.976361326391319e-05 | 3.778519693353156e-05 | 45.84% | 84.63% | 1.85x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.444364578159875e-05 | 5.069554515057848e-05 | 39.97% | 66.57% | 1.67x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.968770725960197e-05 | 3.849735415452171e-05 | 44.76% | 81.02% | 1.81x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.823078844780877e-05 | 3.6890812404245114e-05 | 45.93% | 84.95% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.941795996801395e-05 | 3.7949941924121354e-05 | 45.33% | 82.92% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.975683838794662e-05 | 3.7833599716642004e-05 | 45.76% | 84.38% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.894097505013968e-05 | 3.762268457038329e-05 | 45.43% | 83.24% | 1.83x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.02576467904022e-05 | 3.75204356707034e-05 | 46.60% | 87.25% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.940260500941969e-05 | 3.8243968008790577e-05 | 44.90% | 81.47% | 1.81x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.946157797645499e-05 | 3.7960547081920567e-05 | 45.35% | 82.98% | 1.83x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.074010714293023e-05 | 3.798367276514529e-05 | 46.31% | 86.24% | 1.86x | ✅ |
| `hexbytes_new[long alternating]` | 5.073101285764387e-05 | 3.239837795041618e-05 | 36.14% | 56.59% | 1.57x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.363666915213062e-05 | 4.293738551652433e-05 | 48.66% | 94.79% | 1.95x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.470767285452404e-05 | 4.3881470551228017e-05 | 48.20% | 93.04% | 1.93x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.52231723890666e-05 | 4.4064171420611406e-05 | 48.30% | 93.41% | 1.93x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.426766976403056e-05 | 4.309402076071353e-05 | 48.86% | 95.54% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.434313074577859e-05 | 4.2897645040507586e-05 | 49.14% | 96.61% | 1.97x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.432865400998663e-05 | 4.223044451563306e-05 | 49.92% | 99.69% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.247656947512854e-05 | 3.987695693760272e-05 | 51.65% | 106.83% | 2.07x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.393544463868579e-05 | 4.2612490307837216e-05 | 49.23% | 96.97% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.613799230891904e-05 | 4.263868541492049e-05 | 50.50% | 102.02% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.430358515418836e-05 | 4.43565988288838e-05 | 47.38% | 90.06% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.0001038376431754175 | 6.386335819845425e-05 | 38.50% | 62.59% | 1.63x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.397802357147955e-05 | 4.2560821103615696e-05 | 49.32% | 97.31% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.390566002262301e-05 | 4.2583002212503715e-05 | 49.25% | 97.04% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.346940211781342e-05 | 4.277454783581956e-05 | 48.75% | 95.14% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.29585622848944e-05 | 4.3015827324384084e-05 | 48.15% | 92.86% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.439374629221425e-05 | 4.243605527569346e-05 | 49.72% | 98.87% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.439904796312845e-05 | 4.270734518327677e-05 | 49.40% | 97.62% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.888434000244744e-05 | 5.5745454556368276e-05 | 43.63% | 77.39% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.399705751128358e-05 | 4.2749154962908865e-05 | 49.11% | 96.49% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.893609332923676e-05 | 5.8429281021829375e-05 | 40.94% | 69.33% | 1.69x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.436268430254291e-05 | 4.290935111706951e-05 | 49.14% | 96.61% | 1.97x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.399643355175065e-05 | 4.3078460193966176e-05 | 48.71% | 94.98% | 1.95x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.754048280053367e-05 | 4.297280173282436e-05 | 50.91% | 103.71% | 2.04x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.394665300647569e-05 | 4.2795255383299976e-05 | 49.02% | 96.16% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.424028567505706e-05 | 4.2718137097435184e-05 | 49.29% | 97.20% | 1.97x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.731687243520915e-05 | 4.2841848779837314e-05 | 50.94% | 103.81% | 2.04x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.475742277506135e-05 | 4.29970804736762e-05 | 49.27% | 97.12% | 1.97x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.402803791218175e-05 | 4.304661030865199e-05 | 48.77% | 95.20% | 1.95x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.460803667777566e-05 | 4.3069075798382576e-05 | 49.10% | 96.45% | 1.96x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.2608658607989674e-05 | 2.652794468011544e-05 | 37.74% | 60.62% | 1.61x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.207575801483006e-05 | 2.5631914933212813e-05 | 39.08% | 64.15% | 1.64x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.290670786480809e-05 | 2.570639025542454e-05 | 40.09% | 66.91% | 1.67x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.2818987036099706e-05 | 2.564725871642671e-05 | 40.10% | 66.95% | 1.67x | ✅ |
| `hexbytes_new[palindrome]` | 4.2989973919187665e-05 | 2.784291996507212e-05 | 35.23% | 54.40% | 1.54x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.3083775255362755e-05 | 2.7456386977014492e-05 | 36.27% | 56.92% | 1.57x | ✅ |
| `hexbytes_new[single 0xff]` | 4.204859556772764e-05 | 2.5346560872794356e-05 | 39.72% | 65.89% | 1.66x | ✅ |
| `hexbytes_new[single null byte]` | 4.276809879459416e-05 | 2.5582092805291982e-05 | 40.18% | 67.18% | 1.67x | ✅ |
| `hexbytes_new[two patterns]` | 4.288895879878084e-05 | 2.6224482488946747e-05 | 38.85% | 63.55% | 1.64x | ✅ |
| `hexbytes_repr[0-9]` | 2.897153853691048e-05 | 1.4724465940531368e-05 | 49.18% | 96.76% | 1.97x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001193434445059943 | 4.0683771270300884e-05 | 65.91% | 193.34% | 2.93x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011957289301378644 | 4.041159334883215e-05 | 66.20% | 195.89% | 2.96x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.8712423381982065e-05 | 1.9780072712206506e-05 | 59.39% | 146.27% | 2.46x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.866255228470353e-05 | 1.9838226440149802e-05 | 59.23% | 145.30% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.093843986541769e-05 | 1.7905136879493622e-05 | 56.26% | 128.64% | 2.29x | ✅ |
| `hexbytes_repr[b'']` | 2.1135076218186513e-05 | 1.2288185953849622e-05 | 41.86% | 72.00% | 1.72x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.643928385419002e-05 | 1.6797225365568077e-05 | 53.90% | 116.94% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.634313157659827e-05 | 1.4069110640707552e-05 | 46.59% | 87.24% | 1.87x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.146515549308775e-05 | 2.3423109205037363e-05 | 61.89% | 162.41% | 2.62x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007586398311774011 | 0.00022237375577615487 | 70.69% | 241.16% | 3.41x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.621542606228614e-05 | 1.420297444292889e-05 | 45.82% | 84.58% | 1.85x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.710654836555551e-05 | 1.4098753934616145e-05 | 47.99% | 92.26% | 1.92x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8255378908639954e-05 | 1.4400314351179873e-05 | 49.04% | 96.21% | 1.96x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.9195923389145787e-05 | 1.4302506003729795e-05 | 51.01% | 104.13% | 2.04x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.613126406915389e-05 | 1.419038389116837e-05 | 45.70% | 84.15% | 1.84x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.85126756318743e-05 | 1.971684995622643e-05 | 59.36% | 146.05% | 2.46x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004116113440481313 | 0.00011902225090576912 | 71.08% | 245.83% | 3.46x | ✅ |
| `hexbytes_repr[b'abc']` | 2.637483849270022e-05 | 1.4251560597896444e-05 | 45.97% | 85.07% | 1.85x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00039690865781241745 | 0.0001224699629497752 | 69.14% | 224.09% | 3.24x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.731066535925557e-05 | 3.3722565374094336e-05 | 65.35% | 188.56% | 2.89x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.8969716067157263e-05 | 1.4652116336150436e-05 | 49.42% | 97.72% | 1.98x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.758987319201363e-05 | 1.4119122028254587e-05 | 48.82% | 95.41% | 1.95x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.6838219566360573e-05 | 1.4048467892128626e-05 | 47.65% | 91.04% | 1.91x | ✅ |
| `hexbytes_repr[palindrome]` | 3.2349433083509394e-05 | 1.573906113188871e-05 | 51.35% | 105.54% | 2.06x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.383127923529741e-05 | 2.3497394269350392e-05 | 63.19% | 171.65% | 2.72x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5202298558452792e-05 | 1.3689195365298324e-05 | 45.68% | 84.10% | 1.84x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5477469847084985e-05 | 1.3834479873686962e-05 | 45.70% | 84.16% | 1.84x | ✅ |
| `hexbytes_repr[two patterns]` | 4.881601041704926e-05 | 1.9894428103335747e-05 | 59.25% | 145.38% | 2.45x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.537205778646145e-05 | 1.363205983130123e-05 | 11.32% | 12.76% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.207691549399252e-05 | 3.956748713916148e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.195267556230778e-05 | 4.109763104584201e-05 | 2.04% | 2.08% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0567999340704533e-05 | 1.887844970782715e-05 | 8.21% | 8.95% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0719823891780638e-05 | 1.9007347848051252e-05 | 8.26% | 9.01% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.876048847840007e-05 | 1.676471606600303e-05 | 10.64% | 11.90% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0224331341634962e-05 | 1.1339399930225604e-05 | -10.91% | -9.83% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7497033051100545e-05 | 1.5751778134231266e-05 | 9.97% | 11.08% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5275466658240664e-05 | 1.2946245825528254e-05 | 15.25% | 17.99% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5250463247283897e-05 | 2.2383661243670437e-05 | 11.35% | 12.81% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022338097207844952 | 0.00022404078519785485 | -0.30% | -0.29% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.5429625274851214e-05 | 1.2748461386396075e-05 | 17.38% | 21.03% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4910610835983465e-05 | 1.30832850211775e-05 | 12.26% | 13.97% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5605796749296083e-05 | 1.3444644728219275e-05 | 13.85% | 16.07% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5266262271354353e-05 | 1.3477052961650543e-05 | 11.72% | 13.28% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5719942741458754e-05 | 1.2971819206468228e-05 | 17.48% | 21.19% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.077785444356569e-05 | 1.8940629687430295e-05 | 8.84% | 9.70% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012257142259323032 | 0.00012108912495485165 | 1.21% | 1.22% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4804386182036642e-05 | 1.2980923413303668e-05 | 12.32% | 14.05% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012346794513327244 | 0.00012149672654542775 | 1.60% | 1.62% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.501277331533346e-05 | 3.289291052620123e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5635542388473766e-05 | 1.3566709594467058e-05 | 13.23% | 15.25% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5103194754888988e-05 | 1.3182659307670237e-05 | 12.72% | 14.57% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.509087223761506e-05 | 1.3151539490827493e-05 | 12.85% | 14.75% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6436673071178514e-05 | 1.4651609531344129e-05 | 10.86% | 12.18% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5301863543689928e-05 | 2.249505432376936e-05 | 11.09% | 12.48% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4781200159255193e-05 | 1.2403516423522616e-05 | 16.09% | 19.17% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4520664511237946e-05 | 1.262424997139834e-05 | 13.06% | 15.02% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.0694470267732557e-05 | 1.896125707865718e-05 | 8.38% | 9.14% | 1.09x | ✅ |
