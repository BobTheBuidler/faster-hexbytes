#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.47961879428296e-05 | 2.3600852443870694e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4990771768112057e-05 | 2.3470240777710745e-05 | 6.08% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4954437707068516e-05 | 2.343433030024078e-05 | 6.09% | 6.49% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4756902628143095e-05 | 2.3664985370465303e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4744284078080394e-05 | 2.3599129470981166e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4855905225322433e-05 | 2.343272912355699e-05 | 5.73% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.4949694727878803e-05 | 2.3657533237962182e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4797930049412803e-05 | 2.3272595729762294e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.486056515254496e-05 | 2.3689396923244204e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4473709616217086e-05 | 2.331198665252751e-05 | 4.75% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4603658087074372e-05 | 2.360916716310224e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4783125419572636e-05 | 2.3658236734173768e-05 | 4.54% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.484113859746501e-05 | 2.3590669243793656e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4839203207875786e-05 | 2.3597241757476354e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4744554180993656e-05 | 2.3641781694069645e-05 | 4.46% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.450743416050331e-05 | 2.3586095370713955e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4593504433573853e-05 | 2.3629078609692493e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.4501838329400095e-05 | 2.3514330201211553e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4856989417690272e-05 | 2.3485754076507972e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.495910989002433e-05 | 2.3367611919589715e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4662546193598303e-05 | 2.3415792875731232e-05 | 5.06% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.488978179731246e-05 | 2.3505124867025644e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.495691411246807e-05 | 2.3460445350326393e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.476622432859715e-05 | 2.346458795362343e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4886147320892175e-05 | 2.3597259358224812e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.492216729730925e-05 | 2.3462960129157708e-05 | 5.86% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.378204874248647e-05 | 2.23558352875795e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.4055124019637912e-05 | 2.2523256451758878e-05 | 6.37% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3783592089383062e-05 | 2.245614231438357e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3681338536153547e-05 | 2.2586542953778942e-05 | 4.62% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3741253685632876e-05 | 2.2281103851779494e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.420931146629276e-05 | 2.2396419345526033e-05 | 7.49% | 8.09% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3747470277978013e-05 | 2.2662390846992338e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.401088789376542e-05 | 2.2871592324675824e-05 | 4.74% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.399539701561214e-05 | 2.241967563887267e-05 | 6.57% | 7.03% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.391280601088424e-05 | 2.2187036644050305e-05 | 7.22% | 7.78% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.396634127724611e-05 | 2.2446154771855683e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.397532813833452e-05 | 2.2395320374607006e-05 | 6.59% | 7.06% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3871595416076546e-05 | 2.2413688924862176e-05 | 6.11% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3940029900117133e-05 | 2.233028985445127e-05 | 6.72% | 7.21% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.395686287294846e-05 | 2.2401007690639552e-05 | 6.49% | 6.95% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3942094277640987e-05 | 2.229196737780448e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.384646357293162e-05 | 2.264621751686517e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3808261585368793e-05 | 2.235581010505805e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.4149763413993078e-05 | 2.2234973304065986e-05 | 7.93% | 8.61% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.4164326985356005e-05 | 2.2237581566654437e-05 | 7.97% | 8.66% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.380144829236845e-05 | 2.3240936346886146e-05 | 2.35% | 2.41% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.394056488992261e-05 | 2.2229808315491564e-05 | 7.15% | 7.70% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3924867916470914e-05 | 2.2245639990851826e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.4029331030262717e-05 | 2.226367293994406e-05 | 7.35% | 7.93% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.4034978583392115e-05 | 2.2494985776282453e-05 | 6.41% | 6.85% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.4107646466602487e-05 | 2.2322452117043562e-05 | 7.41% | 8.00% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.409588508850455e-05 | 2.250381275726788e-05 | 6.61% | 7.07% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.4287305799982148e-05 | 2.256941222190542e-05 | 7.07% | 7.61% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3973882182622548e-05 | 2.2455327837044124e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3684824611728383e-05 | 2.2474941426075163e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3647459553209193e-05 | 2.2439774146570565e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3922625837251935e-05 | 2.236504407408622e-05 | 6.51% | 6.96% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.385675857341069e-05 | 2.246882350757294e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3826312469969287e-05 | 2.2390345926802005e-05 | 6.03% | 6.41% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.415432032877948e-05 | 2.2864891783535245e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3939881513886133e-05 | 2.2302426597620633e-05 | 6.84% | 7.34% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.4025747189180578e-05 | 2.2494504891662626e-05 | 6.37% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3815206198438168e-05 | 2.2521448783494592e-05 | 5.43% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.4308653824441492e-05 | 2.2371287869190236e-05 | 7.97% | 8.66% | 1.09x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3906567683681124e-05 | 2.2454718867113123e-05 | 6.07% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.401126514512816e-05 | 2.2434144717054366e-05 | 6.57% | 7.03% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3997564433094353e-05 | 2.2544426734536572e-05 | 6.06% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.40884775302006e-05 | 2.2234171638349544e-05 | 7.70% | 8.34% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.425982083697931e-05 | 2.2394082832273507e-05 | 7.69% | 8.33% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.414416831766283e-05 | 2.236671554269058e-05 | 7.36% | 7.95% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.4055332495818492e-05 | 2.229404870616368e-05 | 7.32% | 7.90% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.384946024020796e-05 | 2.241585375601057e-05 | 6.01% | 6.40% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.378022917118701e-05 | 2.2220606842675673e-05 | 6.56% | 7.02% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3593798909710504e-05 | 2.2527745416764938e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.358287529491771e-05 | 2.2236869301128472e-05 | 5.71% | 6.05% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3675418230975246e-05 | 2.237271211139667e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3988652614688478e-05 | 2.2256835218238658e-05 | 7.22% | 7.78% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.350856682591982e-05 | 2.2319682531571982e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.370499824503354e-05 | 2.222719603146767e-05 | 6.23% | 6.65% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.34385395358988e-05 | 2.2311208654189047e-05 | 4.81% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3596159335257532e-05 | 2.229971818371628e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.337301108392666e-05 | 2.224874684552138e-05 | 4.81% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3726349625403433e-05 | 2.2572623690432152e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3556612783856402e-05 | 2.2317582849079174e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.383309410374139e-05 | 2.3463966211891876e-05 | 1.55% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3800758968260915e-05 | 2.2961941823558513e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3400621472113934e-05 | 2.247492903167818e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3670276720094737e-05 | 2.241383311118674e-05 | 5.31% | 5.61% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3543655269600148e-05 | 2.239115085468918e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.382973785298402e-05 | 2.2314034610704883e-05 | 6.36% | 6.79% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3699455755383894e-05 | 2.2326799854518626e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3728809395845286e-05 | 2.2395692567939092e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.375533270869214e-05 | 2.2434040812694403e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.387269835153264e-05 | 2.2303579633077602e-05 | 6.57% | 7.04% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3849877359434386e-05 | 2.2482287829588664e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.382584739270989e-05 | 2.5125808616285165e-05 | -5.46% | -5.17% | 0.95x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3737451934582988e-05 | 2.2397862697112815e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3629671762663173e-05 | 2.2588680633181277e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3695491081467262e-05 | 2.2227597247656536e-05 | 6.19% | 6.60% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.355905275824654e-05 | 2.237172839851851e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3575207523204408e-05 | 2.250331641770232e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.358881223426642e-05 | 2.2521528823461648e-05 | 4.52% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3674043505695358e-05 | 2.2343518885701736e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3781886549884267e-05 | 2.2249806374029873e-05 | 6.44% | 6.89% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3812829996716743e-05 | 2.2377528603154656e-05 | 6.03% | 6.41% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3688547562953164e-05 | 2.2263088623265983e-05 | 6.02% | 6.40% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.352288711456464e-05 | 2.234339910566698e-05 | 5.01% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3847958574201112e-05 | 2.2312478682812324e-05 | 6.44% | 6.88% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.356524555554951e-05 | 2.2419824640560712e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3732187596705516e-05 | 2.2518071185056863e-05 | 5.12% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3891319796405288e-05 | 2.238884645434133e-05 | 6.29% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3762587029280746e-05 | 2.2729060114330386e-05 | 4.35% | 4.55% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3704659144926437e-05 | 2.2306253184465268e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.379110761734665e-05 | 2.2412953816670894e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3514836101321345e-05 | 2.237475087745944e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.351744409440999e-05 | 2.2564409279384136e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3620574918086866e-05 | 2.2423142109647965e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.372372347878709e-05 | 2.2313518196661848e-05 | 5.94% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.373069056312161e-05 | 2.224977868566421e-05 | 6.24% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3657540051047838e-05 | 2.2257956951115528e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3800967690920422e-05 | 2.2291147803295692e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3835517325257137e-05 | 2.246781019519733e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3785650580130855e-05 | 2.260472393495216e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.375849967342668e-05 | 2.2166524364956987e-05 | 6.70% | 7.18% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3915177591747427e-05 | 2.221881177345536e-05 | 7.09% | 7.63% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.372101629799534e-05 | 2.216003291559524e-05 | 6.58% | 7.04% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3581293569595987e-05 | 2.2389059211338044e-05 | 5.06% | 5.33% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3852734176514886e-05 | 2.2308559236075993e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.386602984058612e-05 | 2.2489418916014407e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3650476847559054e-05 | 2.2423811038780686e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3575151409806527e-05 | 2.2617312036206332e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3510012919511286e-05 | 2.2294312708007265e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.377802177691101e-05 | 2.2610479999043214e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.366875880595009e-05 | 2.238682366251946e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3632205770497846e-05 | 2.2389457864283138e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3845345044841145e-05 | 2.2751026910338174e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3856339539586988e-05 | 2.241040486657727e-05 | 6.06% | 6.45% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3624553636880806e-05 | 2.229576312505141e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.36210484918095e-05 | 2.249385140012655e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3892053037286346e-05 | 2.2358410637134693e-05 | 6.42% | 6.86% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3797018945760718e-05 | 2.2376234188497598e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3923115706647037e-05 | 2.2381232971223467e-05 | 6.45% | 6.89% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.391506549099881e-05 | 2.2427803977185106e-05 | 6.22% | 6.63% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3453996432203805e-05 | 2.2568679872962996e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3615028367017926e-05 | 2.2487833733767863e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3692704890947054e-05 | 2.220350517890072e-05 | 6.29% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3734712608859013e-05 | 2.2432265219054494e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.339860793502093e-05 | 2.238667724496636e-05 | 4.32% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3855156616456042e-05 | 2.230907913489062e-05 | 6.48% | 6.93% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3658352224272606e-05 | 2.2363130912816756e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3560231131695263e-05 | 2.2555930610328324e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3874027454028395e-05 | 2.235607865901923e-05 | 6.36% | 6.79% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3906467133971598e-05 | 2.2304131729500075e-05 | 6.70% | 7.18% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3964159392390355e-05 | 2.2291623641676797e-05 | 6.98% | 7.50% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3388851977909192e-05 | 2.2534815380135177e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3425912897231543e-05 | 2.224887823754891e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.37093048816149e-05 | 2.2374083100012883e-05 | 5.63% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3806277834422893e-05 | 2.2627026735610147e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.361379797541659e-05 | 2.249514975801338e-05 | 4.74% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3867489040196936e-05 | 2.2400549386953603e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.364288243616484e-05 | 2.23526904549935e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.375122742266059e-05 | 2.254689373097089e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.369940300682656e-05 | 2.2341153527679886e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.365740373063478e-05 | 2.237209054661865e-05 | 5.43% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.390674626752826e-05 | 2.232228341496812e-05 | 6.63% | 7.10% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.374267860004839e-05 | 2.2554698447657276e-05 | 5.00% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3879916717642476e-05 | 2.248988138896159e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.41617928391949e-05 | 2.2202414442300284e-05 | 8.11% | 8.83% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3605334454092288e-05 | 2.274793652782196e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3652865343493466e-05 | 2.2332594290410854e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3443646661488326e-05 | 2.2448681318737277e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.128503596012436e-05 | 5.7764189147479476e-05 | 28.94% | 40.72% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.105367903600578e-05 | 5.898060929882079e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.06658986591256e-05 | 5.9136963735364886e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.08178652083403e-05 | 5.864142536238824e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.084116881647188e-05 | 5.817582392916637e-05 | 28.04% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.116863387571069e-05 | 5.91085763710781e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.929147094454882e-05 | 5.61087157290314e-05 | 29.24% | 41.32% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.254972314247495e-05 | 5.7690383758490804e-05 | 30.11% | 43.09% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.139870802241e-05 | 5.828026669922113e-05 | 28.40% | 39.67% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.91394388134318e-05 | 5.787824284754266e-05 | 35.07% | 54.01% | 1.54x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.134344314543237e-05 | 5.78825660073608e-05 | 28.84% | 40.53% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.177684735686464e-05 | 5.8718644488910234e-05 | 28.20% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.164089743524925e-05 | 5.8227527758955505e-05 | 28.68% | 40.21% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.205765497117379e-05 | 5.789253370219894e-05 | 29.45% | 41.74% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.87286655965727e-05 | 5.8267002109954196e-05 | 34.33% | 52.28% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.189464560661422e-05 | 5.828244190008033e-05 | 28.83% | 40.51% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.134494464716244e-05 | 5.857019956834714e-05 | 28.00% | 38.88% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.201381539093067e-05 | 5.819883166004342e-05 | 29.04% | 40.92% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.284176616417648e-05 | 5.893930990979214e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.126312718379934e-05 | 5.856957027534441e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.138635947379059e-05 | 5.848672778741843e-05 | 28.14% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.171570915689098e-05 | 5.809092509389159e-05 | 28.91% | 40.67% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.134682873434365e-05 | 5.883234952133758e-05 | 27.68% | 38.27% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.140501377408015e-05 | 5.8854409249840026e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.204008599846324e-05 | 5.8308778577398914e-05 | 28.93% | 40.70% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.169223498288783e-05 | 5.914748930862165e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.913354203706342e-05 | 5.6558613404773945e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.954486363627051e-05 | 5.576026695739809e-05 | 29.90% | 42.66% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.121202548771073e-05 | 5.825679990341855e-05 | 28.27% | 39.40% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.204714770227483e-05 | 5.973428912569595e-05 | 27.20% | 37.35% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.251868831965552e-05 | 6.003683652674045e-05 | 27.24% | 37.45% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.187214706383816e-05 | 5.9765978217802206e-05 | 27.00% | 36.99% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.261270183287231e-05 | 6.033620736421122e-05 | 26.96% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.209857842926357e-05 | 5.956355951990069e-05 | 27.45% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.257150585451582e-05 | 5.95216706658141e-05 | 27.91% | 38.73% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.109503871292586e-05 | 5.675058354335874e-05 | 30.02% | 42.90% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.271066717298366e-05 | 6.001843223939645e-05 | 27.44% | 37.81% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.246047722851587e-05 | 5.9567534239601255e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.229554604107227e-05 | 5.8945270422689e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.099760790791003e-05 | 5.984556841878689e-05 | 26.11% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.282332797856244e-05 | 5.9406264352742496e-05 | 28.27% | 39.42% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.219581264824521e-05 | 5.952808761886066e-05 | 27.58% | 38.08% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.266534574647062e-05 | 5.974057470519068e-05 | 27.73% | 38.37% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.261286354628662e-05 | 5.9612003974458726e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.251559962767048e-05 | 5.9135156498424614e-05 | 28.33% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.266938105978432e-05 | 5.949546056475745e-05 | 28.03% | 38.95% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.275983639970333e-05 | 5.931206833492912e-05 | 28.33% | 39.53% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.348704057591885e-05 | 5.999764406456333e-05 | 28.14% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.199529786364035e-05 | 5.934577841187198e-05 | 27.62% | 38.17% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.236844262598271e-05 | 5.956024016872117e-05 | 27.69% | 38.29% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.218337645101933e-05 | 5.938338919103888e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.179454952271585e-05 | 5.963149580199249e-05 | 27.10% | 37.17% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.192113739754433e-05 | 5.9489484187805666e-05 | 27.38% | 37.71% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.30170097821926e-05 | 5.947138846231142e-05 | 28.36% | 39.59% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.193626549833853e-05 | 5.944936693230745e-05 | 27.44% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.100160506362227e-05 | 5.8146712587243954e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.190639433517932e-05 | 5.7914920914197874e-05 | 29.29% | 41.43% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.171641588049014e-05 | 6.039090352815665e-05 | 26.10% | 35.31% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.085875245313709e-05 | 5.869267820360293e-05 | 27.41% | 37.77% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.145903231603855e-05 | 5.968258857614615e-05 | 26.73% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.220732533858941e-05 | 5.9487732338740406e-05 | 27.64% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.201628743624746e-05 | 5.9146585450963654e-05 | 27.88% | 38.67% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.158335060519532e-05 | 5.94424401554846e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.256762038798762e-05 | 5.893813931694817e-05 | 28.62% | 40.09% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.987221585775769e-05 | 5.682835446035633e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.220630680688986e-05 | 5.929694718746592e-05 | 27.87% | 38.63% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.18991868955243e-05 | 6.019918211579512e-05 | 26.50% | 36.05% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.286074179814395e-05 | 5.9506071205829335e-05 | 28.19% | 39.25% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.162942235417808e-05 | 5.9110700240382485e-05 | 27.59% | 38.10% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.27160905496026e-05 | 6.0017729490835405e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.200954001383994e-05 | 5.944865727627214e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.197958745030561e-05 | 5.93997273675986e-05 | 27.54% | 38.01% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.405190096296156e-05 | 5.953894788089724e-05 | 29.16% | 41.17% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.216743044250873e-05 | 5.983062120357438e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.164155075412925e-05 | 5.9219295187828564e-05 | 27.46% | 37.86% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.168677333353003e-05 | 5.8872126926264016e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.233119765372968e-05 | 5.947056264242016e-05 | 27.77% | 38.44% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.193383516837256e-05 | 5.9477621811058176e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.223098703072402e-05 | 5.860141843362742e-05 | 28.74% | 40.32% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.241795710842765e-05 | 6.009865719531188e-05 | 27.08% | 37.14% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.150498660188114e-05 | 5.94458723210555e-05 | 27.06% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.211325836995169e-05 | 5.954850794843173e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.161882945432943e-05 | 5.8981126323637765e-05 | 27.74% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.234859642552314e-05 | 5.975985975138819e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.04377650504462e-05 | 5.695217941762702e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.02415083072538e-05 | 5.6956960055123076e-05 | 29.02% | 40.88% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.238119032608895e-05 | 5.973712340677065e-05 | 27.49% | 37.91% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.145969140591902e-05 | 5.8058146974760425e-05 | 28.73% | 40.31% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.187092019111e-05 | 5.903272564815145e-05 | 27.90% | 38.69% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.248129304329877e-05 | 5.9493891335630265e-05 | 27.87% | 38.64% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.129528778911892e-05 | 5.89632477325531e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.145840317577878e-05 | 5.8627211101645035e-05 | 28.03% | 38.94% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.167674866674616e-05 | 5.8355428304063995e-05 | 28.55% | 39.96% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.999443492223258e-05 | 5.5788203061891394e-05 | 30.26% | 43.39% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.169833151194682e-05 | 5.85202623560862e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.129564087086777e-05 | 5.877659025626381e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.126778763414667e-05 | 5.9394491663375046e-05 | 26.92% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010363196835389697 | 8.142211153527747e-05 | 21.43% | 27.28% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.949108074183069e-05 | 5.7019136452325334e-05 | 28.27% | 39.41% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.194300127220463e-05 | 5.879707824023149e-05 | 28.25% | 39.37% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.0519093197029e-05 | 5.8621574318847484e-05 | 27.20% | 37.35% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.123668131978114e-05 | 5.8961387359805534e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.112475548666977e-05 | 5.884958137636812e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.011915535865711e-05 | 5.86742100470391e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 0.00010247483552868944 | 7.356720844669531e-05 | 28.21% | 39.29% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.96468295087794e-05 | 5.629603203553488e-05 | 29.32% | 41.48% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.945458554863164e-05 | 7.545672713024374e-05 | 24.13% | 31.80% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.24459430286961e-05 | 5.984616889906269e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.163860642201383e-05 | 5.7857837710940816e-05 | 29.13% | 41.10% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.135606735471299e-05 | 5.810666046393752e-05 | 28.58% | 40.01% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.094885176617891e-05 | 5.852401563900753e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.082509696050966e-05 | 5.847386041170154e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.155388795320956e-05 | 5.9334059050990976e-05 | 27.25% | 37.45% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.93519223231959e-05 | 5.603508047530237e-05 | 29.38% | 41.61% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.863131421415127e-05 | 5.586868976869134e-05 | 28.95% | 40.74% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.119538494192148e-05 | 5.8576407645577534e-05 | 27.86% | 38.61% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.019266988394612e-05 | 5.614653305909737e-05 | 29.99% | 42.83% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.186916342624233e-05 | 5.811877271643159e-05 | 29.01% | 40.87% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.131461462709178e-05 | 5.85182900817984e-05 | 28.03% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.042212481353904e-05 | 5.6565553703930374e-05 | 29.66% | 42.18% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.043103665849928e-05 | 5.6726164711465474e-05 | 29.47% | 41.79% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.149148787767833e-05 | 5.697392156583733e-05 | 30.09% | 43.03% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.710793755438017e-05 | 5.421808499076085e-05 | 29.69% | 42.22% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.031833989769992e-05 | 5.714616098415897e-05 | 28.85% | 40.55% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.915704794126072e-05 | 5.751601861309912e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.023019512306886e-05 | 5.7255985642877205e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010578066377899353 | 7.881086603066184e-05 | 25.50% | 34.22% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.0095985933205e-05 | 5.793475082260523e-05 | 27.67% | 38.25% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.975728381892274e-05 | 5.754819634206954e-05 | 27.85% | 38.59% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.013564739798385e-05 | 5.577702469337988e-05 | 30.40% | 43.67% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.043267836603167e-05 | 5.6949805147635846e-05 | 29.20% | 41.23% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.036345698154007e-05 | 5.7253835639898426e-05 | 28.76% | 40.36% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.057814000133535e-05 | 5.6669008412928126e-05 | 29.67% | 42.19% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.929634181322926e-05 | 7.229021861813026e-05 | 27.20% | 37.36% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.961277906620544e-05 | 5.769959561147602e-05 | 27.52% | 37.98% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.885480629759894e-05 | 7.414752684610774e-05 | 24.99% | 33.32% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.076642918536947e-05 | 5.771208262252573e-05 | 28.54% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.943040791522782e-05 | 5.677173835743441e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.96400232769049e-05 | 5.694658274300411e-05 | 28.50% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.023610016572714e-05 | 5.675756152273245e-05 | 29.26% | 41.37% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.999673759445253e-05 | 5.638909347427654e-05 | 29.51% | 41.87% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.149140852500767e-05 | 5.637023778926537e-05 | 30.83% | 44.56% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.823943208100587e-05 | 5.410742887170331e-05 | 30.84% | 44.60% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.842157671721007e-05 | 5.42757952320848e-05 | 30.79% | 44.49% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.927673628768106e-05 | 5.718555191252001e-05 | 27.87% | 38.63% | 1.39x | ✅ |
| `hexbytes_new['']` | 7.173713857167064e-05 | 3.703615837635082e-05 | 48.37% | 93.69% | 1.94x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.276139963066289e-05 | 5.009589312328975e-05 | 45.99% | 85.17% | 1.85x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.182055851752282e-05 | 4.9228332396435196e-05 | 46.39% | 86.52% | 1.87x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.865986227293416e-05 | 4.652069189301804e-05 | 47.53% | 90.58% | 1.91x | ✅ |
| `hexbytes_new['0x']` | 7.928058814067211e-05 | 3.7358935962702135e-05 | 52.88% | 112.21% | 2.12x | ✅ |
| `hexbytes_new['0x1234']` | 8.800068806981742e-05 | 4.5788841398954256e-05 | 47.97% | 92.19% | 1.92x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.610357118164067e-05 | 4.494722613248128e-05 | 47.80% | 91.57% | 1.92x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.737884942960893e-05 | 4.5293212526073313e-05 | 48.16% | 92.92% | 1.93x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.655544942625783e-05 | 4.608461107138972e-05 | 46.76% | 87.82% | 1.88x | ✅ |
| `hexbytes_new['abc']` | 8.331058069126893e-05 | 4.742631317143377e-05 | 43.07% | 75.66% | 1.76x | ✅ |
| `hexbytes_new['deadbeef']` | 7.709953580098201e-05 | 4.066782685507515e-05 | 47.25% | 89.58% | 1.90x | ✅ |
| `hexbytes_new[0-9]` | 4.20296849637365e-05 | 2.5751140414361255e-05 | 38.73% | 63.21% | 1.63x | ✅ |
| `hexbytes_new[0]` | 0.00012316796082409009 | 6.037762966152965e-05 | 50.98% | 104.00% | 2.04x | ✅ |
| `hexbytes_new[123456]` | 0.00012886655731707836 | 6.590450707851035e-05 | 48.86% | 95.54% | 1.96x | ✅ |
| `hexbytes_new[2**16]` | 0.00012622991716703386 | 6.48492162177431e-05 | 48.63% | 94.65% | 1.95x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012937509198026858 | 7.323697983392126e-05 | 43.39% | 76.65% | 1.77x | ✅ |
| `hexbytes_new[2**32]` | 0.00012893654071712674 | 6.89477399032995e-05 | 46.53% | 87.01% | 1.87x | ✅ |
| `hexbytes_new[2**64]` | 0.00012995195610163716 | 7.213020396364566e-05 | 44.49% | 80.16% | 1.80x | ✅ |
| `hexbytes_new[2**8]` | 0.0001262619398244474 | 6.305237736455962e-05 | 50.06% | 100.25% | 2.00x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.3208238945293934e-05 | 2.6645058944477893e-05 | 38.33% | 62.16% | 1.62x | ✅ |
| `hexbytes_new[False]` | 6.095063734349642e-05 | 2.6914308270952974e-05 | 55.84% | 126.46% | 2.26x | ✅ |
| `hexbytes_new[True]` | 6.052345235090008e-05 | 2.701898046694069e-05 | 55.36% | 124.00% | 2.24x | ✅ |
| `hexbytes_new[all byte values]` | 4.317790892338641e-05 | 2.656533981604875e-05 | 38.47% | 62.53% | 1.63x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.2974209744420995e-05 | 2.624062244968422e-05 | 38.94% | 63.77% | 1.64x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.275992043201219e-05 | 2.6255984517074593e-05 | 38.60% | 62.86% | 1.63x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.216929585554029e-05 | 2.562987281170315e-05 | 39.22% | 64.53% | 1.65x | ✅ |
| `hexbytes_new[b'']` | 4.2345796061406405e-05 | 2.565936642006129e-05 | 39.41% | 65.03% | 1.65x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.291299188718689e-05 | 2.5487902014267304e-05 | 40.61% | 68.37% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.260824575301383e-05 | 2.57035431464234e-05 | 39.67% | 65.77% | 1.66x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.443391591204329e-05 | 2.606166288660813e-05 | 41.35% | 70.50% | 1.70x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.4970707421612e-05 | 3.796386958360309e-05 | 30.94% | 44.80% | 1.45x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.232216193035453e-05 | 2.5595138094956444e-05 | 39.52% | 65.35% | 1.65x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.217595869304227e-05 | 2.546253892098728e-05 | 39.63% | 65.64% | 1.66x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.236363228914111e-05 | 2.554274988789604e-05 | 39.71% | 65.85% | 1.66x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.253379323128223e-05 | 2.5651176570574326e-05 | 39.69% | 65.82% | 1.66x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.283371713303722e-05 | 2.5628842237573317e-05 | 40.17% | 67.13% | 1.67x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.249260587316558e-05 | 2.6135390149363425e-05 | 38.49% | 62.59% | 1.63x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.0887713927002656e-05 | 3.3320076537675475e-05 | 34.52% | 52.72% | 1.53x | ✅ |
| `hexbytes_new[b'abc']` | 4.321459174702429e-05 | 2.5425695955649963e-05 | 41.16% | 69.96% | 1.70x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.93607930162905e-05 | 3.7148325417162236e-05 | 46.44% | 86.71% | 1.87x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.91879529922824e-05 | 3.7944821522390115e-05 | 45.16% | 82.34% | 1.82x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.98665831494334e-05 | 3.7753380991567914e-05 | 45.96% | 85.06% | 1.85x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.937839210925049e-05 | 3.8147329485777975e-05 | 45.02% | 81.87% | 1.82x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.979957338017148e-05 | 3.773624734633576e-05 | 45.94% | 84.97% | 1.85x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.848230781233707e-05 | 3.7553402403532924e-05 | 45.16% | 82.36% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.787774010767617e-05 | 3.5833527419807515e-05 | 47.21% | 89.43% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.987243505885198e-05 | 3.7576760838321443e-05 | 46.22% | 85.95% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.905815966876035e-05 | 3.77245568923509e-05 | 45.37% | 83.06% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.960135265152079e-05 | 3.82401042720387e-05 | 45.06% | 82.01% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.320373028564453e-05 | 5.613474928305336e-05 | 39.77% | 66.04% | 1.66x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.954484990962622e-05 | 3.7427060439818195e-05 | 46.18% | 85.81% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.945997468938037e-05 | 3.821120190771326e-05 | 44.99% | 81.78% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.802337888230117e-05 | 3.744756700418637e-05 | 44.95% | 81.65% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.843219786055986e-05 | 3.7618727627372794e-05 | 45.03% | 81.91% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.902701872972344e-05 | 3.7653703313061354e-05 | 45.45% | 83.32% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.920886985362704e-05 | 3.749542370883781e-05 | 45.82% | 84.58% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.727048940919714e-05 | 5.018644554097558e-05 | 42.49% | 73.89% | 1.74x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.942879165385949e-05 | 3.765722176439572e-05 | 45.76% | 84.37% | 1.84x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.730163285988232e-05 | 4.9124841750568376e-05 | 43.73% | 77.71% | 1.78x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.029919571425243e-05 | 3.814456996037079e-05 | 45.74% | 84.30% | 1.84x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.950821473183846e-05 | 3.754990163408111e-05 | 45.98% | 85.11% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.898669871019232e-05 | 3.730245841586013e-05 | 45.93% | 84.94% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.89944703156345e-05 | 3.777654247355893e-05 | 45.25% | 82.64% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.920660346809834e-05 | 3.7437812341523964e-05 | 45.90% | 84.86% | 1.85x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.174654935142629e-05 | 3.7718620443474274e-05 | 47.43% | 90.22% | 1.90x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 7.01178715235607e-05 | 3.761168581918774e-05 | 46.36% | 86.43% | 1.86x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 7.010412147236542e-05 | 3.7938795708324305e-05 | 45.88% | 84.78% | 1.85x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.070762793443082e-05 | 3.752548251760691e-05 | 46.93% | 88.43% | 1.88x | ✅ |
| `hexbytes_new[long alternating]` | 5.0962974051006144e-05 | 3.3044055952263924e-05 | 35.16% | 54.23% | 1.54x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.404980434569185e-05 | 4.350336827861765e-05 | 48.24% | 93.20% | 1.93x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.439079440242638e-05 | 4.3302518756097764e-05 | 48.69% | 94.89% | 1.95x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.382222102895231e-05 | 4.3147523952645646e-05 | 48.52% | 94.27% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.123235450702523e-05 | 4.209979717728952e-05 | 48.17% | 92.95% | 1.93x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.270652363043566e-05 | 4.271982292232735e-05 | 48.35% | 93.60% | 1.94x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.300314435641027e-05 | 4.227870303608201e-05 | 49.06% | 96.32% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.207166881122042e-05 | 4.3166849694760034e-05 | 47.40% | 90.13% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.422195761528146e-05 | 4.245904581691494e-05 | 49.59% | 98.36% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.374496444046643e-05 | 4.216435688731418e-05 | 49.65% | 98.62% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.39614779484581e-05 | 4.27714655501136e-05 | 49.06% | 96.30% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010357518126256076 | 6.307157030440447e-05 | 39.11% | 64.22% | 1.64x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.471488131446664e-05 | 4.211277112646543e-05 | 50.29% | 101.16% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.3774472043929e-05 | 4.226641615084641e-05 | 49.55% | 98.21% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.358734433564302e-05 | 4.235651543357809e-05 | 49.33% | 97.34% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.376383134118115e-05 | 4.281111557280772e-05 | 48.89% | 95.66% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.690497457765071e-05 | 4.2276108793359067e-05 | 51.35% | 105.57% | 2.06x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.3534284532354e-05 | 4.257534109148901e-05 | 49.03% | 96.20% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010051565283888755 | 5.52482908203829e-05 | 45.04% | 81.93% | 1.82x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.347087241938412e-05 | 4.263469617007113e-05 | 48.92% | 95.78% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.0001001692276660304 | 5.62779654756005e-05 | 43.82% | 77.99% | 1.78x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.386743369789493e-05 | 4.208219541039233e-05 | 49.82% | 99.29% | 1.99x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.400235422516146e-05 | 4.3285301291475516e-05 | 48.47% | 94.07% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.389468521231922e-05 | 4.2411898898557197e-05 | 49.45% | 97.81% | 1.98x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.382899170562777e-05 | 4.215328925992663e-05 | 49.72% | 98.87% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.203182601610584e-05 | 4.201000022709806e-05 | 48.79% | 95.27% | 1.95x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.357418029046445e-05 | 4.261185086813309e-05 | 49.01% | 96.13% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.362914008426714e-05 | 4.1964676081810205e-05 | 49.82% | 99.28% | 1.99x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.463884082681618e-05 | 4.199566204364647e-05 | 50.38% | 101.54% | 2.02x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.333084464704361e-05 | 4.220456114838631e-05 | 49.35% | 97.45% | 1.97x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.297209791991532e-05 | 2.6447320948890307e-05 | 38.45% | 62.48% | 1.62x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.2285831553658816e-05 | 2.5713973273790126e-05 | 39.19% | 64.45% | 1.64x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.178831978964377e-05 | 2.5580518221189474e-05 | 38.79% | 63.36% | 1.63x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.213243891949213e-05 | 2.5858314597803366e-05 | 38.63% | 62.94% | 1.63x | ✅ |
| `hexbytes_new[palindrome]` | 4.2600700487527384e-05 | 2.573229671527083e-05 | 39.60% | 65.55% | 1.66x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.2499232572904255e-05 | 2.6435145072853995e-05 | 37.80% | 60.77% | 1.61x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2302110020172466e-05 | 2.567008769188105e-05 | 39.32% | 64.79% | 1.65x | ✅ |
| `hexbytes_new[single null byte]` | 4.210738729569374e-05 | 2.577101547870504e-05 | 38.80% | 63.39% | 1.63x | ✅ |
| `hexbytes_new[two patterns]` | 4.271483874907369e-05 | 2.6363852206205504e-05 | 38.28% | 62.02% | 1.62x | ✅ |
| `hexbytes_repr[0-9]` | 2.8942047888293864e-05 | 1.434814395847875e-05 | 50.42% | 101.71% | 2.02x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011970189664272693 | 4.061280102627386e-05 | 66.07% | 194.74% | 2.95x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011955810712988379 | 4.1068720786985166e-05 | 65.65% | 191.12% | 2.91x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.8486042108562666e-05 | 1.9704515344392695e-05 | 59.36% | 146.07% | 2.46x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.867064198609969e-05 | 1.9857109013281722e-05 | 59.20% | 145.10% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.0371028615583614e-05 | 1.801910365184787e-05 | 55.37% | 124.05% | 2.24x | ✅ |
| `hexbytes_repr[b'']` | 2.115984163301662e-05 | 1.240452893162426e-05 | 41.38% | 70.58% | 1.71x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.635780553291033e-05 | 1.684765250185759e-05 | 53.66% | 115.80% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.644225067984196e-05 | 1.4109873948112675e-05 | 46.64% | 87.40% | 1.87x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.201505732884407e-05 | 2.3478341404928987e-05 | 62.14% | 164.14% | 2.64x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007619148491327387 | 0.00022312555824831716 | 70.72% | 241.47% | 3.41x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.622471014972081e-05 | 1.414451608171173e-05 | 46.06% | 85.41% | 1.85x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.6819622998582087e-05 | 1.403419755326318e-05 | 47.67% | 91.10% | 1.91x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8483464135973797e-05 | 1.4406825444242276e-05 | 49.42% | 97.71% | 1.98x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.7981211563345366e-05 | 1.4095882884444738e-05 | 49.62% | 98.51% | 1.99x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6159438283206397e-05 | 1.4036080909688528e-05 | 46.34% | 86.37% | 1.86x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.853529927046031e-05 | 1.9994983568104528e-05 | 58.80% | 142.74% | 2.43x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040024404679110225 | 0.00011966165418473044 | 70.10% | 234.48% | 3.34x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6036692707108945e-05 | 1.4179374118983258e-05 | 45.54% | 83.62% | 1.84x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003987094729867445 | 0.00012281070084838237 | 69.20% | 224.65% | 3.25x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.766327181631643e-05 | 3.4062846366370624e-05 | 65.12% | 186.71% | 2.87x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.8599669247216024e-05 | 1.4487458776957795e-05 | 49.34% | 97.41% | 1.97x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.73503067246069e-05 | 1.4297393199175751e-05 | 47.72% | 91.30% | 1.91x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.660739875662851e-05 | 1.4183261333001564e-05 | 46.69% | 87.60% | 1.88x | ✅ |
| `hexbytes_repr[palindrome]` | 3.171913541705647e-05 | 1.5884576998673486e-05 | 49.92% | 99.69% | 2.00x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.243905779300929e-05 | 2.3409088693296277e-05 | 62.51% | 166.73% | 2.67x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.522639945491932e-05 | 1.355649427203666e-05 | 46.26% | 86.08% | 1.86x | ✅ |
| `hexbytes_repr[single null byte]` | 2.519806944232697e-05 | 1.3741608615896497e-05 | 45.47% | 83.37% | 1.83x | ✅ |
| `hexbytes_repr[two patterns]` | 4.869648249387185e-05 | 1.9903422047940164e-05 | 59.13% | 144.66% | 2.45x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5449390681363126e-05 | 1.3675726150096101e-05 | 11.48% | 12.97% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.182718665715364e-05 | 3.991290721243648e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.2015396059441764e-05 | 4.00576155597234e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0560273314787597e-05 | 1.91220642669418e-05 | 7.00% | 7.52% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0643104990735427e-05 | 1.8792606752697055e-05 | 8.96% | 9.85% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8830578453229697e-05 | 1.6785228203591118e-05 | 10.86% | 12.19% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0068750167242933e-05 | 1.1191736279414041e-05 | -11.15% | -10.03% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.74233534452257e-05 | 1.5618531340635144e-05 | 10.36% | 11.56% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.496104174337705e-05 | 1.2961151677503531e-05 | 13.37% | 15.43% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.537675799329029e-05 | 2.269816247265048e-05 | 10.56% | 11.80% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022278966971400066 | 0.00022247918562823732 | 0.14% | 0.14% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4752487464971451e-05 | 1.2751577788254394e-05 | 13.56% | 15.69% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5002845005081845e-05 | 1.3179581482763845e-05 | 12.15% | 13.83% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5132510449309315e-05 | 1.3331285494652362e-05 | 11.90% | 13.51% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5208233757404012e-05 | 1.3490124916341388e-05 | 11.30% | 12.74% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4829060433478373e-05 | 1.2996341008699108e-05 | 12.36% | 14.10% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.049133693719718e-05 | 1.8856511157900126e-05 | 7.98% | 8.67% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001228400094041355 | 0.0001218651008169912 | 0.79% | 0.80% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4717917858120678e-05 | 1.3156165236859994e-05 | 10.61% | 11.87% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012267411395700675 | 0.00012308307781067898 | -0.33% | -0.33% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.5916600321562954e-05 | 3.403581650644288e-05 | 5.24% | 5.53% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5523812110961592e-05 | 1.3757261210108089e-05 | 11.38% | 12.84% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5091625959151313e-05 | 1.3330397213877353e-05 | 11.67% | 13.21% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5128837804769592e-05 | 1.3450951651567628e-05 | 11.09% | 12.47% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.644146763017772e-05 | 1.4421659878892918e-05 | 12.28% | 14.01% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.546679005589768e-05 | 2.2772511652160386e-05 | 10.58% | 11.83% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4562141760867822e-05 | 1.2684861677668724e-05 | 12.89% | 14.80% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4571083922796967e-05 | 1.2764729228765248e-05 | 12.40% | 14.15% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.051924499647207e-05 | 1.8939901043739478e-05 | 7.70% | 8.34% | 1.08x | ✅ |
