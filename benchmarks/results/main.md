#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/fix-install/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/fix-install/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.3342802184424096e-05 | 2.334140858858103e-05 | 0.01% | 0.01% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.3277932179274073e-05 | 2.3393075793598155e-05 | -0.49% | -0.49% | 1.00x | ❌ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.3289313773350286e-05 | 2.3854853263105038e-05 | -2.43% | -2.37% | 0.98x | ❌ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.3283092721559137e-05 | 2.3280468991131643e-05 | 0.01% | 0.01% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.3278426006820718e-05 | 2.3394650363039525e-05 | -0.50% | -0.50% | 1.00x | ❌ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.3286036916718726e-05 | 2.328693969833319e-05 | -0.00% | -0.00% | 1.00x | ❌ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.3289150318668324e-05 | 2.3760018336681114e-05 | -2.02% | -1.98% | 0.98x | ❌ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.3317962485978806e-05 | 2.3450261198002633e-05 | -0.57% | -0.56% | 0.99x | ❌ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.3311509123166177e-05 | 2.3231426511136777e-05 | 0.34% | 0.34% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.3331225092547033e-05 | 2.3300955303065718e-05 | 0.13% | 0.13% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.335018362888694e-05 | 2.3674902947129895e-05 | -1.39% | -1.37% | 0.99x | ❌ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3297523432468522e-05 | 2.3171726565605256e-05 | 0.54% | 0.54% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.332128572868146e-05 | 2.3242912699024348e-05 | 0.34% | 0.34% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.3284394533023055e-05 | 2.3233576957476108e-05 | 0.22% | 0.22% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.3323691230397177e-05 | 2.327187118404671e-05 | 0.22% | 0.22% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.3288204549857122e-05 | 2.3651439653692753e-05 | -1.56% | -1.54% | 0.98x | ❌ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.3289279789652577e-05 | 2.398098648859427e-05 | -2.97% | -2.88% | 0.97x | ❌ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.327047120553274e-05 | 2.3363905084368797e-05 | -0.40% | -0.40% | 1.00x | ❌ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.332003712685132e-05 | 2.338421586179448e-05 | -0.28% | -0.27% | 1.00x | ❌ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.3321876637838553e-05 | 2.3264664577090187e-05 | 0.25% | 0.25% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.3332009497749676e-05 | 2.323941353655894e-05 | 0.40% | 0.40% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.3303844583257857e-05 | 2.3800399637317646e-05 | -2.13% | -2.09% | 0.98x | ❌ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.327676387914898e-05 | 2.3764882111369495e-05 | -2.10% | -2.05% | 0.98x | ❌ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.3470410195641364e-05 | 2.3529328792236856e-05 | -0.25% | -0.25% | 1.00x | ❌ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.3287469262704797e-05 | 2.3515673209355898e-05 | -0.98% | -0.97% | 0.99x | ❌ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.3301468543275412e-05 | 2.3930419673008825e-05 | -2.70% | -2.63% | 0.97x | ❌ |
| `hexbytes_getitem_index[0-0-9]` | 2.2305214243990005e-05 | 2.2652564837731094e-05 | -1.56% | -1.53% | 0.98x | ❌ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.2327977838668962e-05 | 2.3074183795879567e-05 | -3.34% | -3.23% | 0.97x | ❌ |
| `hexbytes_getitem_index[0-all byte values]` | 2.23331818650182e-05 | 2.25447461831764e-05 | -0.95% | -0.94% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.232582057050516e-05 | 2.2996546456920453e-05 | -3.00% | -2.92% | 0.97x | ❌ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.2308538111681672e-05 | 2.3641274439320756e-05 | -5.97% | -5.64% | 0.94x | ❌ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.2279642633906557e-05 | 2.2450871427653863e-05 | -0.77% | -0.76% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.2304678997689483e-05 | 2.277555009840207e-05 | -2.11% | -2.07% | 0.98x | ❌ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.2502350002435138e-05 | 2.2685508930376812e-05 | -0.81% | -0.81% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.232116927056834e-05 | 2.24681832450589e-05 | -0.66% | -0.65% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.226694101612627e-05 | 2.2415078532894307e-05 | -0.67% | -0.66% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.2289891379345047e-05 | 2.2829420551407807e-05 | -2.42% | -2.36% | 0.98x | ❌ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.2307691211494114e-05 | 2.26523530450279e-05 | -1.55% | -1.52% | 0.98x | ❌ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.232603801065498e-05 | 2.2431551083773273e-05 | -0.47% | -0.47% | 1.00x | ❌ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.2325985645856756e-05 | 2.251646232710952e-05 | -0.85% | -0.85% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.2318640297205656e-05 | 2.26142037549645e-05 | -1.32% | -1.31% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.2305687537408588e-05 | 2.254605627199394e-05 | -1.08% | -1.07% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.24360850845805e-05 | 2.2485822762178428e-05 | -0.22% | -0.22% | 1.00x | ❌ |
| `hexbytes_getitem_index[0-b'abc']` | 2.2383414423369816e-05 | 2.25976211977389e-05 | -0.96% | -0.95% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-long alternating]` | 2.228468464965382e-05 | 2.2762546873421303e-05 | -2.14% | -2.10% | 0.98x | ❌ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.226159646226954e-05 | 2.2473052774957954e-05 | -0.95% | -0.94% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.232748811313247e-05 | 2.27965890477755e-05 | -2.10% | -2.06% | 0.98x | ❌ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.2314362884166096e-05 | 2.2578613961405255e-05 | -1.18% | -1.17% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.2328694794820517e-05 | 2.240394785639172e-05 | -0.34% | -0.34% | 1.00x | ❌ |
| `hexbytes_getitem_index[0-palindrome]` | 2.260392245137631e-05 | 2.2660472896188246e-05 | -0.25% | -0.25% | 1.00x | ❌ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.2290182798845466e-05 | 2.256662840809063e-05 | -1.24% | -1.23% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.2272402473030228e-05 | 2.250693769372786e-05 | -1.05% | -1.04% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-single null byte]` | 2.2352142984601446e-05 | 2.2761500435336533e-05 | -1.83% | -1.80% | 0.98x | ❌ |
| `hexbytes_getitem_index[0-two patterns]` | 2.22757144960561e-05 | 2.2990691141826694e-05 | -3.21% | -3.11% | 0.97x | ❌ |
| `hexbytes_getitem_index[1-0-9]` | 2.232311524002394e-05 | 2.2482426418827294e-05 | -0.71% | -0.71% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.241910065034468e-05 | 2.2684927842274846e-05 | -1.19% | -1.17% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-all byte values]` | 2.2309989318685225e-05 | 2.2526064236261788e-05 | -0.97% | -0.96% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.230705541442566e-05 | 2.2497182455762482e-05 | -0.85% | -0.85% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.2446434680923927e-05 | 2.2632491475626634e-05 | -0.83% | -0.82% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.2267968622762008e-05 | 2.242505653052955e-05 | -0.71% | -0.70% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.241779270328201e-05 | 2.2678469510380436e-05 | -1.16% | -1.15% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.2299436834690184e-05 | 2.2451110009460697e-05 | -0.68% | -0.68% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.2274807651518998e-05 | 2.2666514858838054e-05 | -1.76% | -1.73% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.233334345714213e-05 | 2.276109259591206e-05 | -1.92% | -1.88% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.227731975267603e-05 | 2.2744574651865546e-05 | -2.10% | -2.05% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.227736071587421e-05 | 2.268221775172392e-05 | -1.82% | -1.78% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.231522224469467e-05 | 2.2521805985377848e-05 | -0.93% | -0.92% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.2290684318885007e-05 | 2.245804126524429e-05 | -0.75% | -0.75% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.2291603608904827e-05 | 2.2384778575147446e-05 | -0.42% | -0.42% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.2286209916711878e-05 | 2.2394469129927945e-05 | -0.49% | -0.48% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.2295540097694818e-05 | 2.2518665623297793e-05 | -1.00% | -0.99% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-b'abc']` | 2.2288878135624163e-05 | 2.3014281279327362e-05 | -3.25% | -3.15% | 0.97x | ❌ |
| `hexbytes_getitem_index[1-long alternating]` | 2.2269991231426885e-05 | 2.2761340437175596e-05 | -2.21% | -2.16% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.228474074581501e-05 | 2.275941448350825e-05 | -2.13% | -2.09% | 0.98x | ❌ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.2378468045234184e-05 | 2.2409457026806294e-05 | -0.14% | -0.14% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.230593732917515e-05 | 2.2435859547541492e-05 | -0.58% | -0.58% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.2397134589371107e-05 | 2.2649993897489185e-05 | -1.13% | -1.12% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-palindrome]` | 2.2336689239529434e-05 | 2.2550195366802345e-05 | -0.96% | -0.95% | 0.99x | ❌ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.2409017803359778e-05 | 2.240685953777756e-05 | 0.01% | 0.01% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.2267413167407204e-05 | 2.2582702580640657e-05 | -1.42% | -1.40% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-0-9]` | 2.2349678174732943e-05 | 2.2755401100412176e-05 | -1.82% | -1.78% | 0.98x | ❌ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.243507101042015e-05 | 2.249640658660139e-05 | -0.27% | -0.27% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-all byte values]` | 2.242462705763386e-05 | 2.247066811440551e-05 | -0.21% | -0.20% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.2355638178658172e-05 | 2.266111719801635e-05 | -1.37% | -1.35% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.2590616532887408e-05 | 2.2482200288835013e-05 | 0.48% | 0.48% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.2328943368900175e-05 | 2.2487524577645465e-05 | -0.71% | -0.71% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.24171449805991e-05 | 2.281597068470272e-05 | -1.78% | -1.75% | 0.98x | ❌ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.2369191762739055e-05 | 2.2812364761908654e-05 | -1.98% | -1.94% | 0.98x | ❌ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.2550209616661383e-05 | 2.290552612283797e-05 | -1.58% | -1.55% | 0.98x | ❌ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.2444384376361842e-05 | 2.260543266332341e-05 | -0.72% | -0.71% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.239709864567945e-05 | 2.2707272064946175e-05 | -1.38% | -1.37% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.2334608528573008e-05 | 2.241358230322503e-05 | -0.35% | -0.35% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.2294787083534877e-05 | 2.2493755621023986e-05 | -0.89% | -0.88% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.2258063488595596e-05 | 2.2470695604967192e-05 | -0.96% | -0.95% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.2308312673994034e-05 | 2.256447677205411e-05 | -1.15% | -1.14% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.228322870444317e-05 | 2.2466493280820902e-05 | -0.82% | -0.82% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.228101965572293e-05 | 2.984033729801392e-05 | -33.93% | -25.33% | 0.75x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.2419331508316058e-05 | 2.2412305037505463e-05 | 0.03% | 0.03% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.237941921744367e-05 | 2.2575736744252482e-05 | -0.88% | -0.87% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.2293473932796706e-05 | 2.2390376764427576e-05 | -0.43% | -0.43% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.2294295697106002e-05 | 2.290509928586629e-05 | -2.74% | -2.67% | 0.97x | ❌ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.235863413110327e-05 | 2.2465112392477296e-05 | -0.48% | -0.47% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.2309309179147622e-05 | 2.2379399609943813e-05 | -0.31% | -0.31% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-palindrome]` | 2.250419525878535e-05 | 2.2510211653842703e-05 | -0.03% | -0.03% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.2296154567202656e-05 | 2.2503878479771784e-05 | -0.93% | -0.92% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-two patterns]` | 2.2283529269848363e-05 | 2.262174814844809e-05 | -1.52% | -1.50% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-0-9]` | 2.228811331327019e-05 | 2.2597449280353163e-05 | -1.39% | -1.37% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.247632764620757e-05 | 2.2856312587038945e-05 | -1.69% | -1.66% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-all byte values]` | 2.2445605375854165e-05 | 2.269545749172815e-05 | -1.11% | -1.10% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.2317588235458546e-05 | 2.2584858190987054e-05 | -1.20% | -1.18% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.2280695716050067e-05 | 2.2494076875440484e-05 | -0.96% | -0.95% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.2421136758482293e-05 | 2.294900097145885e-05 | -2.35% | -2.30% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.2309191121645375e-05 | 2.2888472250362695e-05 | -2.60% | -2.53% | 0.97x | ❌ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.2455672082787383e-05 | 2.2586261922893253e-05 | -0.58% | -0.58% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.2446763818952974e-05 | 2.257177620488476e-05 | -0.56% | -0.55% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.2324829556792394e-05 | 2.2591228904660832e-05 | -1.19% | -1.18% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.2349882767309032e-05 | 2.2533291439521614e-05 | -0.82% | -0.81% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.234982655577415e-05 | 2.257650624935094e-05 | -1.01% | -1.00% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.2463606008815186e-05 | 2.277873631634606e-05 | -1.40% | -1.38% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.232021359620224e-05 | 2.2647033067370672e-05 | -1.46% | -1.44% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.2288985438698094e-05 | 2.243041730510855e-05 | -0.63% | -0.63% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.2367090441415842e-05 | 2.240602657534534e-05 | -0.17% | -0.17% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-long alternating]` | 2.2317649304516414e-05 | 2.2819034735298953e-05 | -2.25% | -2.20% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.2408664936019978e-05 | 2.2927259379163868e-05 | -2.31% | -2.26% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.2388333679994087e-05 | 2.272722696617063e-05 | -1.51% | -1.49% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.2293484493062282e-05 | 2.2860897052854854e-05 | -2.55% | -2.48% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.2294181240731597e-05 | 2.2649292755548295e-05 | -1.59% | -1.57% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-palindrome]` | 2.246647010565547e-05 | 2.281437041924967e-05 | -1.55% | -1.52% | 0.98x | ❌ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.2427593408675494e-05 | 2.2563685976361642e-05 | -0.61% | -0.60% | 0.99x | ❌ |
| `hexbytes_getitem_index[3-two patterns]` | 2.2294306811454244e-05 | 2.267573215722861e-05 | -1.71% | -1.68% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-0-9]` | 2.225756581274611e-05 | 2.280489009169111e-05 | -2.46% | -2.40% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.242560572120268e-05 | 2.2981897583307412e-05 | -2.48% | -2.42% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-all byte values]` | 2.2280245709845777e-05 | 2.2661324261471077e-05 | -1.71% | -1.68% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.2405831731969396e-05 | 2.250937141298994e-05 | -0.46% | -0.46% | 1.00x | ❌ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.2462565776357794e-05 | 2.282813497912509e-05 | -1.63% | -1.60% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.2422074240077583e-05 | 2.255497314212806e-05 | -0.59% | -0.59% | 0.99x | ❌ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.2284767653691724e-05 | 2.2758231887865095e-05 | -2.12% | -2.08% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.227613609397399e-05 | 2.2615615824788424e-05 | -1.52% | -1.50% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.2357405629625093e-05 | 2.244032042818264e-05 | -0.37% | -0.37% | 1.00x | ❌ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.230226632739809e-05 | 2.367695222362331e-05 | -6.16% | -5.81% | 0.94x | ❌ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.2314620868451842e-05 | 2.2581031620225203e-05 | -1.19% | -1.18% | 0.99x | ❌ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.2400943650359302e-05 | 2.285643167068119e-05 | -2.03% | -1.99% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.2395975642129676e-05 | 2.2872128651180364e-05 | -2.13% | -2.08% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.242710578566907e-05 | 2.295941159745001e-05 | -2.37% | -2.32% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-long alternating]` | 2.2283800420217285e-05 | 2.277670705731914e-05 | -2.21% | -2.16% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.230216867171819e-05 | 2.2689945613930704e-05 | -1.74% | -1.71% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.241714704744033e-05 | 2.25003571448047e-05 | -0.37% | -0.37% | 1.00x | ❌ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.2268268716774565e-05 | 2.2666502880886624e-05 | -1.79% | -1.76% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.243489512312911e-05 | 2.2376673662915603e-05 | 0.26% | 0.26% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.239942844782707e-05 | 2.2824561150927957e-05 | -1.90% | -1.86% | 0.98x | ❌ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.2299418034258876e-05 | 2.3015807449753112e-05 | -3.21% | -3.11% | 0.97x | ❌ |
| `hexbytes_getitem_index[4-two patterns]` | 2.2287362714366024e-05 | 2.2874626317616468e-05 | -2.63% | -2.57% | 0.97x | ❌ |
| `hexbytes_getitem_index[5-0-9]` | 2.2345440179390855e-05 | 2.2745065349913635e-05 | -1.79% | -1.76% | 0.98x | ❌ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.2293165901977714e-05 | 2.246535144636093e-05 | -0.77% | -0.77% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-all byte values]` | 2.230662636389082e-05 | 2.2461031911207035e-05 | -0.69% | -0.69% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.2318698034019376e-05 | 2.2519898526822044e-05 | -0.90% | -0.89% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.2292872317515262e-05 | 2.2731987186533368e-05 | -1.97% | -1.93% | 0.98x | ❌ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.2307082985349578e-05 | 2.2559937385625517e-05 | -1.13% | -1.12% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.2273286766351515e-05 | 2.2785432439982846e-05 | -2.30% | -2.25% | 0.98x | ❌ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.230695172136247e-05 | 2.299799076097256e-05 | -3.10% | -3.00% | 0.97x | ❌ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.231155474915008e-05 | 2.2484673473305393e-05 | -0.78% | -0.77% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.2308913484962054e-05 | 2.2643572759081476e-05 | -1.50% | -1.48% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.2289751278827983e-05 | 2.26818135036248e-05 | -1.76% | -1.73% | 0.98x | ❌ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.2271994921190536e-05 | 2.2789529059961376e-05 | -2.32% | -2.27% | 0.98x | ❌ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.2453975844973617e-05 | 2.2690272298762536e-05 | -1.05% | -1.04% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-long alternating]` | 2.2322605120858214e-05 | 2.3046295350492733e-05 | -3.24% | -3.14% | 0.97x | ❌ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.2349992298896276e-05 | 2.264764356474932e-05 | -1.33% | -1.31% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.2276743756099072e-05 | 2.241759696939835e-05 | -0.63% | -0.63% | 0.99x | ❌ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.233584684828216e-05 | 2.295704404043086e-05 | -2.78% | -2.71% | 0.97x | ❌ |
| `hexbytes_getitem_index[5-palindrome]` | 2.2336646521702742e-05 | 2.289837994950541e-05 | -2.51% | -2.45% | 0.98x | ❌ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.2317145856905404e-05 | 2.2407003098409547e-05 | -0.40% | -0.40% | 1.00x | ❌ |
| `hexbytes_getitem_index[5-two patterns]` | 2.2334369969158377e-05 | 2.2440543340233884e-05 | -0.48% | -0.47% | 1.00x | ❌ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.374863216756771e-05 | 5.7809213964656256e-05 | 21.61% | 27.57% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.340552784985293e-05 | 5.740354456696721e-05 | 21.80% | 27.88% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.337892164023733e-05 | 5.728728778984656e-05 | 21.93% | 28.09% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.470200448811629e-05 | 5.830390554753739e-05 | 21.95% | 28.13% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.340726228642662e-05 | 5.756916310574497e-05 | 21.58% | 27.51% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.343291375554471e-05 | 5.8708719217503046e-05 | 20.05% | 25.08% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.06711230365245e-05 | 5.471328709826186e-05 | 22.58% | 29.17% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.347407495293846e-05 | 5.7187741693752375e-05 | 22.17% | 28.48% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.358408107202323e-05 | 5.715976897333442e-05 | 22.32% | 28.73% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.38929014185396e-05 | 5.755681562481612e-05 | 22.11% | 28.38% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.349897764770703e-05 | 5.7167216178808703e-05 | 22.22% | 28.57% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.384559152814326e-05 | 5.770922610809221e-05 | 21.85% | 27.96% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.339202995836049e-05 | 5.738002800655828e-05 | 21.82% | 27.91% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.372377062519129e-05 | 5.767261265609746e-05 | 21.77% | 27.83% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.354692597224359e-05 | 5.711116040123429e-05 | 22.35% | 28.78% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.359032591331704e-05 | 5.7471841646183634e-05 | 21.90% | 28.05% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.35575597164226e-05 | 5.774790052561711e-05 | 21.49% | 27.38% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.354509666030712e-05 | 5.75650776430127e-05 | 21.73% | 27.76% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.33996424874605e-05 | 5.738072855375617e-05 | 21.82% | 27.92% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.337695880609501e-05 | 5.738770540949243e-05 | 21.79% | 27.86% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.59209390665704e-05 | 5.7352862058889905e-05 | 24.46% | 32.38% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.317274129824654e-05 | 5.723684939929612e-05 | 21.78% | 27.84% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.337733456852444e-05 | 5.748387971902763e-05 | 21.66% | 27.65% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.34155114169073e-05 | 5.7509162432376355e-05 | 21.67% | 27.66% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.360118130492038e-05 | 5.738052616858762e-05 | 22.04% | 28.27% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.330490402769185e-05 | 5.792597937903559e-05 | 20.98% | 26.55% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.158539573800317e-05 | 5.540067558176896e-05 | 22.61% | 29.21% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.114394173263066e-05 | 5.507202127111641e-05 | 22.59% | 29.18% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.338081567040408e-05 | 5.751472253242555e-05 | 21.62% | 27.59% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.470578592618475e-05 | 5.851380512588786e-05 | 21.67% | 27.67% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 7.491098567191614e-05 | 5.844493963514109e-05 | 21.98% | 28.17% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 7.418777348841561e-05 | 5.814665102272523e-05 | 21.62% | 27.59% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 7.495611332732904e-05 | 5.805883589223333e-05 | 22.54% | 29.10% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.431102054005903e-05 | 5.860347830151052e-05 | 21.14% | 26.80% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.475222527315043e-05 | 5.804785147682985e-05 | 22.35% | 28.78% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.169408682020091e-05 | 5.5528026342869395e-05 | 22.55% | 29.11% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 7.434745543614255e-05 | 5.876161976124669e-05 | 20.96% | 26.52% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.454104812576493e-05 | 5.813802787997506e-05 | 22.01% | 28.21% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 7.464729393292226e-05 | 5.822470112132676e-05 | 22.00% | 28.21% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.485407717071173e-05 | 5.8331006707248886e-05 | 22.07% | 28.33% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.446970396085312e-05 | 6.028195012243275e-05 | 19.05% | 23.54% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.55350543903822e-05 | 5.7914010425648864e-05 | 23.33% | 30.43% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 7.431035773570641e-05 | 5.78831502165133e-05 | 22.11% | 28.38% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 7.466364049174523e-05 | 5.854534470757601e-05 | 21.59% | 27.53% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.439134059231363e-05 | 5.8166994078943e-05 | 21.81% | 27.89% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.506023795452096e-05 | 5.843360192363066e-05 | 22.15% | 28.45% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.537568084837762e-05 | 5.807369205281281e-05 | 22.95% | 29.79% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.63096788915065e-05 | 5.811144833681366e-05 | 23.85% | 31.32% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.452893985578115e-05 | 5.843325398734307e-05 | 21.60% | 27.55% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.444005615593625e-05 | 5.826850521024715e-05 | 21.72% | 27.75% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.436722295103604e-05 | 5.843093303660263e-05 | 21.43% | 27.27% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.448730285111343e-05 | 5.837522563060135e-05 | 21.63% | 27.60% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.419124441866479e-05 | 5.810204503001034e-05 | 21.69% | 27.69% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 7.447472018337597e-05 | 5.8182149009834426e-05 | 21.88% | 28.00% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.438516457082783e-05 | 5.850062147940353e-05 | 21.35% | 27.15% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.269785536672695e-05 | 5.575804254719624e-05 | 23.30% | 30.38% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.258530108430927e-05 | 5.706669275615306e-05 | 21.38% | 27.19% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.521785991630111e-05 | 5.847856153691601e-05 | 22.25% | 28.62% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.462300820068783e-05 | 5.801290126120616e-05 | 22.26% | 28.63% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.440286354708429e-05 | 5.835539395508153e-05 | 21.57% | 27.50% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.456780595130592e-05 | 5.802260017093397e-05 | 22.19% | 28.52% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.46564246294408e-05 | 5.8243087434444136e-05 | 21.99% | 28.18% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.459795439245015e-05 | 5.839061653042564e-05 | 21.73% | 27.76% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.55523787305171e-05 | 5.815833457956372e-05 | 23.02% | 29.91% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.218639248901923e-05 | 5.6106614167614065e-05 | 22.28% | 28.66% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.441464256472626e-05 | 5.8297421743868826e-05 | 21.66% | 27.65% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 7.473460967527026e-05 | 5.901589690342748e-05 | 21.03% | 26.63% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.551645355245774e-05 | 5.863619954418783e-05 | 22.35% | 28.79% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.447221327582082e-05 | 5.7970274699524265e-05 | 22.16% | 28.47% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.482067944928566e-05 | 5.8714319486891045e-05 | 21.53% | 27.43% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.469806224820684e-05 | 5.848858768021497e-05 | 21.70% | 27.71% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 7.459136424344833e-05 | 5.856597584577056e-05 | 21.48% | 27.36% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.465712522428418e-05 | 5.830512071135839e-05 | 21.90% | 28.05% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.447746640964704e-05 | 5.799771416627645e-05 | 22.13% | 28.41% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.443248000945084e-05 | 5.8030195240524125e-05 | 22.04% | 28.27% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.480361176387839e-05 | 5.7923814288566555e-05 | 22.57% | 29.14% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.441295548177915e-05 | 5.832369904464198e-05 | 21.62% | 27.59% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.450588899343299e-05 | 5.812298319928093e-05 | 21.99% | 28.19% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 7.442671930502381e-05 | 6.011974099881805e-05 | 19.22% | 23.80% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.463386512539747e-05 | 5.817809226801674e-05 | 22.05% | 28.29% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.474479194342418e-05 | 5.802283215223393e-05 | 22.37% | 28.82% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.454575571703553e-05 | 5.8007907111198746e-05 | 22.18% | 28.51% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.5150086557302e-05 | 5.800908091899573e-05 | 22.81% | 29.55% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.463513477562762e-05 | 5.882872865737149e-05 | 21.18% | 26.87% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.30041611383297e-05 | 5.5446658993101635e-05 | 24.05% | 31.67% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.297883940842504e-05 | 5.5844070363511075e-05 | 23.48% | 30.68% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.450631844683864e-05 | 5.863238651577794e-05 | 21.31% | 27.07% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.36036390081389e-05 | 5.7631925958638064e-05 | 21.70% | 27.71% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.468211481930043e-05 | 5.925048334608144e-05 | 20.66% | 26.04% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.464508790631575e-05 | 5.844462067349339e-05 | 21.70% | 27.72% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.522013850961521e-05 | 5.750043465795793e-05 | 23.56% | 30.82% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.365857147304467e-05 | 5.744925579002993e-05 | 22.01% | 28.22% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.438738852325903e-05 | 5.78092799365533e-05 | 22.29% | 28.68% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.086261320498421e-05 | 5.495617240336468e-05 | 22.45% | 28.94% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.326858092722611e-05 | 5.759719118969139e-05 | 21.39% | 27.21% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.367199430183721e-05 | 5.7314651431768785e-05 | 22.20% | 28.54% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.593109635263064e-05 | 5.829961721327195e-05 | 23.22% | 30.24% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 9.278782847691181e-05 | 7.561187654228025e-05 | 18.51% | 22.72% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.138825304904594e-05 | 5.517840699779076e-05 | 22.71% | 29.38% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.36183114112087e-05 | 5.757253578359833e-05 | 21.80% | 27.87% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.32673963760524e-05 | 5.7730584610732367e-05 | 21.21% | 26.91% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.356373207900916e-05 | 5.792874234328822e-05 | 21.25% | 26.99% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.383518101213346e-05 | 5.727635836340451e-05 | 22.43% | 28.91% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.470309898925045e-05 | 5.7714648553752454e-05 | 22.74% | 29.44% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 8.955183438217479e-05 | 7.179202598554693e-05 | 19.83% | 24.74% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.155203266491359e-05 | 5.525429623519443e-05 | 22.78% | 29.50% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 8.917457862252707e-05 | 7.241647934880598e-05 | 18.79% | 23.14% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.459503951340864e-05 | 5.825206454465247e-05 | 21.91% | 28.06% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.339272713963967e-05 | 5.905787627999902e-05 | 19.53% | 24.27% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.364253793022053e-05 | 5.7044116259343317e-05 | 22.54% | 29.10% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.327384427591252e-05 | 5.704959707717984e-05 | 22.14% | 28.44% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.398686105975902e-05 | 5.741081665332514e-05 | 22.40% | 28.87% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.410190171834863e-05 | 5.833166164715097e-05 | 21.28% | 27.04% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.067442001618948e-05 | 5.593135676186204e-05 | 20.86% | 26.36% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.075833646862988e-05 | 5.525071740779758e-05 | 21.92% | 28.07% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.391855787566746e-05 | 5.7418681581785e-05 | 22.32% | 28.74% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.232321427034729e-05 | 5.6099472606351175e-05 | 22.43% | 28.92% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.367778193800708e-05 | 5.697512814615465e-05 | 22.67% | 29.32% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.358978187339798e-05 | 5.7576710981424314e-05 | 21.76% | 27.81% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.379003115452503e-05 | 5.6677308015423266e-05 | 23.19% | 30.19% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.231717073704818e-05 | 5.635452344022276e-05 | 22.07% | 28.33% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.228198048172461e-05 | 5.8394795215499736e-05 | 19.21% | 23.78% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 6.955817498061367e-05 | 5.366724171940549e-05 | 22.85% | 29.61% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.239473851701281e-05 | 5.6570535173704664e-05 | 21.86% | 27.97% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.254889245523516e-05 | 5.638465551808115e-05 | 22.28% | 28.67% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.301156300462972e-05 | 5.7088689645379005e-05 | 21.81% | 27.89% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.193543219598045e-05 | 7.433103268612044e-05 | 19.15% | 23.68% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.242737114446964e-05 | 5.6036060796765805e-05 | 22.63% | 29.25% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.233683918842605e-05 | 5.630764894838624e-05 | 22.16% | 28.47% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.235629608143274e-05 | 5.599269286956514e-05 | 22.62% | 29.22% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.237562215633658e-05 | 5.631908077001282e-05 | 22.19% | 28.51% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.270555597873996e-05 | 5.6283348209567845e-05 | 22.59% | 29.18% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.243943913605516e-05 | 5.6100365026951226e-05 | 22.56% | 29.12% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 8.813990202830248e-05 | 6.692641754652218e-05 | 24.07% | 31.70% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.259451728866431e-05 | 5.624786315968016e-05 | 22.52% | 29.06% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 8.840788543784793e-05 | 7.137538820799944e-05 | 19.27% | 23.86% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.304034761539931e-05 | 5.7353836169694545e-05 | 21.48% | 27.35% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.241406096921728e-05 | 5.5969612379372836e-05 | 22.71% | 29.38% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.275765080536073e-05 | 5.626744808662449e-05 | 22.66% | 29.31% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.285267044162497e-05 | 5.621824374994416e-05 | 22.83% | 29.59% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.264883367738415e-05 | 5.585276061510958e-05 | 23.12% | 30.07% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.333953683980892e-05 | 5.752936523390376e-05 | 21.56% | 27.48% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.002086188810509e-05 | 5.42234867469858e-05 | 22.56% | 29.13% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.011319197937104e-05 | 5.3971015312338564e-05 | 23.02% | 29.91% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.395658617573078e-05 | 5.624720247016011e-05 | 23.95% | 31.48% | 1.31x | ✅ |
| `hexbytes_new['']` | 6.151388148761176e-05 | 3.405719428435129e-05 | 44.63% | 80.62% | 1.81x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.067574750111046e-05 | 4.573970864023793e-05 | 43.30% | 76.38% | 1.76x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 8.09101410386961e-05 | 4.58001685569157e-05 | 43.39% | 76.66% | 1.77x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 7.800024830932785e-05 | 4.2670549316163076e-05 | 45.29% | 82.80% | 1.83x | ✅ |
| `hexbytes_new['0x']` | 6.935683708874979e-05 | 3.43700719797794e-05 | 50.44% | 101.79% | 2.02x | ✅ |
| `hexbytes_new['0x1234']` | 7.391018373871304e-05 | 4.020027665744939e-05 | 45.61% | 83.85% | 1.84x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 7.436288930304471e-05 | 4.016789456583424e-05 | 45.98% | 85.13% | 1.85x | ✅ |
| `hexbytes_new['0xabcdef']` | 7.450495368687378e-05 | 4.023926438247942e-05 | 45.99% | 85.15% | 1.85x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 7.424072962867914e-05 | 4.021516717779522e-05 | 45.83% | 84.61% | 1.85x | ✅ |
| `hexbytes_new['abc']` | 7.066158996438737e-05 | 4.215746576387003e-05 | 40.34% | 67.61% | 1.68x | ✅ |
| `hexbytes_new['deadbeef']` | 6.618629873463757e-05 | 3.841262585729833e-05 | 41.96% | 72.30% | 1.72x | ✅ |
| `hexbytes_new[0-9]` | 3.953639657240586e-05 | 2.465835476022917e-05 | 37.63% | 60.34% | 1.60x | ✅ |
| `hexbytes_new[0]` | 0.00010546951602565152 | 5.2108916248213805e-05 | 50.59% | 102.40% | 2.02x | ✅ |
| `hexbytes_new[123456]` | 0.0001088886806755748 | 5.625962930670159e-05 | 48.33% | 93.55% | 1.94x | ✅ |
| `hexbytes_new[2**16]` | 0.00011110338483731915 | 5.6312743646140644e-05 | 49.32% | 97.30% | 1.97x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00011574297148269556 | 6.300696015611291e-05 | 45.56% | 83.70% | 1.84x | ✅ |
| `hexbytes_new[2**32]` | 0.00011237647223508481 | 5.833688818235852e-05 | 48.09% | 92.63% | 1.93x | ✅ |
| `hexbytes_new[2**64]` | 0.00011379997299463335 | 6.163386443567095e-05 | 45.84% | 84.64% | 1.85x | ✅ |
| `hexbytes_new[2**8]` | 0.00010777364353841647 | 5.439283616621913e-05 | 49.53% | 98.14% | 1.98x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.0404980904725034e-05 | 2.560518665208227e-05 | 36.63% | 57.80% | 1.58x | ✅ |
| `hexbytes_new[False]` | 5.419951680296983e-05 | 2.533599445165949e-05 | 53.25% | 113.92% | 2.14x | ✅ |
| `hexbytes_new[True]` | 5.420889982500676e-05 | 2.530977621493785e-05 | 53.31% | 114.18% | 2.14x | ✅ |
| `hexbytes_new[all byte values]` | 4.0298626709448103e-05 | 2.558194878781745e-05 | 36.52% | 57.53% | 1.58x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 3.975288606002091e-05 | 2.486979455174488e-05 | 37.44% | 59.84% | 1.60x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 3.9728446839887225e-05 | 2.4930404950960646e-05 | 37.25% | 59.36% | 1.59x | ✅ |
| `hexbytes_new[ascii sentence]` | 3.979826817180834e-05 | 2.4766847019758836e-05 | 37.77% | 60.69% | 1.61x | ✅ |
| `hexbytes_new[b'']` | 3.907544410471839e-05 | 2.441372744542167e-05 | 37.52% | 60.06% | 1.60x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 3.953615436359122e-05 | 2.481708390755542e-05 | 37.23% | 59.31% | 1.59x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 3.953509031912472e-05 | 2.4770038743716458e-05 | 37.35% | 59.61% | 1.60x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.0084278817114346e-05 | 2.4962581130042117e-05 | 37.72% | 60.58% | 1.61x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 4.943722758485715e-05 | 3.3783878138194374e-05 | 31.66% | 46.33% | 1.46x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 3.958191163590561e-05 | 2.4756578605028454e-05 | 37.45% | 59.88% | 1.60x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 3.965756477858898e-05 | 2.4727079489349357e-05 | 37.65% | 60.38% | 1.60x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 3.9502428226977216e-05 | 2.4657293445825047e-05 | 37.58% | 60.21% | 1.60x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 3.9683455142998295e-05 | 2.4646944372408437e-05 | 37.89% | 61.01% | 1.61x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 3.950048427784251e-05 | 2.4728962602383607e-05 | 37.40% | 59.73% | 1.60x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 3.9720580905511864e-05 | 2.5375478420589705e-05 | 36.12% | 56.53% | 1.57x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.681313064347233e-05 | 3.148683738950507e-05 | 32.74% | 48.68% | 1.49x | ✅ |
| `hexbytes_new[b'abc']` | 3.969209479240327e-05 | 2.476382583514776e-05 | 37.61% | 60.28% | 1.60x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.190510205455708e-05 | 3.442044660453597e-05 | 44.40% | 79.85% | 1.80x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.295807823108694e-05 | 3.555326139876884e-05 | 43.53% | 77.08% | 1.77x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.307719066514382e-05 | 3.558225463860701e-05 | 43.59% | 77.27% | 1.77x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.205132710037118e-05 | 3.460228989451446e-05 | 44.24% | 79.33% | 1.79x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.211357108126514e-05 | 3.458975731339937e-05 | 44.31% | 79.57% | 1.80x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.194016809421623e-05 | 3.452709308743249e-05 | 44.26% | 79.40% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 5.973966806671866e-05 | 3.2457742970423477e-05 | 45.67% | 84.05% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.193546918663324e-05 | 3.460232198359342e-05 | 44.13% | 78.99% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.193495939702582e-05 | 3.467512193897594e-05 | 44.01% | 78.61% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.228570421430485e-05 | 3.468985398015568e-05 | 44.31% | 79.55% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 7.869469080995763e-05 | 4.980747307159619e-05 | 36.71% | 58.00% | 1.58x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.191433478920144e-05 | 3.4519381645234654e-05 | 44.25% | 79.36% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.197371466004925e-05 | 3.453077504016004e-05 | 44.28% | 79.47% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.184524698872777e-05 | 3.4445872081005323e-05 | 44.30% | 79.54% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.184473638201926e-05 | 3.445153429351875e-05 | 44.29% | 79.51% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.1863392749506e-05 | 3.4650129627475456e-05 | 43.99% | 78.54% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.208242249138597e-05 | 3.4545277962249716e-05 | 44.36% | 79.71% | 1.80x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 7.599973595738487e-05 | 4.558635653134194e-05 | 40.02% | 66.72% | 1.67x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.200939689109316e-05 | 3.46193805789965e-05 | 44.17% | 79.12% | 1.79x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 7.547621053511839e-05 | 4.566041928957281e-05 | 39.50% | 65.30% | 1.65x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.241486922384e-05 | 3.499274651196552e-05 | 43.94% | 78.37% | 1.78x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.18930458715608e-05 | 3.4461945576190035e-05 | 44.32% | 79.60% | 1.80x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.1893204377361e-05 | 3.467713990721475e-05 | 43.97% | 78.48% | 1.78x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.198154818737427e-05 | 3.4588320071113156e-05 | 44.20% | 79.20% | 1.79x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.186725653932607e-05 | 3.463447423006103e-05 | 44.02% | 78.63% | 1.79x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.221271366514076e-05 | 3.4727509498862847e-05 | 44.18% | 79.15% | 1.79x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.202008923570779e-05 | 3.4577524535556454e-05 | 44.25% | 79.37% | 1.79x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.200655521765912e-05 | 3.464170386026206e-05 | 44.13% | 78.99% | 1.79x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.206895654524589e-05 | 3.465080532933574e-05 | 44.17% | 79.13% | 1.79x | ✅ |
| `hexbytes_new[long alternating]` | 4.68158090416877e-05 | 3.1484155724399384e-05 | 32.75% | 48.70% | 1.49x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 7.577498167555317e-05 | 3.941898631802798e-05 | 47.98% | 92.23% | 1.92x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 7.720935550193515e-05 | 4.0133712498421004e-05 | 48.02% | 92.38% | 1.92x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 7.715780691885294e-05 | 4.01237546574039e-05 | 48.00% | 92.30% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 7.605679729321164e-05 | 3.962873831337581e-05 | 47.90% | 91.92% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 7.60313585597171e-05 | 3.962536707961453e-05 | 47.88% | 91.88% | 1.92x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 7.596160849036228e-05 | 3.9352675309753354e-05 | 48.19% | 93.03% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.410353199542392e-05 | 3.703575924783994e-05 | 50.02% | 100.09% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 7.592464217022847e-05 | 3.915280487368096e-05 | 48.43% | 93.92% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 7.602801995993732e-05 | 3.9550746165500554e-05 | 47.98% | 92.23% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 7.613178211620583e-05 | 3.965521812212537e-05 | 47.91% | 91.98% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 9.345811442437704e-05 | 5.49805993735032e-05 | 41.17% | 69.98% | 1.70x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 7.787433826303724e-05 | 3.9509465086431936e-05 | 49.27% | 97.10% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.595320354465218e-05 | 3.960273224653923e-05 | 47.86% | 91.79% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 7.582708643349391e-05 | 3.9359187598699156e-05 | 48.09% | 92.65% | 1.93x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 7.582728184165677e-05 | 3.947393013715735e-05 | 47.94% | 92.09% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 7.592566775652568e-05 | 3.949657525197737e-05 | 47.98% | 92.23% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 7.605599650603335e-05 | 3.960573073773726e-05 | 47.93% | 92.03% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 8.987613375595129e-05 | 5.053955978115852e-05 | 43.77% | 77.83% | 1.78x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 7.594874530890068e-05 | 4.083328551615205e-05 | 46.24% | 86.00% | 1.86x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.030987070408726e-05 | 5.173376033613384e-05 | 42.72% | 74.57% | 1.75x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 7.666241966065122e-05 | 3.9730365485964654e-05 | 48.17% | 92.96% | 1.93x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 7.59530230071086e-05 | 3.9379279778865965e-05 | 48.15% | 92.88% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 7.593518152515898e-05 | 3.9413276446077696e-05 | 48.10% | 92.66% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 7.609617561260302e-05 | 3.952648300730709e-05 | 48.06% | 92.52% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 7.613714335788992e-05 | 3.943433028484602e-05 | 48.21% | 93.07% | 1.93x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 7.638375220354236e-05 | 4.000274248339016e-05 | 47.63% | 90.95% | 1.91x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 7.616932289874708e-05 | 3.9519025360363026e-05 | 48.12% | 92.74% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 7.60906562294409e-05 | 3.949987378711857e-05 | 48.09% | 92.64% | 1.93x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 7.608374007346323e-05 | 3.9596581585104916e-05 | 47.96% | 92.15% | 1.92x | ✅ |
| `hexbytes_new[mixed pattern]` | 3.983226585577028e-05 | 2.4998115930798924e-05 | 37.24% | 59.34% | 1.59x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 3.951472350015486e-05 | 2.465948590812061e-05 | 37.59% | 60.24% | 1.60x | ✅ |
| `hexbytes_new[palindrome ascii]` | 3.955581551700289e-05 | 2.4665689358218246e-05 | 37.64% | 60.37% | 1.60x | ✅ |
| `hexbytes_new[palindrome numeric]` | 3.956731785727268e-05 | 2.4784905628511428e-05 | 37.36% | 59.64% | 1.60x | ✅ |
| `hexbytes_new[palindrome]` | 3.956894321667797e-05 | 2.4719698198060936e-05 | 37.53% | 60.07% | 1.60x | ✅ |
| `hexbytes_new[repeated 0-9]` | 3.9916830677977984e-05 | 2.4937215084847467e-05 | 37.53% | 60.07% | 1.60x | ✅ |
| `hexbytes_new[single 0xff]` | 3.902892514175632e-05 | 2.436628027541689e-05 | 37.57% | 60.18% | 1.60x | ✅ |
| `hexbytes_new[single null byte]` | 3.9885452256720384e-05 | 2.4381541671523075e-05 | 38.87% | 63.59% | 1.64x | ✅ |
| `hexbytes_new[two patterns]` | 3.9695570383506674e-05 | 2.4882487132027058e-05 | 37.32% | 59.53% | 1.60x | ✅ |
| `hexbytes_repr[0-9]` | 2.8893307194046347e-05 | 1.3440964950172755e-05 | 53.48% | 114.96% | 2.15x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011268003387211198 | 3.7857753507900105e-05 | 66.40% | 197.64% | 2.98x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011272138892797578 | 3.785078839727595e-05 | 66.42% | 197.80% | 2.98x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.646147694611952e-05 | 1.831059940231798e-05 | 60.59% | 153.74% | 2.54x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.6451069935960106e-05 | 1.8285094396308355e-05 | 60.64% | 154.04% | 2.54x | ✅ |
| `hexbytes_repr[ascii sentence]` | 3.9656181982115224e-05 | 1.626715643559199e-05 | 58.98% | 143.78% | 2.44x | ✅ |
| `hexbytes_repr[b'']` | 2.057825111244111e-05 | 1.0522688838948898e-05 | 48.86% | 95.56% | 1.96x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.613952418292368e-05 | 1.5241273312360327e-05 | 57.83% | 137.12% | 2.37x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.6758289967134326e-05 | 1.2928352533715652e-05 | 51.68% | 106.97% | 2.07x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 5.90675791844609e-05 | 2.1510693409872235e-05 | 63.58% | 174.60% | 2.75x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0006911254290874435 | 0.00019952685133687036 | 71.13% | 246.38% | 3.46x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.6424568134294638e-05 | 1.281901308415092e-05 | 51.49% | 106.14% | 2.06x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.7098225523600673e-05 | 1.3018940697081364e-05 | 51.96% | 108.14% | 2.08x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.8226106236877674e-05 | 1.3213586477263384e-05 | 53.19% | 113.61% | 2.14x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8211728934704177e-05 | 1.321427319465807e-05 | 53.16% | 113.49% | 2.13x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.673784098481373e-05 | 1.2929514044773129e-05 | 51.64% | 106.80% | 2.07x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.6435823189468805e-05 | 1.8287492252254752e-05 | 60.62% | 153.92% | 2.54x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00036106676249289586 | 0.00010599109240132414 | 70.65% | 240.66% | 3.41x | ✅ |
| `hexbytes_repr[b'abc']` | 2.6448375124385593e-05 | 1.274235499074844e-05 | 51.82% | 107.56% | 2.08x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003653027653736376 | 0.000110395079149903 | 69.78% | 230.90% | 3.31x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.189764939650564e-05 | 3.10839873730055e-05 | 66.18% | 195.64% | 2.96x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.8908056158201426e-05 | 1.3437495588150243e-05 | 53.52% | 115.13% | 2.15x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7895769802241137e-05 | 1.3177549922832587e-05 | 52.76% | 111.69% | 2.12x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.7106187650543464e-05 | 1.3034727554073966e-05 | 51.91% | 107.95% | 2.08x | ✅ |
| `hexbytes_repr[palindrome]` | 3.203405899447268e-05 | 1.4184204623323797e-05 | 55.72% | 125.84% | 2.26x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 5.9045400588565216e-05 | 2.151868674432716e-05 | 63.56% | 174.39% | 2.74x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.565104841987343e-05 | 1.2430687153538385e-05 | 51.54% | 106.35% | 2.06x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5650040207142147e-05 | 1.249206244692404e-05 | 51.30% | 105.33% | 2.05x | ✅ |
| `hexbytes_repr[two patterns]` | 4.6432513515270323e-05 | 1.8318018989079907e-05 | 60.55% | 153.48% | 2.53x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.545880736352355e-05 | 1.259644853529329e-05 | 18.52% | 22.72% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 3.920208224268527e-05 | 3.70081143946423e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 3.920627495904302e-05 | 3.684667040940176e-05 | 6.02% | 6.40% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 1.9884592028452654e-05 | 1.725602378340093e-05 | 13.22% | 15.23% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 1.989844853492143e-05 | 1.7244035213798406e-05 | 13.34% | 15.39% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8288247810015636e-05 | 1.5408500620921178e-05 | 15.75% | 18.69% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 9.27755462099474e-06 | 9.72285228917376e-06 | -4.80% | -4.58% | 0.95x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7165257997607174e-05 | 1.4378482341441194e-05 | 16.23% | 19.38% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.4962809428496385e-05 | 1.212765858096997e-05 | 18.95% | 23.38% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.322993313979767e-05 | 2.0589950685373065e-05 | 11.36% | 12.82% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.0001943787631165816 | 0.00019937798874643633 | -2.57% | -2.51% | 0.97x | ❌ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4896263698486391e-05 | 1.2018876617491053e-05 | 19.32% | 23.94% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5047243057340288e-05 | 1.2225578492995957e-05 | 18.75% | 23.08% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.53214550459441e-05 | 1.2444932453042883e-05 | 18.77% | 23.11% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.53413161501054e-05 | 1.2436749300391132e-05 | 18.93% | 23.35% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.4966183071791508e-05 | 1.2164885776661242e-05 | 18.72% | 23.03% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 1.987214632078643e-05 | 1.7229044321657134e-05 | 13.30% | 15.34% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00010884053307909726 | 0.00010841943184717943 | 0.39% | 0.39% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4824461441691004e-05 | 1.1870797576150603e-05 | 19.92% | 24.88% | 1.25x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00010997683621820936 | 0.0001103036896230665 | -0.30% | -0.30% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.290660178636591e-05 | 3.0661377068840524e-05 | 6.82% | 7.32% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5486933807376863e-05 | 1.2654211714254837e-05 | 18.29% | 22.39% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5117213573443184e-05 | 1.2367711577416374e-05 | 18.19% | 22.23% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5018621816267914e-05 | 1.2186363860550466e-05 | 18.86% | 23.24% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6169844116478844e-05 | 1.3326404047572326e-05 | 17.58% | 21.34% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.3230917730187796e-05 | 2.0635282411814452e-05 | 11.17% | 12.58% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4537448765477634e-05 | 1.1651738557179446e-05 | 19.85% | 24.77% | 1.25x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4580023891351268e-05 | 1.1594594256802586e-05 | 20.48% | 25.75% | 1.26x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 1.9868411151863956e-05 | 1.721504013340864e-05 | 13.35% | 15.41% | 1.15x | ✅ |
