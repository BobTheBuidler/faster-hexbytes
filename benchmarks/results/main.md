#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/major-github-artifact-actions/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/major-github-artifact-actions/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4040154527447906e-05 | 2.3303585046663686e-05 | 3.06% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4121272825498404e-05 | 2.32454870652529e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.40740753436717e-05 | 2.32840605095907e-05 | 3.28% | 3.39% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4031951769847726e-05 | 2.3296133274028188e-05 | 3.06% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4039107842197996e-05 | 2.3251422240913076e-05 | 3.28% | 3.39% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4032917857444217e-05 | 2.3318807278189147e-05 | 2.97% | 3.06% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.403893808863869e-05 | 2.3184156441250437e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.405874633668577e-05 | 2.3246605908403766e-05 | 3.38% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4017286907856133e-05 | 2.3237300881799088e-05 | 3.25% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.404521421042133e-05 | 2.3311679320936862e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4047116534822697e-05 | 2.322259506038137e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.405491419167242e-05 | 2.324985307959521e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.405937911544412e-05 | 2.3300703746976733e-05 | 3.15% | 3.26% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4073687187730935e-05 | 2.3234629409749717e-05 | 3.49% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.413429120025925e-05 | 2.324617501120335e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4033347398588004e-05 | 2.3299399185578522e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.402760717717851e-05 | 2.3228120570887843e-05 | 3.33% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.402804005235723e-05 | 2.3252948583614646e-05 | 3.23% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.404537493793615e-05 | 2.321612263184639e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.4042265489246308e-05 | 2.335941088321367e-05 | 2.84% | 2.92% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4118342457735785e-05 | 2.3320392000531106e-05 | 3.31% | 3.42% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.40518693047618e-05 | 2.346438018976256e-05 | 2.44% | 2.50% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4058528986190984e-05 | 2.322285961730417e-05 | 3.47% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.407487184527853e-05 | 2.3260134956164615e-05 | 3.38% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4056356755761395e-05 | 2.3261353607704424e-05 | 3.30% | 3.42% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4050853418662983e-05 | 2.3281819108429026e-05 | 3.20% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3395761298129475e-05 | 2.2415918901952635e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3380600605743694e-05 | 2.238257428197668e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.339488395723846e-05 | 2.237034958587084e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.337761636769557e-05 | 2.2383568834425817e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3446996687467888e-05 | 2.2475171619593222e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3393777903754207e-05 | 2.2486872773537884e-05 | 3.88% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3450868966004968e-05 | 2.2384349376998684e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3417894780735067e-05 | 2.244315831547463e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3397245664400348e-05 | 2.2444034106050785e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.341511191246874e-05 | 2.2455268624924036e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.3392836035718708e-05 | 2.2463311166130113e-05 | 3.97% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3429754262021424e-05 | 2.2484634757134065e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3416228711527274e-05 | 2.2447278924720913e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.34075348605056e-05 | 2.2453592137319033e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3400086498655016e-05 | 2.24485574780379e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3404288652431115e-05 | 2.2468494767411647e-05 | 4.00% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3406172107566774e-05 | 2.247783077259829e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.341334832220393e-05 | 2.2470360529411226e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.337773117900044e-05 | 2.2352184753160398e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.33871520981967e-05 | 2.249937159735935e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3373992877523607e-05 | 2.2405017204246762e-05 | 4.15% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3409216279824703e-05 | 2.2447277977671772e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3417051480852577e-05 | 2.24505117818951e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3448351605569163e-05 | 2.2447395772005467e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3382254669420627e-05 | 2.2373431484059952e-05 | 4.31% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3392716357020627e-05 | 2.245265231192438e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3393174211184034e-05 | 2.2395419120841587e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3383016341431456e-05 | 2.2385034087618904e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.341412006713767e-05 | 2.2542391678765483e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3387004550869516e-05 | 2.2495224670658943e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3392919349506454e-05 | 2.263272716710921e-05 | 3.25% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.340086949521275e-05 | 2.247481923703291e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3417283233972273e-05 | 2.2462451838707104e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3727863692078928e-05 | 2.2537761209022703e-05 | 5.02% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3388435731398886e-05 | 2.2388005315039326e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.34898038985258e-05 | 2.2483070489864388e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3383137645589787e-05 | 2.2502660349029902e-05 | 3.77% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3393667689278034e-05 | 2.243852311469646e-05 | 4.08% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3401372082130465e-05 | 2.246298387482132e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.344109907322858e-05 | 2.2468345176425053e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3633524716184062e-05 | 2.244448924407418e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3418472832342926e-05 | 2.2474798600713416e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.3398367580794526e-05 | 2.2459487918671872e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.341950588941372e-05 | 2.2467830685899797e-05 | 4.06% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3426298868986836e-05 | 2.2448895841895087e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3435021882520717e-05 | 2.2542636048044422e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3399726300903406e-05 | 2.2441426314269562e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.337318356315832e-05 | 2.2550066675608945e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3411878238924032e-05 | 2.2610231430368185e-05 | 3.42% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.339429116247071e-05 | 2.2708434288368857e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3411519620788925e-05 | 2.257486257083764e-05 | 3.57% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.340195640681309e-05 | 2.243531133757418e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3382767698030543e-05 | 2.2577065425426084e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3396237015895826e-05 | 2.2525942438668767e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.3489822864031225e-05 | 2.2630805865262727e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.412322573621936e-05 | 2.259681984442796e-05 | 6.33% | 6.75% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3402017657275734e-05 | 2.2578086375570866e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3405211052142912e-05 | 2.255492067573608e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3457530279438323e-05 | 2.2652792666335865e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.341825295942714e-05 | 2.2554883208625184e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3370398633385817e-05 | 2.252490561234885e-05 | 3.62% | 3.75% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3393168662080705e-05 | 2.2505844582384063e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3417768412026177e-05 | 2.2561088487245485e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3394468693414974e-05 | 2.2606798508259026e-05 | 3.37% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3414887757955103e-05 | 2.25803916215687e-05 | 3.56% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3408595743306862e-05 | 2.2552131638843753e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.342273455979325e-05 | 2.2628864141488544e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.3409344292779923e-05 | 2.2554061067522327e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.344048981720528e-05 | 2.273132863289608e-05 | 3.03% | 3.12% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3411716428975735e-05 | 2.2619151153871732e-05 | 3.39% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3427660246554916e-05 | 2.2668711183314232e-05 | 3.24% | 3.35% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3425283562849027e-05 | 2.255980200654238e-05 | 3.69% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.338961160243227e-05 | 2.2505041063293105e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.341357116865352e-05 | 2.261782342642346e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3412403708391128e-05 | 2.2576480036790854e-05 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3411779589885882e-05 | 2.2591383882380593e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3386047547093083e-05 | 2.2590568595881403e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3431562924361398e-05 | 2.2556660313499407e-05 | 3.73% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.336495006173215e-05 | 2.2558103243755196e-05 | 3.45% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3387103523756345e-05 | 2.2544572041103857e-05 | 3.60% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3393650501738038e-05 | 2.256853503180606e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.342142772892175e-05 | 2.2775109891594672e-05 | 2.76% | 2.84% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3395094929551875e-05 | 2.2558533850471557e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.3402928875587366e-05 | 2.2544583391192644e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.34341038124163e-05 | 2.2589784193935862e-05 | 3.60% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3393037984480254e-05 | 2.2526386671009187e-05 | 3.70% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3389953415217288e-05 | 2.2507941627888736e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3380028376929007e-05 | 2.26621895507035e-05 | 3.07% | 3.17% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.339038940153358e-05 | 2.2566143783143605e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.338090665503695e-05 | 2.2598444129658122e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3438881953210524e-05 | 2.2568439589850474e-05 | 3.71% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3403445150647527e-05 | 2.257488704024185e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.3643855840006175e-05 | 2.2542673886038116e-05 | 4.66% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3370418959787515e-05 | 2.260135386799406e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3404123440715218e-05 | 2.25837693631869e-05 | 3.51% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3369054336025655e-05 | 2.2553214516162018e-05 | 3.49% | 3.62% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.339396282795195e-05 | 2.269279691748549e-05 | 3.00% | 3.09% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3380762101143948e-05 | 2.2594576884636473e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.34089924252627e-05 | 2.259477084154533e-05 | 3.48% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3437775403654496e-05 | 2.2614004465174474e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.358831496398842e-05 | 2.259742986928237e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.336813401925125e-05 | 2.259598739528461e-05 | 3.30% | 3.42% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.343035640061719e-05 | 2.2571581452878024e-05 | 3.67% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.3396197712078505e-05 | 2.252333214304598e-05 | 3.73% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3393596077314025e-05 | 2.25800048572387e-05 | 3.48% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3394745469676504e-05 | 2.250560413961315e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3414201613430208e-05 | 2.2672884424525755e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.339160664600238e-05 | 2.251018828261326e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3438870649338386e-05 | 2.2562247577790827e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3419058301010284e-05 | 2.2531344457495413e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.339862864824094e-05 | 2.242225454368977e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3633832364518235e-05 | 2.254938663122221e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.339397979627259e-05 | 2.2547122707226314e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3415787974013867e-05 | 2.2530941808149544e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.350063187177007e-05 | 2.2566656379529322e-05 | 3.97% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3417757763314247e-05 | 2.2555131200999626e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3413921583684973e-05 | 2.257186778952273e-05 | 3.60% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.342699526997501e-05 | 2.2561248479055802e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3402124676341324e-05 | 2.2465757618903295e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.338369294669487e-05 | 2.2581876551114526e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3395819520513028e-05 | 2.2593473414987397e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3461131941826166e-05 | 2.2575711520308316e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3400688281554885e-05 | 2.258121645962743e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3387687334017513e-05 | 2.2554671184230798e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3398297703638107e-05 | 2.25764404725493e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3347739135363048e-05 | 2.247866613739656e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.334468254340381e-05 | 2.2648843465124457e-05 | 2.98% | 3.07% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3363352403310228e-05 | 2.256053232577665e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3362153562633215e-05 | 2.253013370896398e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3899686181341998e-05 | 2.258817817300985e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3414417121978234e-05 | 2.2838643758712706e-05 | 2.46% | 2.52% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.333799250800639e-05 | 2.2530078043965583e-05 | 3.46% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.335820666004241e-05 | 2.260123387019073e-05 | 3.24% | 3.35% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.336913153660038e-05 | 2.252033762682203e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.338233543314053e-05 | 2.249662711496042e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.336792881300157e-05 | 2.2523871728405407e-05 | 3.61% | 3.75% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.34000115464074e-05 | 2.2689886751417452e-05 | 3.03% | 3.13% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.338039869234373e-05 | 2.2580103882315308e-05 | 3.42% | 3.54% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3374795116923884e-05 | 2.255507448090258e-05 | 3.51% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3371760400526576e-05 | 2.255820011069111e-05 | 3.48% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3502342766299217e-05 | 2.2575804134099575e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3352707025081178e-05 | 2.2515724831437208e-05 | 3.58% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.337263696829108e-05 | 2.2563890445324816e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3348604783980434e-05 | 2.2539052024962306e-05 | 3.47% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3339420027929655e-05 | 2.251708515671887e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3343041769211933e-05 | 2.2559758998085738e-05 | 3.36% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.381621523667294e-05 | 5.740794143126628e-05 | 22.23% | 28.58% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.242693885021753e-05 | 5.7611449329529314e-05 | 20.46% | 25.72% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.213500338219197e-05 | 5.7163493516299877e-05 | 20.75% | 26.19% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.252657348998632e-05 | 5.741272651378736e-05 | 20.84% | 26.32% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.36892917423404e-05 | 5.743719673892199e-05 | 22.05% | 28.30% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.207118954096307e-05 | 5.74937835717535e-05 | 20.23% | 25.35% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 6.912928071378537e-05 | 5.365227466790663e-05 | 22.39% | 28.85% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.325110629516193e-05 | 5.803940433619161e-05 | 20.77% | 26.21% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.311584496720372e-05 | 5.8119204930207424e-05 | 20.51% | 25.80% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.320507268986849e-05 | 5.6960543170342265e-05 | 22.19% | 28.52% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.529930866527934e-05 | 5.804638167654536e-05 | 22.91% | 29.72% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.285291389824117e-05 | 5.760857279875046e-05 | 20.92% | 26.46% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.281372648709139e-05 | 5.73681830352714e-05 | 21.21% | 26.92% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.222326318127815e-05 | 5.7363741627659525e-05 | 20.57% | 25.90% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.267604139363267e-05 | 5.729177917528171e-05 | 21.17% | 26.85% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.402255649037714e-05 | 5.7329555616727316e-05 | 22.55% | 29.12% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.399045474075012e-05 | 5.7482014357997e-05 | 22.31% | 28.72% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.264443356195517e-05 | 5.7361403823763296e-05 | 21.04% | 26.64% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.292268389970637e-05 | 5.710076437396326e-05 | 21.70% | 27.71% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.362841563032114e-05 | 5.717180460836667e-05 | 22.35% | 28.78% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.246329085585015e-05 | 5.701624764455184e-05 | 21.32% | 27.09% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.286028525057565e-05 | 5.729122401466318e-05 | 21.37% | 27.18% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.49801280376228e-05 | 5.788935150933148e-05 | 22.79% | 29.52% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.268664336170231e-05 | 5.7063944910755115e-05 | 21.49% | 27.38% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.222915303156545e-05 | 5.71660057030787e-05 | 20.85% | 26.35% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.597874427276788e-05 | 5.751990237518495e-05 | 24.29% | 32.09% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 6.93661246149381e-05 | 5.372046980223408e-05 | 22.56% | 29.12% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 6.941460846324823e-05 | 5.3703473321867944e-05 | 22.63% | 29.26% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.245679657650015e-05 | 5.772576616739084e-05 | 20.33% | 25.52% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.338752469395787e-05 | 6.034148881616386e-05 | 17.78% | 21.62% | 1.22x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 7.325464151738247e-05 | 5.9619723531935035e-05 | 18.61% | 22.87% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 7.318526348154765e-05 | 5.8775444476925885e-05 | 19.69% | 24.52% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 7.325012346548017e-05 | 5.878765841410072e-05 | 19.74% | 24.60% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.335591339821128e-05 | 5.935321563235262e-05 | 19.09% | 23.59% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.653533413237427e-05 | 5.880510444912585e-05 | 23.17% | 30.15% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.051934381510668e-05 | 5.4389618481550896e-05 | 22.87% | 29.66% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 7.32282886193838e-05 | 5.86146551951966e-05 | 19.96% | 24.93% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.316031865776096e-05 | 5.9698485548034284e-05 | 18.40% | 22.55% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 7.326280547319642e-05 | 5.955985100364763e-05 | 18.70% | 23.01% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.329848656314305e-05 | 5.948166487345401e-05 | 18.85% | 23.23% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.336599707843888e-05 | 5.871315965232388e-05 | 19.97% | 24.96% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.431327851143666e-05 | 5.891893948938064e-05 | 20.72% | 26.13% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 7.398996649056194e-05 | 5.9344137169497725e-05 | 19.79% | 24.68% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 7.37376990054354e-05 | 5.941465760021153e-05 | 19.42% | 24.11% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.324553816992524e-05 | 5.815405654862338e-05 | 20.60% | 25.95% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.33327911065183e-05 | 6.040325035838865e-05 | 17.63% | 21.41% | 1.21x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.316852540297091e-05 | 5.847751008194994e-05 | 20.08% | 25.12% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.327154111511432e-05 | 6.096281353715165e-05 | 16.80% | 20.19% | 1.20x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.342126341431539e-05 | 6.0138169214817145e-05 | 18.09% | 22.09% | 1.22x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.428372720124523e-05 | 5.951956990479395e-05 | 19.88% | 24.81% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.326758933194584e-05 | 5.937311582066339e-05 | 18.96% | 23.40% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.30512790343902e-05 | 5.890275538640895e-05 | 19.37% | 24.02% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.321233749994034e-05 | 5.9256684684740975e-05 | 19.06% | 23.55% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 7.338437020181872e-05 | 5.9536536665938076e-05 | 18.87% | 23.26% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.388328278342586e-05 | 5.955732930725241e-05 | 19.39% | 24.05% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.155001151496058e-05 | 5.4432348887289776e-05 | 23.92% | 31.45% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.067405012532973e-05 | 5.4485874405174777e-05 | 22.91% | 29.71% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.318108446445776e-05 | 5.949477998989152e-05 | 18.70% | 23.00% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.335871349735167e-05 | 5.854993072421253e-05 | 20.19% | 25.29% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.381873244105264e-05 | 5.8544198865061504e-05 | 20.69% | 26.09% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.355724720718997e-05 | 5.9114631956540954e-05 | 19.63% | 24.43% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.357975030362993e-05 | 5.911692336301289e-05 | 19.66% | 24.46% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.297618987827754e-05 | 5.9743505440165125e-05 | 18.13% | 22.15% | 1.22x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.359213570219118e-05 | 5.863671933402221e-05 | 20.32% | 25.51% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.010168206682225e-05 | 5.433640870926885e-05 | 22.49% | 29.01% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.274583074139268e-05 | 5.9155230670805575e-05 | 18.68% | 22.97% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 7.368274529366091e-05 | 5.9216848168313365e-05 | 19.63% | 24.43% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.334157499602231e-05 | 5.909597597476857e-05 | 19.42% | 24.11% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.347487302677984e-05 | 5.827642651329001e-05 | 20.69% | 26.08% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.321069910797541e-05 | 5.9059564381518386e-05 | 19.33% | 23.96% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.304506156116586e-05 | 5.845619044504271e-05 | 19.97% | 24.96% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 7.640472756579478e-05 | 5.8626230608352514e-05 | 23.27% | 30.33% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.336564668513516e-05 | 5.9047657732338706e-05 | 19.52% | 24.25% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.340807383210571e-05 | 5.925645899554093e-05 | 19.28% | 23.88% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.489222197612773e-05 | 5.931319448626978e-05 | 20.80% | 26.27% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.361220766983607e-05 | 6.201476594024238e-05 | 15.75% | 18.70% | 1.19x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.347233813839632e-05 | 5.905226209524978e-05 | 19.63% | 24.42% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.362344796043472e-05 | 5.8639755191540974e-05 | 20.35% | 25.55% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 7.343551935157615e-05 | 5.8565394370855545e-05 | 20.25% | 25.39% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.379420258703559e-05 | 5.847461635018264e-05 | 20.76% | 26.20% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.318710112502418e-05 | 5.84687300120531e-05 | 20.11% | 25.17% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.327029298724e-05 | 5.8611649522350027e-05 | 20.01% | 25.01% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.344279975443887e-05 | 5.9101783790427223e-05 | 19.53% | 24.26% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.340546439798347e-05 | 5.958290802501356e-05 | 18.83% | 23.20% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.012056457532535e-05 | 5.459135463739555e-05 | 22.15% | 28.45% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.01076379504642e-05 | 5.460777384089896e-05 | 22.11% | 28.38% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.380752441867901e-05 | 5.8068379395020703e-05 | 21.32% | 27.10% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.283572403755118e-05 | 5.776868715619677e-05 | 20.69% | 26.08% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.500778855579938e-05 | 5.79147745592156e-05 | 22.79% | 29.51% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.482620588201328e-05 | 5.8515226559719e-05 | 21.80% | 27.87% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.170881673890552e-05 | 5.678907981284414e-05 | 20.81% | 26.27% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.240788360238268e-05 | 5.786485075301176e-05 | 20.08% | 25.13% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.176854205341354e-05 | 5.7130240197601335e-05 | 20.40% | 25.62% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 6.931847690256696e-05 | 5.351175254615041e-05 | 22.80% | 29.54% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.355153983287575e-05 | 5.7630530632518084e-05 | 21.65% | 27.63% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.260508353626208e-05 | 5.7601222485213276e-05 | 20.67% | 26.05% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.402139856110671e-05 | 5.7980911253267e-05 | 21.67% | 27.67% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 9.687046748571836e-05 | 7.88522533901575e-05 | 18.60% | 22.85% | 1.23x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 6.910689069722183e-05 | 5.3439011485350913e-05 | 22.67% | 29.32% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.274366593054197e-05 | 5.7197878287464324e-05 | 21.37% | 27.18% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.223862522824076e-05 | 5.728489643710447e-05 | 20.70% | 26.10% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.473150276349802e-05 | 5.737689166063372e-05 | 23.22% | 30.25% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.235715656617649e-05 | 5.714963064976567e-05 | 21.02% | 26.61% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.408018770363971e-05 | 5.718244217490734e-05 | 22.81% | 29.55% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.180786983753308e-05 | 7.568675429185107e-05 | 17.56% | 21.30% | 1.21x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 6.947144083619476e-05 | 5.373331104051164e-05 | 22.65% | 29.29% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.221796437744787e-05 | 7.636173833582359e-05 | 17.19% | 20.76% | 1.21x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.298043337470561e-05 | 5.83017288236372e-05 | 20.11% | 25.18% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.204081102662204e-05 | 5.742340403446092e-05 | 20.29% | 25.46% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.354157523134776e-05 | 5.7493726147504966e-05 | 21.82% | 27.91% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.248319174290862e-05 | 5.7298964649927957e-05 | 20.95% | 26.50% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.277630942864667e-05 | 5.73875626584396e-05 | 21.15% | 26.82% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.268084852285048e-05 | 5.794847355200486e-05 | 20.27% | 25.42% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 6.932157734529623e-05 | 5.344090910716082e-05 | 22.91% | 29.72% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 6.923419614884018e-05 | 5.346124910692871e-05 | 22.78% | 29.50% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.239073554429874e-05 | 5.695120931747244e-05 | 21.33% | 27.11% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.075159027966114e-05 | 5.6211572616504046e-05 | 20.55% | 25.87% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.159448440324578e-05 | 5.610079683595955e-05 | 21.64% | 27.62% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.176055756429378e-05 | 5.637858204290966e-05 | 21.44% | 27.28% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.06986953806437e-05 | 5.5473203518816467e-05 | 21.54% | 27.45% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.072744624420233e-05 | 5.589313786664887e-05 | 20.97% | 26.54% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.048301726549773e-05 | 5.562618357019241e-05 | 21.08% | 26.71% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 6.818173438739773e-05 | 5.245344673083706e-05 | 23.07% | 29.99% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.052947700423348e-05 | 5.5406938022856056e-05 | 21.44% | 27.29% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.128403916753295e-05 | 5.5444212104645276e-05 | 22.22% | 28.57% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.134936812118154e-05 | 5.562442965463496e-05 | 22.04% | 28.27% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.34990200005788e-05 | 7.89658886429918e-05 | 15.54% | 18.40% | 1.18x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.10277453240903e-05 | 5.5439685259560625e-05 | 21.95% | 28.12% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.072604250942595e-05 | 5.571585100506831e-05 | 21.22% | 26.94% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.07352635439755e-05 | 5.536051308776698e-05 | 21.74% | 27.77% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.061318642404883e-05 | 5.569607422843801e-05 | 21.13% | 26.78% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.088712603254924e-05 | 5.557096334590422e-05 | 21.61% | 27.56% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.072575118857938e-05 | 5.600856690795207e-05 | 20.81% | 26.28% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.131738061520222e-05 | 7.677658540160565e-05 | 15.92% | 18.94% | 1.19x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.072517101970848e-05 | 5.627434780218555e-05 | 20.43% | 25.68% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 8.903680021736764e-05 | 7.619735308973471e-05 | 14.42% | 16.85% | 1.17x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.164142158527437e-05 | 5.598548675464715e-05 | 21.85% | 27.96% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.073184269277496e-05 | 5.492282890468106e-05 | 22.35% | 28.78% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.428748378739953e-05 | 5.546742385564268e-05 | 25.33% | 33.93% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.079805298413219e-05 | 5.555363288679741e-05 | 21.53% | 27.44% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.061071666306866e-05 | 5.540916603543461e-05 | 21.53% | 27.44% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.128775855734997e-05 | 5.56821485511663e-05 | 21.89% | 28.03% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 6.837639105711654e-05 | 5.260859084270557e-05 | 23.06% | 29.97% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 6.833146068395372e-05 | 5.2470526625071666e-05 | 23.21% | 30.23% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.067330076738991e-05 | 5.606983946408642e-05 | 20.66% | 26.05% | 1.26x | ✅ |
| `hexbytes_new['']` | 6.14135822044496e-05 | 3.240211910867465e-05 | 47.24% | 89.54% | 1.90x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 7.919385609372872e-05 | 4.520962327528927e-05 | 42.91% | 75.17% | 1.75x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 7.996047592432896e-05 | 4.506989127927891e-05 | 43.63% | 77.41% | 1.77x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 7.592863012627178e-05 | 4.174100093951043e-05 | 45.03% | 81.90% | 1.82x | ✅ |
| `hexbytes_new['0x']` | 6.499286038431859e-05 | 3.291316217448624e-05 | 49.36% | 97.47% | 1.97x | ✅ |
| `hexbytes_new['0x1234']` | 7.22931014413234e-05 | 3.947286659448238e-05 | 45.40% | 83.15% | 1.83x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 7.25321333626778e-05 | 3.9507037824546615e-05 | 45.53% | 83.59% | 1.84x | ✅ |
| `hexbytes_new['0xabcdef']` | 7.214388076187864e-05 | 3.960589194434529e-05 | 45.10% | 82.15% | 1.82x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 7.229282115076078e-05 | 3.941277015660294e-05 | 45.48% | 83.42% | 1.83x | ✅ |
| `hexbytes_new['abc']` | 7.111914767386102e-05 | 4.1582013311413315e-05 | 41.53% | 71.03% | 1.71x | ✅ |
| `hexbytes_new['deadbeef']` | 6.648244433128176e-05 | 3.708195965265507e-05 | 44.22% | 79.29% | 1.79x | ✅ |
| `hexbytes_new[0-9]` | 3.845888620895314e-05 | 2.287367794582447e-05 | 40.52% | 68.14% | 1.68x | ✅ |
| `hexbytes_new[0]` | 0.00011420124636416564 | 5.393420460750436e-05 | 52.77% | 111.74% | 2.12x | ✅ |
| `hexbytes_new[123456]` | 0.00011769931336868635 | 5.6262661271787596e-05 | 52.20% | 109.20% | 2.09x | ✅ |
| `hexbytes_new[2**16]` | 0.00011765633981531381 | 5.6069418446654064e-05 | 52.34% | 109.84% | 2.10x | ✅ |
| `hexbytes_new[2**256-1]` | 0.0001237552019848368 | 6.398565568750854e-05 | 48.30% | 93.41% | 1.93x | ✅ |
| `hexbytes_new[2**32]` | 0.00012014060548029295 | 6.007664978876108e-05 | 49.99% | 99.98% | 2.00x | ✅ |
| `hexbytes_new[2**64]` | 0.00012144057472802582 | 6.0872721967385536e-05 | 49.87% | 99.50% | 1.99x | ✅ |
| `hexbytes_new[2**8]` | 0.00011671654739902572 | 5.731189413123894e-05 | 50.90% | 103.65% | 2.04x | ✅ |
| `hexbytes_new[4-byte pattern]` | 3.901230364203721e-05 | 2.3411203993700228e-05 | 39.99% | 66.64% | 1.67x | ✅ |
| `hexbytes_new[False]` | 5.580341597167434e-05 | 2.389363665086074e-05 | 57.18% | 133.55% | 2.34x | ✅ |
| `hexbytes_new[True]` | 5.40437351118151e-05 | 2.3929525197357227e-05 | 55.72% | 125.85% | 2.26x | ✅ |
| `hexbytes_new[all byte values]` | 3.903953812819059e-05 | 2.6023536433516173e-05 | 33.34% | 50.02% | 1.50x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 3.8647598379938296e-05 | 2.3278806083229577e-05 | 39.77% | 66.02% | 1.66x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 3.8678913226843476e-05 | 2.3142676658313877e-05 | 40.17% | 67.13% | 1.67x | ✅ |
| `hexbytes_new[ascii sentence]` | 3.830313258909157e-05 | 2.2928046395072654e-05 | 40.14% | 67.06% | 1.67x | ✅ |
| `hexbytes_new[b'']` | 3.846649858267228e-05 | 2.3050419831132595e-05 | 40.08% | 66.88% | 1.67x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 3.849120705393824e-05 | 2.295254703466803e-05 | 40.37% | 67.70% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 3.852005458270274e-05 | 2.297712191091782e-05 | 40.35% | 67.65% | 1.68x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 3.865934911486581e-05 | 2.318081411539147e-05 | 40.04% | 66.77% | 1.67x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 4.744855147275989e-05 | 3.127178904552729e-05 | 34.09% | 51.73% | 1.52x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 3.852790214162073e-05 | 2.2965291189261256e-05 | 40.39% | 67.77% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 3.853898429261556e-05 | 2.2965469513439972e-05 | 40.41% | 67.81% | 1.68x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 3.845928603414178e-05 | 2.295685912884259e-05 | 40.31% | 67.53% | 1.68x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 3.842064729146763e-05 | 2.294647578858004e-05 | 40.28% | 67.44% | 1.67x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 3.849232862684379e-05 | 2.2952429863801645e-05 | 40.37% | 67.70% | 1.68x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 3.863638624130173e-05 | 2.3152048895977952e-05 | 40.08% | 66.88% | 1.67x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.541419702036899e-05 | 2.9273221115590355e-05 | 35.54% | 55.14% | 1.55x | ✅ |
| `hexbytes_new[b'abc']` | 3.851376804457473e-05 | 2.298313928859461e-05 | 40.32% | 67.57% | 1.68x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.0888944875041846e-05 | 3.2997797955486764e-05 | 45.81% | 84.52% | 1.85x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.152925038650629e-05 | 3.365537579754771e-05 | 45.30% | 82.82% | 1.83x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.149098621440927e-05 | 3.3739940229957215e-05 | 45.13% | 82.25% | 1.82x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.091614098085955e-05 | 3.2984432692732895e-05 | 45.85% | 84.68% | 1.85x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.1001907602144665e-05 | 3.330043662884997e-05 | 45.41% | 83.19% | 1.83x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.047359993528673e-05 | 3.324825758862538e-05 | 45.02% | 81.89% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 5.855188558898447e-05 | 3.0896311886894434e-05 | 47.23% | 89.51% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.19106720279241e-05 | 3.289311678276469e-05 | 46.87% | 88.22% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.099909139221241e-05 | 3.338512325031386e-05 | 45.27% | 82.71% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.082406149544965e-05 | 3.3287093578982625e-05 | 45.27% | 82.73% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.208603187916355e-05 | 4.830525829867469e-05 | 41.15% | 69.93% | 1.70x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.091322948488024e-05 | 3.313109146045329e-05 | 45.61% | 83.86% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.139039521029905e-05 | 3.303375267500868e-05 | 46.19% | 85.84% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.090900045583471e-05 | 3.298222837704223e-05 | 45.85% | 84.67% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.080886099166987e-05 | 3.295135332453062e-05 | 45.81% | 84.54% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.10535837091233e-05 | 3.312027799973099e-05 | 45.75% | 84.34% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.087436760740808e-05 | 3.319579540670702e-05 | 45.47% | 83.38% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 7.80804002282619e-05 | 4.47351334755912e-05 | 42.71% | 74.54% | 1.75x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.122714838957023e-05 | 3.30428822144225e-05 | 46.03% | 85.30% | 1.85x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.00742481714649e-05 | 4.476220840754297e-05 | 44.10% | 78.89% | 1.79x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.079406652600874e-05 | 3.324490491275148e-05 | 45.32% | 82.87% | 1.83x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.141903618083116e-05 | 3.294708544117179e-05 | 46.36% | 86.42% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.064788808841e-05 | 3.3047598924133504e-05 | 45.51% | 83.52% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.0904005195400525e-05 | 3.303587196478079e-05 | 45.76% | 84.36% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.073299928196102e-05 | 3.323424895479649e-05 | 45.28% | 82.74% | 1.83x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.137868425896609e-05 | 3.341058153556113e-05 | 45.57% | 83.71% | 1.84x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.120036879957306e-05 | 3.310144437206839e-05 | 45.91% | 84.89% | 1.85x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.192038857102752e-05 | 3.315117550399407e-05 | 46.46% | 86.78% | 1.87x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.105587744008198e-05 | 3.319602687095724e-05 | 45.63% | 83.93% | 1.84x | ✅ |
| `hexbytes_new[long alternating]` | 4.5298997190817976e-05 | 2.9279050747144915e-05 | 35.36% | 54.71% | 1.55x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 7.630994076454782e-05 | 3.8412787202906936e-05 | 49.66% | 98.66% | 1.99x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 7.740743876900232e-05 | 3.8990108750492326e-05 | 49.63% | 98.53% | 1.99x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 7.77416393804198e-05 | 3.900376693224414e-05 | 49.83% | 99.32% | 1.99x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 7.604820978124401e-05 | 3.835069887513294e-05 | 49.57% | 98.30% | 1.98x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 7.613279242852111e-05 | 3.867620553988363e-05 | 49.20% | 96.85% | 1.97x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 7.61699910460851e-05 | 3.847968139142643e-05 | 49.48% | 97.95% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.367346664175655e-05 | 3.619679136718772e-05 | 50.87% | 103.54% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 7.601375500513016e-05 | 3.8458076497646776e-05 | 49.41% | 97.65% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 7.619875542571928e-05 | 3.8443670313222623e-05 | 49.55% | 98.21% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 7.614531364705983e-05 | 3.866118298282689e-05 | 49.23% | 96.96% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 9.872738446216587e-05 | 5.520806234436759e-05 | 44.08% | 78.83% | 1.79x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 7.66758294426903e-05 | 3.847351379584893e-05 | 49.82% | 99.30% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.647106646222038e-05 | 3.859257703312167e-05 | 49.53% | 98.15% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 7.595302897352694e-05 | 3.834607267526127e-05 | 49.51% | 98.07% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 7.576192813558402e-05 | 3.83534497046342e-05 | 49.38% | 97.54% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 7.646862431419587e-05 | 3.844803699179497e-05 | 49.72% | 98.89% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 7.649786515478497e-05 | 3.867498161266925e-05 | 49.44% | 97.80% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.667152229011057e-05 | 5.084067518277179e-05 | 47.41% | 90.15% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 7.59393241431719e-05 | 3.855444282391453e-05 | 49.23% | 96.97% | 1.97x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.686497502184408e-05 | 5.228390951322011e-05 | 46.02% | 85.27% | 1.85x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 7.707485649278136e-05 | 3.85788931744438e-05 | 49.95% | 99.79% | 2.00x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 7.700759143702941e-05 | 3.8356627348990956e-05 | 50.19% | 100.77% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 7.666893982778285e-05 | 3.8395489595603995e-05 | 49.92% | 99.68% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 7.655888524742173e-05 | 3.84558625110118e-05 | 49.77% | 99.08% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 7.628100565362516e-05 | 3.839331166978658e-05 | 49.67% | 98.68% | 1.99x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 7.644260885575054e-05 | 3.8601988643064765e-05 | 49.50% | 98.03% | 1.98x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 7.619127512123343e-05 | 3.850730836865193e-05 | 49.46% | 97.86% | 1.98x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 7.646252887703729e-05 | 3.850032182489148e-05 | 49.65% | 98.60% | 1.99x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 7.605009446093376e-05 | 3.8557980604404504e-05 | 49.30% | 97.24% | 1.97x | ✅ |
| `hexbytes_new[mixed pattern]` | 3.846572856848076e-05 | 2.3154440482638126e-05 | 39.81% | 66.13% | 1.66x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 3.845273300753633e-05 | 2.2880483143232457e-05 | 40.50% | 68.06% | 1.68x | ✅ |
| `hexbytes_new[palindrome ascii]` | 3.8481067434032526e-05 | 2.2893517339561194e-05 | 40.51% | 68.09% | 1.68x | ✅ |
| `hexbytes_new[palindrome numeric]` | 3.849195470637172e-05 | 2.3203607385389368e-05 | 39.72% | 65.89% | 1.66x | ✅ |
| `hexbytes_new[palindrome]` | 3.847085036065144e-05 | 2.2935574091789088e-05 | 40.38% | 67.73% | 1.68x | ✅ |
| `hexbytes_new[repeated 0-9]` | 3.838598982562333e-05 | 2.2990664173486125e-05 | 40.11% | 66.96% | 1.67x | ✅ |
| `hexbytes_new[single 0xff]` | 3.8624635750298354e-05 | 2.2952677315375454e-05 | 40.58% | 68.28% | 1.68x | ✅ |
| `hexbytes_new[single null byte]` | 3.849311226743628e-05 | 2.2958740816845042e-05 | 40.36% | 67.66% | 1.68x | ✅ |
| `hexbytes_new[two patterns]` | 3.854562546774399e-05 | 2.320372718789089e-05 | 39.80% | 66.12% | 1.66x | ✅ |
| `hexbytes_repr[0-9]` | 3.392313392667308e-05 | 1.5464668280564834e-05 | 54.41% | 119.36% | 2.19x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012448083472370699 | 3.9769507973269634e-05 | 68.05% | 213.01% | 3.13x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012420798274937104 | 3.97720285400036e-05 | 67.98% | 212.30% | 3.12x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.2073432283078624e-05 | 2.0369837220435924e-05 | 60.88% | 155.64% | 2.56x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.087053686035828e-05 | 2.0374190995978356e-05 | 59.95% | 149.68% | 2.50x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.438208752936415e-05 | 1.8652406198690864e-05 | 57.97% | 137.94% | 2.38x | ✅ |
| `hexbytes_repr[b'']` | 2.4146558424574227e-05 | 1.1887865592341103e-05 | 50.77% | 103.12% | 2.03x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.164534903328772e-05 | 1.7582986310888176e-05 | 57.78% | 136.85% | 2.37x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.19168222668136e-05 | 1.453859347819201e-05 | 54.45% | 119.53% | 2.20x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.30392011884638e-05 | 2.3547369142289503e-05 | 62.65% | 167.71% | 2.68x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007041898681871314 | 0.00019877477670710703 | 71.77% | 254.27% | 3.54x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.023459981462664e-05 | 1.4460443711561905e-05 | 52.17% | 109.08% | 2.09x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.193775095913769e-05 | 1.4654612669563483e-05 | 54.12% | 117.94% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.315730361170523e-05 | 1.510327267396988e-05 | 54.45% | 119.54% | 2.20x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.2862958947231495e-05 | 1.5095253535028028e-05 | 54.07% | 117.70% | 2.18x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.158674182116458e-05 | 1.4532441377638195e-05 | 53.99% | 117.35% | 2.17x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.17520888338035e-05 | 2.038924662853283e-05 | 60.60% | 153.82% | 2.54x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0003787844365545306 | 0.00011276963959618478 | 70.23% | 235.89% | 3.36x | ✅ |
| `hexbytes_repr[b'abc']` | 3.057084186294081e-05 | 1.450358239370507e-05 | 52.56% | 110.78% | 2.11x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003787561264761069 | 0.00011112762787861638 | 70.66% | 240.83% | 3.41x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.69355484386614e-05 | 3.3586060494301734e-05 | 65.35% | 188.62% | 2.89x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.5492065769523845e-05 | 1.532109998310489e-05 | 56.83% | 131.65% | 2.32x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.28094805358238e-05 | 1.4922947370232358e-05 | 54.52% | 119.86% | 2.20x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.192244591352002e-05 | 1.4699095715393615e-05 | 53.95% | 117.17% | 2.17x | ✅ |
| `hexbytes_repr[palindrome]` | 3.721870903031865e-05 | 1.6232569950331756e-05 | 56.39% | 129.28% | 2.29x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.432173410560157e-05 | 2.3500129463902494e-05 | 63.46% | 173.71% | 2.74x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.081526472557866e-05 | 1.4161773175398778e-05 | 54.04% | 117.59% | 2.18x | ✅ |
| `hexbytes_repr[single null byte]` | 3.166419199680265e-05 | 1.4162250541285315e-05 | 55.27% | 123.58% | 2.24x | ✅ |
| `hexbytes_repr[two patterns]` | 5.0609987241077824e-05 | 2.038417550057852e-05 | 59.72% | 148.28% | 2.48x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.684563160015957e-05 | 1.4382641189885124e-05 | 14.62% | 17.12% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.171922142335897e-05 | 3.9230030526316754e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.168730459079035e-05 | 3.923447747020157e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.1979420416583122e-05 | 1.9260792891264877e-05 | 12.37% | 14.11% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1907546404974437e-05 | 1.9282861097644475e-05 | 11.98% | 13.61% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0172048980662577e-05 | 1.7528227915061443e-05 | 13.11% | 15.08% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 9.967379595232203e-06 | 1.1092587261036912e-05 | -11.29% | -10.14% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.9181080291075754e-05 | 1.642277967304065e-05 | 14.38% | 16.80% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.608757345782535e-05 | 1.3844941475814784e-05 | 13.94% | 16.20% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.483110678454279e-05 | 2.2403353634467855e-05 | 9.78% | 10.84% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00019738019596149934 | 0.00019983999613809966 | -1.25% | -1.23% | 0.99x | ❌ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.604491417893899e-05 | 1.3657036526921961e-05 | 14.88% | 17.48% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6199171513850603e-05 | 1.3817857954905296e-05 | 14.70% | 17.23% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.65763466112685e-05 | 1.4195405607678279e-05 | 14.36% | 16.77% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.658217165104766e-05 | 1.4163547909929068e-05 | 14.59% | 17.08% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6132052702159857e-05 | 1.370004699978861e-05 | 15.08% | 17.75% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1939491919282843e-05 | 1.925181032923353e-05 | 12.25% | 13.96% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00011236717221963661 | 0.00011120855022380715 | 1.03% | 1.04% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.5997273605905398e-05 | 1.3646107531410537e-05 | 14.70% | 17.23% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001124985127309441 | 0.00011103444873105154 | 1.30% | 1.32% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.420060872301401e-05 | 3.187893989785458e-05 | 6.79% | 7.28% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.6852541647233173e-05 | 1.4393979534610193e-05 | 14.59% | 17.08% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.643260086172879e-05 | 1.4043487436616854e-05 | 14.54% | 17.01% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.627647809981567e-05 | 1.3837579291965166e-05 | 14.98% | 17.63% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7929725737036507e-05 | 1.5242057170950092e-05 | 14.99% | 17.63% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.4810820464287667e-05 | 2.2367797031574788e-05 | 9.85% | 10.92% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.573079105548446e-05 | 1.3352648173278094e-05 | 15.12% | 17.81% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.576422660358273e-05 | 1.3363166292488149e-05 | 15.23% | 17.97% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.191043739063223e-05 | 1.9250722186810042e-05 | 12.14% | 13.82% | 1.14x | ✅ |
