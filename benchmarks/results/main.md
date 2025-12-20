#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.40812484259437e-05 | 2.3117201623717307e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4057289683483222e-05 | 2.310803674495365e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4060980187727943e-05 | 2.3105351921008766e-05 | 3.97% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.3937067313625175e-05 | 2.3161923102708368e-05 | 3.24% | 3.35% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.401883760478259e-05 | 2.3141858086739235e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.407570343743384e-05 | 2.3101159036275456e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.3937277235040458e-05 | 2.3046091421871842e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.392783054588038e-05 | 2.3115767935781983e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.3933305565606868e-05 | 2.3120334000208535e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.404150376559192e-05 | 2.3115019020070232e-05 | 3.85% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.3974967356989774e-05 | 2.3145416968874355e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3949726383007418e-05 | 2.3118996106947067e-05 | 3.47% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.3923716137468927e-05 | 2.3119987026199834e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.3930901604537993e-05 | 2.3142166027972315e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.393985719044781e-05 | 2.3110527144414664e-05 | 3.46% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.3952324483015653e-05 | 2.312829137213875e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.39328397667601e-05 | 2.3130844234332826e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.405286968748188e-05 | 2.312055564334508e-05 | 3.88% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4026848308255235e-05 | 2.313993306182067e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4075735744045348e-05 | 2.3114439161743886e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.409200120576112e-05 | 2.3114421975888364e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.406236202722405e-05 | 2.3106567619749287e-05 | 3.97% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.405010873285161e-05 | 2.3119445926160723e-05 | 3.87% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.3933814280880563e-05 | 2.3126233256886484e-05 | 3.37% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4051223450911803e-05 | 2.314171057600865e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4073317925162723e-05 | 2.3116283208195834e-05 | 3.98% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.323986013705699e-05 | 2.232913352509134e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3228067337690256e-05 | 2.2351256633734534e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3241201983285688e-05 | 2.232406233824343e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3257548019378837e-05 | 2.2309160540701934e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3298799878272774e-05 | 2.2377278658464114e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.334016111842837e-05 | 2.2409212237158863e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3234411574751437e-05 | 2.23187299089432e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3250594491634203e-05 | 2.231756139440155e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3243353197136432e-05 | 2.239589272710156e-05 | 3.65% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.3299136399461738e-05 | 2.244224572494887e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.324886147935314e-05 | 2.239336792835247e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.329639151256787e-05 | 2.2391959240764988e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.326103348897921e-05 | 2.242073579393342e-05 | 3.61% | 3.75% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3272772731038092e-05 | 2.240645114092601e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3352137364364664e-05 | 2.2395688892929336e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3321724276779223e-05 | 2.2404750753332227e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3277322945715628e-05 | 2.2404083149546348e-05 | 3.75% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.327529836307397e-05 | 2.245379398139942e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3242058476361904e-05 | 2.23508304762147e-05 | 3.83% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3260736817904457e-05 | 2.243384988270285e-05 | 3.55% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3226140235865293e-05 | 2.237477974637205e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3323557558494074e-05 | 2.2436363322184096e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.326790511417665e-05 | 2.2406927330604787e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3276456138860836e-05 | 2.240180429662136e-05 | 3.76% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3243349054248593e-05 | 2.2392555702114677e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3257872541841037e-05 | 2.2405393918695656e-05 | 3.67% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3244053563242396e-05 | 2.2350745997442667e-05 | 3.84% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3246473176623894e-05 | 2.23348830580978e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.3304801342088568e-05 | 2.2430932341392055e-05 | 3.75% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3252139270038685e-05 | 2.240672553951922e-05 | 3.64% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.32496398617824e-05 | 2.241712087772049e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3258920806430003e-05 | 2.240021015666905e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3250565596139737e-05 | 2.2389661792924032e-05 | 3.70% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3365273377043646e-05 | 2.2430787753204868e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3237064567660654e-05 | 2.2310349474763122e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.325524513378024e-05 | 2.2392656957546684e-05 | 3.71% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3312353566589966e-05 | 2.2405386780175125e-05 | 3.89% | 4.05% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3229406636742305e-05 | 2.245455757214261e-05 | 3.34% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3242419818290868e-05 | 2.240759274739407e-05 | 3.59% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3272039189083616e-05 | 2.240231541339075e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3250744900432284e-05 | 2.243521884216172e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3265432352074378e-05 | 2.2396272856903464e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.326096737481622e-05 | 2.241163128509595e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.3255633238496778e-05 | 2.238476013003e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3261697772549416e-05 | 2.2403535766084488e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3243010781816982e-05 | 2.2404532543271408e-05 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.324913772703221e-05 | 2.243144775886185e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3378109591807402e-05 | 2.2419868111063358e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3247149091782807e-05 | 2.2404774211348888e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3266363477688564e-05 | 2.244299272906826e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3328127662627703e-05 | 2.2492724042619887e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3283287326568568e-05 | 2.242415558483732e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3225594046295626e-05 | 2.2410306832133534e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3261313168541412e-05 | 2.2391449005089138e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.323275824660807e-05 | 2.24763755193436e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.3234339868923137e-05 | 2.2461613469364525e-05 | 3.33% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.326560804021915e-05 | 2.2438475360378113e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3241909932495912e-05 | 2.232231197459911e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3262195730990726e-05 | 2.2398191308103136e-05 | 3.71% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3239652127690724e-05 | 2.240577247925378e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3253652995695997e-05 | 2.2317103147333455e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3228433873466053e-05 | 2.2322491109651292e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3243818613668786e-05 | 2.239189458920956e-05 | 3.67% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3249547984871598e-05 | 2.2441391770750922e-05 | 3.48% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3259265798163775e-05 | 2.2401808958542715e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.326366310005166e-05 | 2.2414345405396734e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.324621855789744e-05 | 2.2413868993149415e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3238610639743753e-05 | 2.2417826494029238e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3262517444211836e-05 | 2.239399850401215e-05 | 3.73% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.325952571575974e-05 | 2.2387549057440573e-05 | 3.75% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.324404689304645e-05 | 2.2401882603083807e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.326096520600649e-05 | 2.240626402419381e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3250751688784838e-05 | 2.2358444130904168e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3252496063277017e-05 | 2.2412071626502745e-05 | 3.61% | 3.75% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3249211844286847e-05 | 2.244933987446147e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3254442029247008e-05 | 2.247609224161802e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3253172230106854e-05 | 2.246636222056342e-05 | 3.38% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3270868588314215e-05 | 2.2408710096132827e-05 | 3.70% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3242107649926776e-05 | 2.2510467050473132e-05 | 3.15% | 3.25% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3255103644715982e-05 | 2.2339996127136923e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.323424838700001e-05 | 2.2423948610682524e-05 | 3.49% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.3257406309202877e-05 | 2.24044033421598e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3245975680047977e-05 | 2.2421224572847637e-05 | 3.55% | 3.68% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3269295941157604e-05 | 2.238289815977382e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.325005134337145e-05 | 2.2395890246079215e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.324913992061048e-05 | 2.240158415346664e-05 | 3.65% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3244045189865965e-05 | 2.2368581117142277e-05 | 3.77% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3251161445521297e-05 | 2.2407058794733633e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.325555133343364e-05 | 2.2395847691030443e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.323721708917718e-05 | 2.2409698760785475e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3256627219814636e-05 | 2.2411445798034358e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3268339342289452e-05 | 2.2385518181872706e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3277142309204057e-05 | 2.2394118781264277e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.323029869090966e-05 | 2.2410261033925687e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3249475618035343e-05 | 2.2394162604923747e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3272428741489455e-05 | 2.2401574160965037e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3253433854645497e-05 | 2.2401676697257777e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.336561418029712e-05 | 2.2407717483485216e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3249757558003867e-05 | 2.2396851476163527e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3236631160901466e-05 | 2.2398164669132176e-05 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3232081506072735e-05 | 2.2397402673832066e-05 | 3.59% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3262153470365084e-05 | 2.2399440402511734e-05 | 3.71% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3304002883983897e-05 | 2.2409992196311878e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.32387982446635e-05 | 2.2391952278213207e-05 | 3.64% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.345538250330368e-05 | 2.238917949813866e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3381242116405516e-05 | 2.231403404276121e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3364161431048208e-05 | 2.238480499368311e-05 | 4.19% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3252758807141162e-05 | 2.23240387668139e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3257925872775398e-05 | 2.238292718514371e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3377129721160703e-05 | 2.2383177410952735e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.3290525511772514e-05 | 2.2317064137615595e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3263803567050727e-05 | 2.238688371289294e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3392611587365338e-05 | 2.2409450783106076e-05 | 4.20% | 4.39% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3332133908939546e-05 | 2.240752248124831e-05 | 3.96% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3241431964984852e-05 | 2.239381007809423e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3290890373806316e-05 | 2.2408607470362654e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3233390555285936e-05 | 2.240325624968196e-05 | 3.57% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.324020939855378e-05 | 2.240927015807629e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3418866531005775e-05 | 2.2319336821049897e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.339716772588923e-05 | 2.2411911868561077e-05 | 4.21% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3451263863499216e-05 | 2.239566660745948e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3440260343038552e-05 | 2.2388856768803388e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3423486833584567e-05 | 2.2390516041082506e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3261949870442193e-05 | 2.2413309421948533e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.334041952574864e-05 | 2.23951964276154e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3346129782971675e-05 | 2.232313059503054e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3393558817931823e-05 | 2.2385816332274978e-05 | 4.31% | 4.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3405849962521488e-05 | 2.2378637708989417e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3348837783044745e-05 | 2.2401196956339074e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3240860446533283e-05 | 2.238552526624889e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3259211295622348e-05 | 2.245029244284951e-05 | 3.48% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.332765929367248e-05 | 2.2412942212617655e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.322792860224269e-05 | 2.231091031977545e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3256280064548872e-05 | 2.2391264070173226e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3389936736283176e-05 | 2.239042374032473e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.333104493875877e-05 | 2.2389659023688796e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3256437141563872e-05 | 2.240103579208814e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.3224565855725056e-05 | 2.2456048750614466e-05 | 3.31% | 3.42% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.322676636543829e-05 | 2.239344040590927e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3380923510384796e-05 | 2.2424455586213592e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.337187003239468e-05 | 2.239240130084349e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3412932755145605e-05 | 2.239745098056512e-05 | 4.34% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3355987913688632e-05 | 2.2411509694042597e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3247990992572802e-05 | 2.23824634366621e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.337793213470359e-05 | 2.2392628865716878e-05 | 4.21% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3325749789170673e-05 | 2.238189356496613e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.101690914548265e-05 | 5.577117418399346e-05 | 21.47% | 27.34% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.108322107368794e-05 | 5.566038300678696e-05 | 21.70% | 27.71% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.10936740843352e-05 | 5.5679682034869e-05 | 21.68% | 27.68% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.100572586922902e-05 | 5.5598937992111214e-05 | 21.70% | 27.71% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.101806239761633e-05 | 5.563165641370999e-05 | 21.67% | 27.66% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.107318892554162e-05 | 5.5552567003443064e-05 | 21.84% | 27.94% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 6.872093617348054e-05 | 5.346708411927789e-05 | 22.20% | 28.53% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.099595658062894e-05 | 5.734419335535435e-05 | 19.23% | 23.81% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.105715623557421e-05 | 5.592100739762061e-05 | 21.30% | 27.07% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.102183822921475e-05 | 5.574727916424333e-05 | 21.51% | 27.40% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.099259319745e-05 | 5.570380580886231e-05 | 21.54% | 27.45% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.227407269739873e-05 | 5.6356746445293035e-05 | 22.02% | 28.24% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.101087803416533e-05 | 5.586200513384671e-05 | 21.33% | 27.12% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.099954208266604e-05 | 5.557293912713736e-05 | 21.73% | 27.76% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.111987751570975e-05 | 5.5751207346467045e-05 | 21.61% | 27.57% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.102511634802941e-05 | 5.568066118446329e-05 | 21.60% | 27.56% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.114300706523115e-05 | 5.5570756361605764e-05 | 21.89% | 28.02% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.08758794614761e-05 | 5.57501985642411e-05 | 21.34% | 27.13% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.121047215201333e-05 | 5.56631178843758e-05 | 21.83% | 27.93% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.103997081345347e-05 | 5.579765868936566e-05 | 21.46% | 27.32% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.103953775752572e-05 | 5.5611225846379094e-05 | 21.72% | 27.74% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.110007426517172e-05 | 5.5552581651546886e-05 | 21.87% | 27.99% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.114933783973685e-05 | 5.5675852363675055e-05 | 21.75% | 27.79% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.10423416314516e-05 | 5.564279751819998e-05 | 21.68% | 27.68% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.111226799379974e-05 | 5.600559806812544e-05 | 21.24% | 26.97% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.108651342560915e-05 | 5.5572063418437774e-05 | 21.82% | 27.92% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 6.881053559340151e-05 | 5.522025486486256e-05 | 19.75% | 24.61% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 6.882734976108968e-05 | 5.369688384450209e-05 | 21.98% | 28.18% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.10411678318334e-05 | 5.555967925361153e-05 | 21.79% | 27.86% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.212582308122498e-05 | 5.65922974783617e-05 | 21.54% | 27.45% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 7.218024954389861e-05 | 5.670763971101227e-05 | 21.44% | 27.28% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 7.210963954064478e-05 | 5.681293670364444e-05 | 21.21% | 26.92% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 7.207614807011771e-05 | 5.68264191053478e-05 | 21.16% | 26.84% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.234229893303283e-05 | 5.687127213744031e-05 | 21.39% | 27.20% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.210998677344328e-05 | 5.66364460186323e-05 | 21.46% | 27.32% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.190753537600893e-05 | 5.440628567209712e-05 | 24.34% | 32.17% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 7.203913803701244e-05 | 5.6925580167857645e-05 | 20.98% | 26.55% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.205713873968702e-05 | 5.650967421766301e-05 | 21.58% | 27.51% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 7.206590440586283e-05 | 5.6695267109844034e-05 | 21.33% | 27.11% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.215311357315496e-05 | 5.660172402027814e-05 | 21.55% | 27.48% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.224790534630255e-05 | 5.675743346504448e-05 | 21.44% | 27.29% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.206646624821108e-05 | 5.6749043849470165e-05 | 21.25% | 26.99% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 7.204947855568826e-05 | 5.649878770498867e-05 | 21.58% | 27.52% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 7.202453808101718e-05 | 5.673991261473526e-05 | 21.22% | 26.94% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.206670105218338e-05 | 5.650891139750624e-05 | 21.59% | 27.53% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.20764466652454e-05 | 5.659750687559181e-05 | 21.48% | 27.35% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.204923496132363e-05 | 5.673450474822528e-05 | 21.26% | 26.99% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.213758087390462e-05 | 5.676127116077021e-05 | 21.32% | 27.09% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.212253514546677e-05 | 5.6613705135336997e-05 | 21.50% | 27.39% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.423447106683968e-05 | 5.687934482356287e-05 | 23.38% | 30.51% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.216882016312983e-05 | 5.660621300802986e-05 | 21.56% | 27.49% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.207438186450536e-05 | 5.6868285062317384e-05 | 21.10% | 26.74% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.354646239016819e-05 | 5.68917027030892e-05 | 22.65% | 29.27% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 7.21107485431639e-05 | 5.665927443888376e-05 | 21.43% | 27.27% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.214578789022386e-05 | 5.654363866134762e-05 | 21.63% | 27.59% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 6.975330937685334e-05 | 5.4689396805933785e-05 | 21.60% | 27.54% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 6.977868345726114e-05 | 5.461444052481806e-05 | 21.73% | 27.77% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.20984019451231e-05 | 5.660767679784632e-05 | 21.49% | 27.37% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.207418429413199e-05 | 5.689737665181147e-05 | 21.06% | 26.67% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.212304962816169e-05 | 5.6705930745698185e-05 | 21.38% | 27.19% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.214759243166468e-05 | 5.677736032862682e-05 | 21.30% | 27.07% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.221659306991459e-05 | 5.6648801751199506e-05 | 21.56% | 27.48% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.207018154125193e-05 | 5.657476020110784e-05 | 21.50% | 27.39% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.209935604488857e-05 | 5.909682458535927e-05 | 18.03% | 22.00% | 1.22x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 6.961564986089779e-05 | 5.4343034740172136e-05 | 21.94% | 28.10% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.220510768682481e-05 | 5.6985880136010985e-05 | 21.08% | 26.71% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 7.20624403586942e-05 | 5.669624579547414e-05 | 21.32% | 27.10% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.20862765611947e-05 | 5.662461901835271e-05 | 21.45% | 27.31% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.206040991107523e-05 | 5.703344984582992e-05 | 20.85% | 26.35% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.209417870194875e-05 | 5.66479897119271e-05 | 21.43% | 27.27% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.204162007970846e-05 | 5.661956837390635e-05 | 21.41% | 27.24% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 7.206783652011626e-05 | 5.658881446113177e-05 | 21.48% | 27.35% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.203021038655417e-05 | 5.6682548957491176e-05 | 21.31% | 27.08% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.207232666585232e-05 | 5.681018701735371e-05 | 21.18% | 26.87% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.208621625075733e-05 | 5.671173725498151e-05 | 21.33% | 27.11% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.207509531522409e-05 | 5.671628993532184e-05 | 21.31% | 27.08% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.208266710149471e-05 | 5.682601151092627e-05 | 21.17% | 26.85% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.210437870689354e-05 | 5.666081723406496e-05 | 21.42% | 27.26% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 7.232071085751876e-05 | 5.687522124714893e-05 | 21.36% | 27.16% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.207860761638383e-05 | 5.670349869225369e-05 | 21.33% | 27.11% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.231141296016916e-05 | 5.6716744712787934e-05 | 21.57% | 27.50% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.340755740810517e-05 | 5.671806930298888e-05 | 22.74% | 29.43% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.212510236488093e-05 | 5.674563857508634e-05 | 21.32% | 27.10% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.209519455224733e-05 | 5.6989062516553694e-05 | 20.95% | 26.51% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 6.964431012385017e-05 | 5.4275570313495226e-05 | 22.07% | 28.32% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 6.96534927394349e-05 | 5.4304848925777846e-05 | 22.04% | 28.26% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.323534613633094e-05 | 5.662964980540537e-05 | 22.67% | 29.32% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.086537736538362e-05 | 5.567175493204139e-05 | 21.44% | 27.29% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.122001498644703e-05 | 5.625883171044197e-05 | 21.01% | 26.59% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.124227023552544e-05 | 5.631447954813458e-05 | 20.95% | 26.51% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.079781829487935e-05 | 5.55794252573123e-05 | 21.50% | 27.38% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.07689251030134e-05 | 5.561752024469892e-05 | 21.41% | 27.24% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.117860133223672e-05 | 5.5862782764337216e-05 | 21.52% | 27.42% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 6.867563496940957e-05 | 5.3451896365906576e-05 | 22.17% | 28.48% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.196467950061359e-05 | 5.6282567490997615e-05 | 21.79% | 27.86% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.10155839749736e-05 | 5.58199424597255e-05 | 21.40% | 27.22% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.134784633307004e-05 | 5.600444249457862e-05 | 21.51% | 27.40% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 9.243055049371068e-05 | 7.643907069980582e-05 | 17.30% | 20.92% | 1.21x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 6.872238170791733e-05 | 5.327733834552765e-05 | 22.47% | 28.99% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.104337892369084e-05 | 5.654140502555618e-05 | 20.41% | 25.65% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.102858370891451e-05 | 5.5903584092576324e-05 | 21.29% | 27.06% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.100364292142213e-05 | 5.5785616321165986e-05 | 21.43% | 27.28% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.10281683793823e-05 | 5.602192768869173e-05 | 21.13% | 26.79% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.208701515273458e-05 | 5.5877787029785114e-05 | 22.49% | 29.01% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 8.977031130224714e-05 | 7.144252106091685e-05 | 20.42% | 25.65% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 6.871192429919901e-05 | 5.3439953360301024e-05 | 22.23% | 28.58% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 8.966083121609096e-05 | 7.198330366218576e-05 | 19.72% | 24.56% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.136176446505972e-05 | 5.592411672649077e-05 | 21.63% | 27.60% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.07558032308702e-05 | 5.557972088574756e-05 | 21.45% | 27.31% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.10656809455e-05 | 5.61623059229864e-05 | 20.97% | 26.54% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.094919703023622e-05 | 5.5817785259204054e-05 | 21.33% | 27.11% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.077905183248945e-05 | 5.556321578556436e-05 | 21.50% | 27.38% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.138157019040294e-05 | 5.614351278135158e-05 | 21.35% | 27.14% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 6.870145100037949e-05 | 5.344708190300725e-05 | 22.20% | 28.54% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 6.870098912726354e-05 | 5.3596564427166375e-05 | 21.99% | 28.18% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.094759307693377e-05 | 5.548997960904322e-05 | 21.79% | 27.86% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 6.975565807852093e-05 | 5.485567723895218e-05 | 21.36% | 27.16% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.039544428765344e-05 | 5.514663686958197e-05 | 21.66% | 27.65% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.041713050665404e-05 | 5.521336749507113e-05 | 21.59% | 27.54% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.016629836039229e-05 | 5.467969002851017e-05 | 22.07% | 28.32% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 6.996923340057748e-05 | 5.472995568468706e-05 | 21.78% | 27.84% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 6.970915769112786e-05 | 5.453146621436796e-05 | 21.77% | 27.83% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 6.760181204648093e-05 | 5.314323056905997e-05 | 21.39% | 27.21% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 6.976408614471643e-05 | 5.4656713941331584e-05 | 21.65% | 27.64% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.007253382725065e-05 | 5.496488828314422e-05 | 21.56% | 27.49% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.031658824438206e-05 | 5.470045666619503e-05 | 22.21% | 28.55% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.22127139898237e-05 | 7.401790511172832e-05 | 19.73% | 24.58% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 6.99818948027222e-05 | 5.4583489616902254e-05 | 22.00% | 28.21% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 6.999798030067416e-05 | 5.489957909318782e-05 | 21.57% | 27.50% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 6.983218477099496e-05 | 5.48878510200171e-05 | 21.40% | 27.23% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.003810988470884e-05 | 5.478301583746245e-05 | 21.78% | 27.85% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.005557389164862e-05 | 5.473855386393301e-05 | 21.86% | 27.98% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 6.999528694563243e-05 | 5.555511839602223e-05 | 20.63% | 25.99% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.003689152433758e-05 | 7.098619876996441e-05 | 21.16% | 26.84% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.004757921528724e-05 | 5.4545474254214005e-05 | 22.13% | 28.42% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 8.986332696334388e-05 | 7.078032503905926e-05 | 21.24% | 26.96% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.034884223588411e-05 | 5.511056718468225e-05 | 21.66% | 27.65% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 6.989459935323362e-05 | 5.458414308587906e-05 | 21.91% | 28.05% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 6.979665874937606e-05 | 5.446859612401481e-05 | 21.96% | 28.14% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.091989110162077e-05 | 5.489251600364461e-05 | 22.60% | 29.20% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 6.976438115368548e-05 | 5.470208100729068e-05 | 21.59% | 27.54% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.031563850640097e-05 | 5.4863850002806544e-05 | 21.97% | 28.16% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 6.782114068541534e-05 | 5.246529371125909e-05 | 22.64% | 29.27% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 6.768948765296085e-05 | 5.2349012537039044e-05 | 22.66% | 29.30% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 6.996799338497774e-05 | 5.4553602121529276e-05 | 22.03% | 28.26% | 1.28x | ✅ |
| `hexbytes_new['']` | 6.104715645007222e-05 | 3.2432273298170604e-05 | 46.87% | 88.23% | 1.88x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 7.812062403416004e-05 | 4.521631406158783e-05 | 42.12% | 72.77% | 1.73x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 7.935972442577304e-05 | 4.5477937421966114e-05 | 42.69% | 74.50% | 1.75x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 7.420381876497498e-05 | 4.222947560547729e-05 | 43.09% | 75.72% | 1.76x | ✅ |
| `hexbytes_new['0x']` | 6.456291133444726e-05 | 3.291684977844038e-05 | 49.02% | 96.14% | 1.96x | ✅ |
| `hexbytes_new['0x1234']` | 7.17699616046792e-05 | 4.061019588312907e-05 | 43.42% | 76.73% | 1.77x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 7.117434846503664e-05 | 3.959530826459935e-05 | 44.37% | 79.75% | 1.80x | ✅ |
| `hexbytes_new['0xabcdef']` | 7.119008737568132e-05 | 4.1060045194782836e-05 | 42.32% | 73.38% | 1.73x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 7.107568825239262e-05 | 3.9594910502137174e-05 | 44.29% | 79.51% | 1.80x | ✅ |
| `hexbytes_new['abc']` | 7.042238886282407e-05 | 4.152595589996684e-05 | 41.03% | 69.59% | 1.70x | ✅ |
| `hexbytes_new['deadbeef']` | 6.566648566262392e-05 | 3.726120074507223e-05 | 43.26% | 76.23% | 1.76x | ✅ |
| `hexbytes_new[0-9]` | 3.8472410345173504e-05 | 2.289571196882835e-05 | 40.49% | 68.03% | 1.68x | ✅ |
| `hexbytes_new[0]` | 0.00011006913936269088 | 5.427256993521382e-05 | 50.69% | 102.81% | 2.03x | ✅ |
| `hexbytes_new[123456]` | 0.00011645807667213925 | 5.688059453304139e-05 | 51.16% | 104.74% | 2.05x | ✅ |
| `hexbytes_new[2**16]` | 0.00011697135683226651 | 5.761971147533693e-05 | 50.74% | 103.01% | 2.03x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012573568215784687 | 6.394611147433778e-05 | 49.14% | 96.63% | 1.97x | ✅ |
| `hexbytes_new[2**32]` | 0.00012090468241904175 | 6.144689862751296e-05 | 49.18% | 96.76% | 1.97x | ✅ |
| `hexbytes_new[2**64]` | 0.00012179071172030748 | 6.24059206979187e-05 | 48.76% | 95.16% | 1.95x | ✅ |
| `hexbytes_new[2**8]` | 0.00011555166538582023 | 5.8241853830458315e-05 | 49.60% | 98.40% | 1.98x | ✅ |
| `hexbytes_new[4-byte pattern]` | 3.906940116173758e-05 | 2.3435555968323234e-05 | 40.02% | 66.71% | 1.67x | ✅ |
| `hexbytes_new[False]` | 5.397898415800966e-05 | 2.3921793160390093e-05 | 55.68% | 125.65% | 2.26x | ✅ |
| `hexbytes_new[True]` | 5.401899112482691e-05 | 2.393008740770137e-05 | 55.70% | 125.74% | 2.26x | ✅ |
| `hexbytes_new[all byte values]` | 3.907446352665491e-05 | 2.3434485203017822e-05 | 40.03% | 66.74% | 1.67x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 3.867238473802264e-05 | 2.3120647005483206e-05 | 40.21% | 67.26% | 1.67x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 3.876523502299579e-05 | 2.3132134029851387e-05 | 40.33% | 67.58% | 1.68x | ✅ |
| `hexbytes_new[ascii sentence]` | 3.841034796703028e-05 | 2.289977462825507e-05 | 40.38% | 67.73% | 1.68x | ✅ |
| `hexbytes_new[b'']` | 3.8516831560154525e-05 | 2.298478926375493e-05 | 40.33% | 67.58% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 3.8380488974981384e-05 | 2.2818778212088514e-05 | 40.55% | 68.20% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 3.855002347832458e-05 | 2.2935949594943354e-05 | 40.50% | 68.08% | 1.68x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 3.858294037107699e-05 | 2.3118777685606086e-05 | 40.08% | 66.89% | 1.67x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 4.7557168398746965e-05 | 3.1014351359464864e-05 | 34.79% | 53.34% | 1.53x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 3.856975839415374e-05 | 2.294076833784225e-05 | 40.52% | 68.13% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 3.8581250602093454e-05 | 2.2945609828835485e-05 | 40.53% | 68.14% | 1.68x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 3.8483483302088844e-05 | 2.2850365199366736e-05 | 40.62% | 68.42% | 1.68x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 3.847468331714116e-05 | 2.2889689110415422e-05 | 40.51% | 68.09% | 1.68x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 3.8576775516156147e-05 | 2.293972587925441e-05 | 40.53% | 68.17% | 1.68x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 3.868829195516096e-05 | 2.3107100018207923e-05 | 40.27% | 67.43% | 1.67x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.508583612617396e-05 | 2.924621361186936e-05 | 35.13% | 54.16% | 1.54x | ✅ |
| `hexbytes_new[b'abc']` | 3.8551368081649115e-05 | 2.2958279970077598e-05 | 40.45% | 67.92% | 1.68x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.038412771209822e-05 | 3.2978123612418954e-05 | 45.39% | 83.10% | 1.83x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.089655693351988e-05 | 3.369459514883506e-05 | 44.67% | 80.73% | 1.81x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.09243444239049e-05 | 3.36840011611208e-05 | 44.71% | 80.87% | 1.81x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.0454365056787385e-05 | 3.288083773611509e-05 | 45.61% | 83.86% | 1.84x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.056165633673672e-05 | 3.3271638414324986e-05 | 45.06% | 82.02% | 1.82x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.020229290500625e-05 | 3.2956119982282045e-05 | 45.26% | 82.67% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 5.8451147605004554e-05 | 3.0902138197234834e-05 | 47.13% | 89.15% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.0197246462868004e-05 | 3.2972499296230075e-05 | 45.23% | 82.57% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.0428263769051785e-05 | 3.3051723925245825e-05 | 45.30% | 82.83% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.054151687607436e-05 | 3.333353285907923e-05 | 44.94% | 81.62% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.152852660877488e-05 | 4.772821134614062e-05 | 41.46% | 70.82% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.0411905128676384e-05 | 3.309650065368885e-05 | 45.22% | 82.53% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.046795547472565e-05 | 3.30691452491899e-05 | 45.31% | 82.85% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.041585483103724e-05 | 3.293892030589164e-05 | 45.48% | 83.42% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.039416673204851e-05 | 3.296503009746373e-05 | 45.42% | 83.21% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.041844064841908e-05 | 3.30046481542073e-05 | 45.37% | 83.06% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.045984525612987e-05 | 3.3179499536072516e-05 | 45.12% | 82.22% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 7.860591831012477e-05 | 4.495334508924383e-05 | 42.81% | 74.86% | 1.75x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.041026338857394e-05 | 3.306808036876632e-05 | 45.26% | 82.68% | 1.83x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 7.904757394303289e-05 | 4.50030053910593e-05 | 43.07% | 75.65% | 1.76x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.071870218161046e-05 | 3.323918708612602e-05 | 45.26% | 82.67% | 1.83x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.043219162844632e-05 | 3.296487224173793e-05 | 45.45% | 83.32% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.046319325626994e-05 | 3.300036530869418e-05 | 45.42% | 83.22% | 1.83x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.0403275961014705e-05 | 3.337293422779657e-05 | 44.75% | 80.99% | 1.81x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.029935279706568e-05 | 3.296978578367722e-05 | 45.32% | 82.89% | 1.83x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.0668612875922846e-05 | 3.3473603924605206e-05 | 44.83% | 81.24% | 1.81x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.045938100053492e-05 | 3.3092911164264394e-05 | 45.26% | 82.70% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.047641536767107e-05 | 3.3087393652707216e-05 | 45.29% | 82.78% | 1.83x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.053151293386302e-05 | 3.3211361900977025e-05 | 45.13% | 82.26% | 1.82x | ✅ |
| `hexbytes_new[long alternating]` | 4.513418267200631e-05 | 2.924577889939001e-05 | 35.20% | 54.33% | 1.54x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 7.557693803686144e-05 | 3.838370540674091e-05 | 49.21% | 96.90% | 1.97x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 7.63761411132935e-05 | 3.918532346831488e-05 | 48.69% | 94.91% | 1.95x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 7.636028555129881e-05 | 3.931869082140462e-05 | 48.51% | 94.21% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 7.611424817295317e-05 | 3.83350866163147e-05 | 49.63% | 98.55% | 1.99x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 7.59692014513369e-05 | 3.858798777927683e-05 | 49.21% | 96.87% | 1.97x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 7.547714057463357e-05 | 3.8194818353097134e-05 | 49.40% | 97.61% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.347147465851349e-05 | 3.619140960742881e-05 | 50.74% | 103.01% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 7.548679051924463e-05 | 3.822603313314775e-05 | 49.36% | 97.47% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 7.582535980622446e-05 | 3.844895596517753e-05 | 49.29% | 97.21% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 7.582876055410344e-05 | 3.864249103766126e-05 | 49.04% | 96.23% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 9.557977976191144e-05 | 5.389512060501719e-05 | 43.61% | 77.34% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 7.58787320390703e-05 | 3.844858306315707e-05 | 49.33% | 97.35% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.569267502618074e-05 | 3.8449808360260095e-05 | 49.20% | 96.86% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 7.558375331323671e-05 | 3.835960499236835e-05 | 49.25% | 97.04% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 7.555423765034076e-05 | 3.838257056850455e-05 | 49.20% | 96.85% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 7.568244960005854e-05 | 3.8435166180994665e-05 | 49.22% | 96.91% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 7.600097238567749e-05 | 3.855944994714058e-05 | 49.26% | 97.10% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.472183874047477e-05 | 5.106094068354227e-05 | 46.09% | 85.51% | 1.86x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 7.56123868287626e-05 | 3.84802524241694e-05 | 49.11% | 96.50% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.33727381937553e-05 | 5.072566636562167e-05 | 45.67% | 84.07% | 1.84x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 7.586909214093209e-05 | 3.865475568940747e-05 | 49.05% | 96.27% | 1.96x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 7.559378889295969e-05 | 3.839859596552505e-05 | 49.20% | 96.87% | 1.97x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 7.543378088862078e-05 | 3.839599522785379e-05 | 49.10% | 96.46% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 7.564429185915564e-05 | 3.850858709866956e-05 | 49.09% | 96.43% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 7.563552894267777e-05 | 3.830623049124466e-05 | 49.35% | 97.45% | 1.97x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 7.598576034468493e-05 | 3.868132506050551e-05 | 49.09% | 96.44% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 7.572860159610665e-05 | 3.9312994706256686e-05 | 48.09% | 92.63% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 7.575372375547073e-05 | 3.8465177024077775e-05 | 49.22% | 96.94% | 1.97x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 7.605702355233145e-05 | 3.857182620469343e-05 | 49.29% | 97.18% | 1.97x | ✅ |
| `hexbytes_new[mixed pattern]` | 3.8620457335813256e-05 | 2.3065990694087578e-05 | 40.28% | 67.43% | 1.67x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 3.848142963117983e-05 | 2.2889453411522175e-05 | 40.52% | 68.12% | 1.68x | ✅ |
| `hexbytes_new[palindrome ascii]` | 3.8487122838866404e-05 | 2.2874448282026593e-05 | 40.57% | 68.25% | 1.68x | ✅ |
| `hexbytes_new[palindrome numeric]` | 3.857373069575523e-05 | 2.2983800764990222e-05 | 40.42% | 67.83% | 1.68x | ✅ |
| `hexbytes_new[palindrome]` | 3.847550924362679e-05 | 2.2894690278199517e-05 | 40.50% | 68.05% | 1.68x | ✅ |
| `hexbytes_new[repeated 0-9]` | 3.859303833668662e-05 | 2.298053777615113e-05 | 40.45% | 67.94% | 1.68x | ✅ |
| `hexbytes_new[single 0xff]` | 3.8478541809636375e-05 | 2.2966528975558126e-05 | 40.31% | 67.54% | 1.68x | ✅ |
| `hexbytes_new[single null byte]` | 3.8488165511639084e-05 | 2.2974246265353417e-05 | 40.31% | 67.53% | 1.68x | ✅ |
| `hexbytes_new[two patterns]` | 3.869235892465775e-05 | 2.31880153528689e-05 | 40.07% | 66.86% | 1.67x | ✅ |
| `hexbytes_repr[0-9]` | 3.1801401969609145e-05 | 1.5333420976397195e-05 | 51.78% | 107.40% | 2.07x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012116743216769715 | 3.9148881160921856e-05 | 67.69% | 209.50% | 3.10x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012108307907827361 | 3.907963931546315e-05 | 67.72% | 209.84% | 3.10x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.01565819083137e-05 | 2.0308725443865687e-05 | 59.51% | 146.97% | 2.47x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.9534231556484453e-05 | 2.0298467110119005e-05 | 59.02% | 144.03% | 2.44x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.275688870477057e-05 | 1.8497990529950535e-05 | 56.74% | 131.14% | 2.31x | ✅ |
| `hexbytes_repr[b'']` | 2.2768879435490983e-05 | 1.1879671390170135e-05 | 47.82% | 91.66% | 1.92x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.924836592423485e-05 | 1.742734843058739e-05 | 55.60% | 125.21% | 2.25x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.9464062353105715e-05 | 1.44436572746434e-05 | 50.98% | 103.99% | 2.04x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.150606895590719e-05 | 2.3396327269724458e-05 | 61.96% | 162.89% | 2.63x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0006989342243393308 | 0.00019871242696478422 | 71.57% | 251.73% | 3.52x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.9140444287449518e-05 | 1.4420112135555122e-05 | 50.52% | 102.08% | 2.02x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.9860713549111537e-05 | 1.4647426854903228e-05 | 50.95% | 103.86% | 2.04x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.110783284434113e-05 | 1.507358198432775e-05 | 51.54% | 106.37% | 2.06x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.114688786594411e-05 | 1.507193639563003e-05 | 51.61% | 106.65% | 2.07x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.9468338908669042e-05 | 1.4469134437902105e-05 | 50.90% | 103.66% | 2.04x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.956510324415159e-05 | 2.035058685140297e-05 | 58.94% | 143.56% | 2.44x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00037635338334593405 | 0.00011175588532047939 | 70.31% | 236.76% | 3.37x | ✅ |
| `hexbytes_repr[b'abc']` | 2.9119816593736614e-05 | 1.4467016708620021e-05 | 50.32% | 101.28% | 2.01x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00037404692550075834 | 0.0001116649090495504 | 70.15% | 234.97% | 3.35x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.558442834658406e-05 | 3.346660359451109e-05 | 64.99% | 185.61% | 2.86x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.1877109485529746e-05 | 1.533278064842586e-05 | 51.90% | 107.90% | 2.08x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.07748611862894e-05 | 1.488045865512858e-05 | 51.65% | 106.81% | 2.07x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9858720660929296e-05 | 1.464171028648303e-05 | 50.96% | 103.93% | 2.04x | ✅ |
| `hexbytes_repr[palindrome]` | 3.50266547987612e-05 | 1.6117777483427416e-05 | 53.98% | 117.32% | 2.17x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.145769545756172e-05 | 2.337863886035187e-05 | 61.96% | 162.88% | 2.63x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.8322821684576494e-05 | 1.4174755684980891e-05 | 49.95% | 99.81% | 2.00x | ✅ |
| `hexbytes_repr[single null byte]` | 2.8330760081786368e-05 | 1.416590948692124e-05 | 50.00% | 99.99% | 2.00x | ✅ |
| `hexbytes_repr[two patterns]` | 4.9519182942700015e-05 | 2.029874381827971e-05 | 59.01% | 143.95% | 2.44x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.6805362230977106e-05 | 1.4314781389723268e-05 | 14.82% | 17.40% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.087108697957631e-05 | 3.8536253593172725e-05 | 5.71% | 6.06% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.0873328274794426e-05 | 3.8547468397646775e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.1846171017627716e-05 | 1.925176418374956e-05 | 11.88% | 13.48% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1847839475787037e-05 | 1.9229686514774575e-05 | 11.98% | 13.62% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0029611608981475e-05 | 1.7414943131784265e-05 | 13.05% | 15.01% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 9.986716636492902e-06 | 1.1073270731739943e-05 | -10.88% | -9.81% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.9013460236624e-05 | 1.6307053553396386e-05 | 14.23% | 16.60% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6032833552616557e-05 | 1.3659779177151464e-05 | 14.80% | 17.37% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.4742550339465363e-05 | 2.2245013762862887e-05 | 10.09% | 11.23% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00020084144684021676 | 0.00019809696901384904 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.5897922569828245e-05 | 1.3606603787017327e-05 | 14.41% | 16.84% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6112616699077754e-05 | 1.3734425647195415e-05 | 14.76% | 17.32% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6507291036745078e-05 | 1.4098136768485414e-05 | 14.59% | 17.09% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.650322723739557e-05 | 1.4086288293843939e-05 | 14.65% | 17.16% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.600653559458352e-05 | 1.3806608044822074e-05 | 13.74% | 15.93% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1844428733501307e-05 | 1.9200624953511666e-05 | 12.10% | 13.77% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00011201594696970455 | 0.00010940618422772155 | 2.33% | 2.39% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.595587230183518e-05 | 1.3607895050775133e-05 | 14.72% | 17.25% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00011201983511360201 | 0.00011144044476915102 | 0.52% | 0.52% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.410802405578481e-05 | 3.178603562971078e-05 | 6.81% | 7.31% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.6759379207520846e-05 | 1.4319575841020693e-05 | 14.56% | 17.04% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6426599871850162e-05 | 1.3962840041126559e-05 | 15.00% | 17.65% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6140230315138568e-05 | 1.4592476531831626e-05 | 9.59% | 10.61% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.779836664027774e-05 | 1.5166353494705545e-05 | 14.79% | 17.35% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.475289138235824e-05 | 2.2263255845321034e-05 | 10.06% | 11.18% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.565353784454647e-05 | 1.3292792298554053e-05 | 15.08% | 17.76% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.569807640703264e-05 | 1.329110513955604e-05 | 15.33% | 18.11% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.1735591015010438e-05 | 1.915278091486064e-05 | 11.88% | 13.49% | 1.13x | ✅ |
