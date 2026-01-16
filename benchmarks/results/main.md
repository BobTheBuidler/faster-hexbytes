#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/short-circuit-empty-hexstr/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/short-circuit-empty-hexstr/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.4299843502306447e-05 | 2.3484676008767746e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.3998993981544208e-05 | 2.349141258069061e-05 | 2.12% | 2.16% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.421003307118384e-05 | 2.3516993276476717e-05 | 2.86% | 2.95% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4001147329463397e-05 | 2.3469950064883036e-05 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.4015485956247335e-05 | 2.3521617221543424e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.397247368880115e-05 | 2.3494029714795453e-05 | 2.00% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.3971232843866487e-05 | 2.3427704995142032e-05 | 2.27% | 2.32% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.43600575796094e-05 | 2.348172292189105e-05 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4003965771524863e-05 | 2.3464417558329477e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4021739315446715e-05 | 2.3479804265924743e-05 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.411163950866509e-05 | 2.3492332777429807e-05 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3988254201670392e-05 | 2.349579357461564e-05 | 2.05% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.4136237229618813e-05 | 2.3505540016199468e-05 | 2.61% | 2.68% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4004227376604205e-05 | 2.346780186731211e-05 | 2.23% | 2.29% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4104174346684223e-05 | 2.3469690936045772e-05 | 2.63% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4331044321632452e-05 | 2.3492231311458274e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4083474531046178e-05 | 2.351410373795188e-05 | 2.36% | 2.42% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.3994433672541855e-05 | 2.350076457572086e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.4014551626865738e-05 | 2.348076474615399e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.396641729533961e-05 | 2.3473211860430726e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4064068481222268e-05 | 2.3484261087230487e-05 | 2.41% | 2.47% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.398956918776454e-05 | 2.3491761648059407e-05 | 2.08% | 2.12% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4112233232217087e-05 | 2.3476060961129608e-05 | 2.64% | 2.71% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.398236635517648e-05 | 2.3490666080869995e-05 | 2.05% | 2.09% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.4134668028075826e-05 | 2.348833902868003e-05 | 2.68% | 2.75% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.3987339644025066e-05 | 2.348728277566768e-05 | 2.08% | 2.13% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.328106180852348e-05 | 2.275635368559762e-05 | 2.25% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.3304436120281736e-05 | 2.2764499096997838e-05 | 2.32% | 2.37% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3262236719962837e-05 | 2.280378622046884e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.3278554749155294e-05 | 2.2779491389232794e-05 | 2.14% | 2.19% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3372633301241105e-05 | 2.2843008977378755e-05 | 2.27% | 2.32% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.3294186235329527e-05 | 2.287340666610047e-05 | 1.81% | 1.84% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.3331689783524865e-05 | 2.2768452718468358e-05 | 2.41% | 2.47% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3275760309080837e-05 | 2.2767134123677165e-05 | 2.19% | 2.23% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.3266040732197153e-05 | 2.286557046085183e-05 | 1.72% | 1.75% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.326365417473074e-05 | 2.2867772908105207e-05 | 1.70% | 1.73% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.325867637045214e-05 | 2.2859096465623933e-05 | 1.72% | 1.75% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.330874965914445e-05 | 2.2881080819643563e-05 | 1.83% | 1.87% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.3561025846744687e-05 | 2.2869229514444312e-05 | 2.94% | 3.03% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3311837060719727e-05 | 2.2943089960760365e-05 | 1.58% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.3281608761699246e-05 | 2.2902191529654104e-05 | 1.63% | 1.66% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.3313502718995845e-05 | 2.2897480975609192e-05 | 1.78% | 1.82% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3293673167085878e-05 | 2.2862725014961206e-05 | 1.85% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3308384122841368e-05 | 2.2868966266311632e-05 | 1.89% | 1.92% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3294179988820517e-05 | 2.2836150374083244e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3343154972215836e-05 | 2.286432810214058e-05 | 2.05% | 2.09% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3285708049457446e-05 | 2.2823482437180196e-05 | 1.99% | 2.03% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.329464322060904e-05 | 2.2921708320106056e-05 | 1.60% | 1.63% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3295457726918457e-05 | 2.2860770803270344e-05 | 1.87% | 1.90% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3283502974405998e-05 | 2.2863912096590493e-05 | 1.80% | 1.84% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3295529752087652e-05 | 2.278034283469336e-05 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3333106027808984e-05 | 2.2865564363263596e-05 | 2.00% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3300485787044872e-05 | 2.2828046887339106e-05 | 2.03% | 2.07% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3276932845950647e-05 | 2.2754980173723378e-05 | 2.24% | 2.29% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.327381737033852e-05 | 2.295523394164878e-05 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.3369226894190318e-05 | 2.288800683110261e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3278155860924163e-05 | 2.290174093331649e-05 | 1.62% | 1.64% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3334199804346083e-05 | 2.286839314824136e-05 | 2.00% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3253541259430463e-05 | 2.2869857197844743e-05 | 1.65% | 1.68% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.344778169174863e-05 | 2.3113371545067066e-05 | 1.43% | 1.45% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3264470528371717e-05 | 2.282431531508442e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3289799355875576e-05 | 2.2866550838373274e-05 | 1.82% | 1.85% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.3262254950122566e-05 | 2.3263433153954576e-05 | -0.01% | -0.01% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3403173294713512e-05 | 2.2863889759348615e-05 | 2.30% | 2.36% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3283434033735822e-05 | 2.2861074398258188e-05 | 1.81% | 1.85% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3335488642446258e-05 | 2.2889208938447097e-05 | 1.91% | 1.95% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3286787560776973e-05 | 2.289795737351517e-05 | 1.67% | 1.70% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3280992297527547e-05 | 2.305906109282951e-05 | 0.95% | 0.96% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.330053585823684e-05 | 2.2859092528331323e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.329239399281802e-05 | 2.286744510055046e-05 | 1.82% | 1.86% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3298861931972874e-05 | 2.2956666260313334e-05 | 1.47% | 1.49% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3336644284074637e-05 | 2.2895876477675974e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.3266581341354318e-05 | 2.2862344577145665e-05 | 1.74% | 1.77% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3258044717881633e-05 | 2.2862068036002266e-05 | 1.70% | 1.73% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3274901166772784e-05 | 2.2873526339998617e-05 | 1.72% | 1.75% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.328086689670226e-05 | 2.2908061407930778e-05 | 1.60% | 1.63% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.3278088877396656e-05 | 2.2933488272467416e-05 | 1.48% | 1.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.3360411399724434e-05 | 2.2901006079398588e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3275874677730588e-05 | 2.2932747797398043e-05 | 1.47% | 1.50% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.3352083100585037e-05 | 2.2886356858018624e-05 | 1.99% | 2.03% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.327720379337884e-05 | 2.2890814743300986e-05 | 1.66% | 1.69% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.33097131209348e-05 | 2.286906129869456e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.3279602974860328e-05 | 2.288110391223749e-05 | 1.71% | 1.74% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3268090167679694e-05 | 2.2891659451575708e-05 | 1.62% | 1.64% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3541257612757854e-05 | 2.289176070550794e-05 | 2.76% | 2.84% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3274633384036796e-05 | 2.2877833389893186e-05 | 1.70% | 1.73% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3640962537992406e-05 | 2.2756839703230197e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3258711654026636e-05 | 2.275866058893767e-05 | 2.15% | 2.20% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3262608396744905e-05 | 2.2894194499532014e-05 | 1.58% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.327658768512297e-05 | 2.287474630798404e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3342624057966366e-05 | 2.2850512164427124e-05 | 2.11% | 2.15% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.331522281226828e-05 | 2.2875495230324722e-05 | 1.89% | 1.92% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.3290142802332363e-05 | 2.2929607730538054e-05 | 1.55% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.327748587985046e-05 | 2.28686715683904e-05 | 1.76% | 1.79% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.3297659039091523e-05 | 2.28535209936079e-05 | 1.91% | 1.94% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.330846173765894e-05 | 2.2924398719609723e-05 | 1.65% | 1.68% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3283048458894335e-05 | 2.2858182890968124e-05 | 1.82% | 1.86% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.329345237712853e-05 | 2.2913445101688765e-05 | 1.63% | 1.66% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.3281203418441e-05 | 2.27856612443194e-05 | 2.13% | 2.17% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.3276243982416134e-05 | 2.2905096591500737e-05 | 1.59% | 1.62% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3307009651868747e-05 | 2.2902410499583915e-05 | 1.74% | 1.77% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.3308173492279538e-05 | 2.2859587027719446e-05 | 1.92% | 1.96% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.3286725653944303e-05 | 2.291021928930043e-05 | 1.62% | 1.64% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.3327667106783536e-05 | 2.2877709040932156e-05 | 1.93% | 1.97% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3250636364110196e-05 | 2.284644590407413e-05 | 1.74% | 1.77% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3291876470367994e-05 | 2.2772969851836e-05 | 2.23% | 2.28% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3261125129167003e-05 | 2.2873403405393782e-05 | 1.67% | 1.70% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.327174411754083e-05 | 2.286681619004911e-05 | 1.74% | 1.77% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3306542139707683e-05 | 2.2865443112981118e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.325566337888985e-05 | 2.2866012208271846e-05 | 1.68% | 1.70% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3273284664064607e-05 | 2.2885209760957822e-05 | 1.67% | 1.70% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.327669818736698e-05 | 2.2863398556539474e-05 | 1.78% | 1.81% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3295217219933436e-05 | 2.2767730550574015e-05 | 2.26% | 2.32% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.338337703735484e-05 | 2.289889152065527e-05 | 2.07% | 2.12% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.3286755801742013e-05 | 2.2872019952347155e-05 | 1.78% | 1.81% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3287516564751273e-05 | 2.2852695127803592e-05 | 1.87% | 1.90% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3255068032823e-05 | 2.2914794331935088e-05 | 1.46% | 1.48% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3252316931306483e-05 | 2.28790728981867e-05 | 1.61% | 1.63% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.328063846396186e-05 | 2.2867368452224327e-05 | 1.78% | 1.81% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.3289873041147375e-05 | 2.285746005919607e-05 | 1.86% | 1.89% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.324228281675921e-05 | 2.286779442152368e-05 | 1.61% | 1.64% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3269689938926388e-05 | 2.2925411013773026e-05 | 1.48% | 1.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.327970006935358e-05 | 2.2854948963381266e-05 | 1.82% | 1.86% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.331043344755744e-05 | 2.2879283492179756e-05 | 1.85% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3297107040063557e-05 | 2.2863998226903024e-05 | 1.86% | 1.89% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.328002329134592e-05 | 2.2961425927904734e-05 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.3292723253391557e-05 | 2.2890459385857218e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.327126704493978e-05 | 2.2866540475009343e-05 | 1.74% | 1.77% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3261284505603907e-05 | 2.28740981768622e-05 | 1.66% | 1.69% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.32571693693782e-05 | 2.2873306391993495e-05 | 1.65% | 1.68% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3268611418870996e-05 | 2.2878266596873724e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3261498697737646e-05 | 2.275682283624294e-05 | 2.17% | 2.22% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3271852321588275e-05 | 2.287485449834538e-05 | 1.71% | 1.74% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.327559291201713e-05 | 2.2777803241762176e-05 | 2.14% | 2.19% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.325037019632289e-05 | 2.2892782353315304e-05 | 1.54% | 1.56% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.326893319989442e-05 | 2.2825255298866526e-05 | 1.91% | 1.94% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.331231935093749e-05 | 2.2785601875601885e-05 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.32787601560362e-05 | 2.2867140261061212e-05 | 1.77% | 1.80% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.3258772905422423e-05 | 2.2870268240827787e-05 | 1.67% | 1.70% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.328570630509233e-05 | 2.285903360744585e-05 | 1.83% | 1.87% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3257589751088467e-05 | 2.28538871662058e-05 | 1.74% | 1.77% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3259744132363573e-05 | 2.2860956809053748e-05 | 1.71% | 1.74% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3264413004021844e-05 | 2.288387532745949e-05 | 1.64% | 1.66% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.3314997487198807e-05 | 2.2860830366020763e-05 | 1.95% | 1.99% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.3266156179151233e-05 | 2.2785544391528472e-05 | 2.07% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.3266670892147643e-05 | 2.289689027814868e-05 | 1.59% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3277084457401743e-05 | 2.288677694452948e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.3281041951529516e-05 | 2.286181405628496e-05 | 1.80% | 1.83% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3268910244120568e-05 | 2.2867264060061387e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3273802488398865e-05 | 2.2875827591603754e-05 | 1.71% | 1.74% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3285057279869997e-05 | 2.2883689150152313e-05 | 1.72% | 1.75% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.326846449033972e-05 | 2.2788544914379962e-05 | 2.06% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.325689742251276e-05 | 2.287500759254045e-05 | 1.64% | 1.67% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.364464898188927e-05 | 2.2873691422878607e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3275176814098603e-05 | 2.287563450628417e-05 | 1.72% | 1.75% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3276576698428058e-05 | 2.289323594723875e-05 | 1.65% | 1.67% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3265241218078523e-05 | 2.2971004354073214e-05 | 1.26% | 1.28% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.324487315782359e-05 | 2.287812660146951e-05 | 1.58% | 1.60% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.3276744207722678e-05 | 2.278267154491616e-05 | 2.12% | 2.17% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.3276181914227123e-05 | 2.2898373564144746e-05 | 1.62% | 1.65% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3294560796254162e-05 | 2.2879657084194973e-05 | 1.78% | 1.81% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3263812497786744e-05 | 2.288118658007741e-05 | 1.64% | 1.67% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3277032703384316e-05 | 2.285944626932556e-05 | 1.79% | 1.83% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.328559642173676e-05 | 2.2857376856687625e-05 | 1.84% | 1.87% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.327343033502514e-05 | 2.2857867612522748e-05 | 1.79% | 1.82% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3280862208754914e-05 | 2.2857645669879594e-05 | 1.82% | 1.85% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3270945552990963e-05 | 2.286820682752368e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3299502618217735e-05 | 2.2869698064322256e-05 | 1.84% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.330268854679802e-05 | 2.285839190547232e-05 | 1.91% | 1.94% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.325747522578604e-05 | 2.2854722079918524e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3256624239296212e-05 | 2.288874497693662e-05 | 1.58% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.3267640239903217e-05 | 2.2890034095069032e-05 | 1.62% | 1.65% | 1.02x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.292527312153884e-05 | 5.557301657471131e-05 | 23.79% | 31.22% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.27584653664248e-05 | 5.5599737778296397e-05 | 23.58% | 30.86% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.113609786581368e-05 | 5.553813863819125e-05 | 21.93% | 28.09% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.308691288886853e-05 | 5.546785635801363e-05 | 24.11% | 31.76% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.290320025682621e-05 | 5.581610713751702e-05 | 23.44% | 30.61% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.188084226929154e-05 | 5.552096378950474e-05 | 22.76% | 29.47% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 6.886873133025164e-05 | 5.336942303177363e-05 | 22.51% | 29.04% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.286439854481981e-05 | 5.554034239351079e-05 | 23.78% | 31.19% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.301719528950864e-05 | 5.56851474064822e-05 | 23.74% | 31.13% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.33765450859864e-05 | 5.565272014426731e-05 | 24.15% | 31.85% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.296537683483199e-05 | 5.553850701630733e-05 | 23.88% | 31.38% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.431197939751343e-05 | 5.5673769390789496e-05 | 25.08% | 33.48% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.311034957564984e-05 | 5.556483251877209e-05 | 24.00% | 31.58% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.3000255476465e-05 | 5.549728194667527e-05 | 23.98% | 31.54% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.312997434000821e-05 | 5.574824371803457e-05 | 23.77% | 31.18% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.294037546688477e-05 | 5.559604570647596e-05 | 23.78% | 31.20% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.292162244188571e-05 | 5.5550275123519895e-05 | 23.82% | 31.27% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.303494410414242e-05 | 5.563905283624047e-05 | 23.82% | 31.27% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.348795040577977e-05 | 5.609585361571184e-05 | 23.67% | 31.00% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.292070683854169e-05 | 5.554837517832668e-05 | 23.82% | 31.27% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.283024124504117e-05 | 5.555384194051781e-05 | 23.72% | 31.10% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.235229253944296e-05 | 5.5536008840357e-05 | 23.24% | 30.28% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.142548618869046e-05 | 5.5630674623294064e-05 | 22.11% | 28.39% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.22411099221672e-05 | 5.553308863208661e-05 | 23.13% | 30.09% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.291892985223343e-05 | 5.562606222009135e-05 | 23.72% | 31.09% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.19193957143203e-05 | 5.545892354676648e-05 | 22.89% | 29.68% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 6.902865919669649e-05 | 5.4494434934035826e-05 | 21.06% | 26.67% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 6.908331260995217e-05 | 5.373040853428723e-05 | 22.22% | 28.57% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.215207506029732e-05 | 5.553108149398972e-05 | 23.04% | 29.93% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.285509931403359e-05 | 5.6553423586101815e-05 | 22.38% | 28.83% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 7.27576259508949e-05 | 5.657341665641066e-05 | 22.24% | 28.61% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 7.366867193505474e-05 | 5.649432858670942e-05 | 23.31% | 30.40% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 7.286902974156544e-05 | 5.6506628772261367e-05 | 22.45% | 28.96% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.301795596594984e-05 | 5.6507330706940795e-05 | 22.61% | 29.22% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.318817277831473e-05 | 5.651811585916547e-05 | 22.78% | 29.50% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.257643868605756e-05 | 5.430964183304509e-05 | 25.17% | 33.63% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 7.290314069109311e-05 | 5.648242647265012e-05 | 22.52% | 29.07% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.287087107439966e-05 | 5.657281217554117e-05 | 22.37% | 28.81% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 7.274742760295063e-05 | 5.6712072743150155e-05 | 22.04% | 28.28% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.34226151273166e-05 | 5.6552898521512005e-05 | 22.98% | 29.83% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.292302708396229e-05 | 5.6602461024475057e-05 | 22.38% | 28.83% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.293489462968768e-05 | 5.658844780357673e-05 | 22.41% | 28.89% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 7.291707978622216e-05 | 5.6813483662611073e-05 | 22.08% | 28.34% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 7.301913736292659e-05 | 5.652757705610592e-05 | 22.59% | 29.17% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.284337471271952e-05 | 5.647052554946025e-05 | 22.48% | 28.99% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.282219262995578e-05 | 5.6498667218599225e-05 | 22.42% | 28.89% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.29412144604861e-05 | 5.6489376322382586e-05 | 22.55% | 29.12% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.283934554263099e-05 | 5.65418871202015e-05 | 22.37% | 28.82% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.29500094247422e-05 | 5.649541226263109e-05 | 22.56% | 29.13% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.291725812611832e-05 | 5.6499655680112766e-05 | 22.52% | 29.06% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.28213685338643e-05 | 5.6562160310285424e-05 | 22.33% | 28.75% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.311917851627278e-05 | 5.649834092692521e-05 | 22.73% | 29.42% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.288143720344879e-05 | 5.654475458748187e-05 | 22.42% | 28.89% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 7.426118036048075e-05 | 5.669504118584993e-05 | 23.65% | 30.98% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.285784497298108e-05 | 5.675655026812316e-05 | 22.10% | 28.37% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 6.999866790736826e-05 | 5.441549234895739e-05 | 22.26% | 28.64% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 6.999141268327831e-05 | 5.444153335580895e-05 | 22.22% | 28.56% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.288744203964039e-05 | 5.648276168556487e-05 | 22.51% | 29.04% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.313444106009441e-05 | 5.647975532169566e-05 | 22.77% | 29.49% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.309189245102704e-05 | 5.6465073651391486e-05 | 22.75% | 29.45% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.301462861767578e-05 | 5.650341983246023e-05 | 22.61% | 29.22% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.303732471155991e-05 | 5.6500791060083525e-05 | 22.64% | 29.27% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.308264257178117e-05 | 5.648880987714109e-05 | 22.71% | 29.38% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.295910070941566e-05 | 5.6582107929263726e-05 | 22.45% | 28.94% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 6.990243470252862e-05 | 5.443443441515652e-05 | 22.13% | 28.42% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.305145312838593e-05 | 5.6500818723989643e-05 | 22.66% | 29.29% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 7.296489086358527e-05 | 5.6600402434022474e-05 | 22.43% | 28.91% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.274801535536213e-05 | 5.668799659280162e-05 | 22.08% | 28.33% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.301215769127926e-05 | 5.651444630089962e-05 | 22.60% | 29.19% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.287036195310598e-05 | 5.655077422660437e-05 | 22.40% | 28.86% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.300456120830595e-05 | 5.654705781519462e-05 | 22.54% | 29.10% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 7.286534752458198e-05 | 5.6466509716932e-05 | 22.51% | 29.04% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.287333391690703e-05 | 5.6512757203429465e-05 | 22.45% | 28.95% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.292069270860261e-05 | 5.659022475320515e-05 | 22.39% | 28.86% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.284491037367508e-05 | 5.6563441539528654e-05 | 22.35% | 28.78% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.3017118735085e-05 | 5.657647834496408e-05 | 22.52% | 29.06% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.290950901352708e-05 | 5.640935719458521e-05 | 22.63% | 29.25% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.391488883618555e-05 | 5.645148095157489e-05 | 23.63% | 30.94% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 7.302057259136018e-05 | 5.6510727283323605e-05 | 22.61% | 29.22% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.290171257977688e-05 | 5.654263252159141e-05 | 22.44% | 28.93% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.302465951381523e-05 | 5.6451868159692795e-05 | 22.69% | 29.36% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.293852602001632e-05 | 5.6503129000355304e-05 | 22.53% | 29.09% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.3014094793282e-05 | 5.907708423438114e-05 | 19.09% | 23.59% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.341576101028528e-05 | 5.65159550188812e-05 | 23.02% | 29.90% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 6.986832741690231e-05 | 5.436969759995811e-05 | 22.18% | 28.51% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 6.984329997026297e-05 | 5.4438374450999155e-05 | 22.06% | 28.30% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.315593411854978e-05 | 5.647920580473546e-05 | 22.80% | 29.53% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.299197514227356e-05 | 5.555439545684201e-05 | 23.89% | 31.39% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.400588657085844e-05 | 5.5672916768119405e-05 | 24.77% | 32.93% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.275090799728347e-05 | 5.5779685073812954e-05 | 23.33% | 30.43% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.424466543793452e-05 | 5.538263862232597e-05 | 25.41% | 34.06% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.450280664098598e-05 | 5.540186477375255e-05 | 25.64% | 34.48% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.172064685968218e-05 | 5.525748684759381e-05 | 22.95% | 29.79% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 6.876774560429291e-05 | 5.335000161793621e-05 | 22.42% | 28.90% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.208867389095708e-05 | 5.5415319722101486e-05 | 23.13% | 30.09% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.212343581340021e-05 | 5.559756333392831e-05 | 22.91% | 29.72% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.347075317729374e-05 | 5.568051641284196e-05 | 24.21% | 31.95% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 9.21856363276692e-05 | 7.33325201477324e-05 | 20.45% | 25.71% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 6.891118048028694e-05 | 5.3385182953340274e-05 | 22.53% | 29.08% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.324271544663145e-05 | 5.549145313846735e-05 | 24.24% | 31.99% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.211190069563682e-05 | 5.546934997080609e-05 | 23.08% | 30.00% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.218538386105948e-05 | 5.558693665140912e-05 | 22.99% | 29.86% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.272698355056676e-05 | 5.554230504348863e-05 | 23.63% | 30.94% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.234057790770806e-05 | 5.536703456043921e-05 | 23.46% | 30.66% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.069626290189428e-05 | 7.071638365519838e-05 | 22.03% | 28.25% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 6.9394376152163e-05 | 5.359547772764729e-05 | 22.77% | 29.48% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.139540659067035e-05 | 7.064151361697827e-05 | 22.71% | 29.38% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.233126980444934e-05 | 5.5877882348631294e-05 | 22.75% | 29.45% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.322063704091022e-05 | 5.583204990098775e-05 | 23.75% | 31.14% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.20926208997653e-05 | 5.5445396501304996e-05 | 23.09% | 30.02% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.221023967972222e-05 | 5.55320879802173e-05 | 23.10% | 30.03% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.280183793049413e-05 | 5.555086127496341e-05 | 23.70% | 31.05% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.223197630528042e-05 | 5.5704824252174104e-05 | 22.88% | 29.67% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 6.880968540595572e-05 | 5.331528023030516e-05 | 22.52% | 29.06% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 6.892906108443584e-05 | 5.351461815027657e-05 | 22.36% | 28.80% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.368197968800138e-05 | 5.537824472738509e-05 | 24.84% | 33.05% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.05585684227746e-05 | 5.464034267386709e-05 | 22.56% | 29.13% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.173989892322486e-05 | 5.4876910602679856e-05 | 23.51% | 30.73% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.217855928189707e-05 | 5.484830435348472e-05 | 24.01% | 31.60% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.224109044683241e-05 | 5.438633732086784e-05 | 24.72% | 32.83% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.06710260602011e-05 | 5.434358945305957e-05 | 23.10% | 30.04% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.193696699535087e-05 | 5.447661041092888e-05 | 24.27% | 32.05% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 6.779493097449289e-05 | 5.2216743288618706e-05 | 22.98% | 29.83% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.056976702614176e-05 | 5.423530542040291e-05 | 23.15% | 30.12% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.086515080926978e-05 | 5.456825635033535e-05 | 23.00% | 29.87% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.098072804186417e-05 | 5.463892390836499e-05 | 23.02% | 29.91% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.083574492804681e-05 | 7.29673420068858e-05 | 19.67% | 24.49% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.070943398134843e-05 | 5.463819622637065e-05 | 22.73% | 29.41% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.077179146053005e-05 | 5.448159200602568e-05 | 23.02% | 29.90% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.055086941629881e-05 | 5.437634080192383e-05 | 22.93% | 29.75% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.050228089345906e-05 | 5.440463591291326e-05 | 22.83% | 29.59% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.075727284203466e-05 | 5.444348804889495e-05 | 23.06% | 29.96% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.097777627741782e-05 | 5.441171544541896e-05 | 23.34% | 30.45% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 8.708547164120788e-05 | 7.000490778196494e-05 | 19.61% | 24.40% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.080251463101482e-05 | 5.451254084361597e-05 | 23.01% | 29.88% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 8.769738846868746e-05 | 6.950477181336091e-05 | 20.74% | 26.17% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.35955248041584e-05 | 5.4656470967261446e-05 | 25.73% | 34.65% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.072340570793348e-05 | 5.4390444988391607e-05 | 23.09% | 30.03% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.218141532964416e-05 | 5.4361667894540086e-05 | 24.69% | 32.78% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.204591268531245e-05 | 5.441143801505078e-05 | 24.48% | 32.41% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.06098446269339e-05 | 5.462843371368661e-05 | 22.63% | 29.25% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.222391780124886e-05 | 5.4639602106245636e-05 | 24.35% | 32.18% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 6.767096481862118e-05 | 5.231669891422452e-05 | 22.69% | 29.35% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 6.79050471666655e-05 | 5.228310466548619e-05 | 23.01% | 29.88% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.254889646404174e-05 | 5.43989412770652e-05 | 25.02% | 33.36% | 1.33x | ✅ |
| `hexbytes_new['']` | 6.876668975151168e-05 | 2.8972570417373532e-05 | 57.87% | 137.35% | 2.37x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.800609435464278e-05 | 4.579777213991183e-05 | 47.96% | 92.16% | 1.92x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 8.880634400778499e-05 | 4.611262835198712e-05 | 48.08% | 92.59% | 1.93x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.43371986167101e-05 | 4.2108351272861355e-05 | 50.07% | 100.29% | 2.00x | ✅ |
| `hexbytes_new['0x']` | 7.231425548736091e-05 | 2.977682824114285e-05 | 58.82% | 142.85% | 2.43x | ✅ |
| `hexbytes_new['0x1234']` | 8.116901354448263e-05 | 4.021947623978007e-05 | 50.45% | 101.82% | 2.02x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.152421114336562e-05 | 3.993568338746762e-05 | 51.01% | 104.14% | 2.04x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.132426749411426e-05 | 4.147839469539732e-05 | 49.00% | 96.06% | 1.96x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.12402026218184e-05 | 3.9684303567865386e-05 | 51.15% | 104.72% | 2.05x | ✅ |
| `hexbytes_new['abc']` | 8.017904480741318e-05 | 4.207112558390701e-05 | 47.53% | 90.58% | 1.91x | ✅ |
| `hexbytes_new['deadbeef']` | 7.571843732269104e-05 | 3.710096644273958e-05 | 51.00% | 104.09% | 2.04x | ✅ |
| `hexbytes_new[0-9]` | 3.852394588211625e-05 | 2.291814744328568e-05 | 40.51% | 68.09% | 1.68x | ✅ |
| `hexbytes_new[0]` | 0.00011821212156743458 | 5.910590552999366e-05 | 50.00% | 100.00% | 2.00x | ✅ |
| `hexbytes_new[123456]` | 0.0001219627438297232 | 6.274352726670955e-05 | 48.56% | 94.38% | 1.94x | ✅ |
| `hexbytes_new[2**16]` | 0.00012218911945781731 | 6.260801124127371e-05 | 48.76% | 95.17% | 1.95x | ✅ |
| `hexbytes_new[2**256-1]` | 0.0001289228874699584 | 6.997664834307135e-05 | 45.72% | 84.24% | 1.84x | ✅ |
| `hexbytes_new[2**32]` | 0.00012466424401429816 | 6.728766681624176e-05 | 46.02% | 85.27% | 1.85x | ✅ |
| `hexbytes_new[2**64]` | 0.0001254028463010536 | 6.827713762357884e-05 | 45.55% | 83.67% | 1.84x | ✅ |
| `hexbytes_new[2**8]` | 0.0001217511548300918 | 6.251109008499063e-05 | 48.66% | 94.77% | 1.95x | ✅ |
| `hexbytes_new[4-byte pattern]` | 3.917364022735853e-05 | 2.3472729108291718e-05 | 40.08% | 66.89% | 1.67x | ✅ |
| `hexbytes_new[False]` | 5.4290032266932226e-05 | 2.3923303281389068e-05 | 55.93% | 126.93% | 2.27x | ✅ |
| `hexbytes_new[True]` | 5.412375445754432e-05 | 2.3904532915400326e-05 | 55.83% | 126.42% | 2.26x | ✅ |
| `hexbytes_new[all byte values]` | 3.917038376054476e-05 | 2.3483644720930657e-05 | 40.05% | 66.80% | 1.67x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 3.877476389234553e-05 | 2.3239685319508003e-05 | 40.06% | 66.85% | 1.67x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 3.8779229974412915e-05 | 2.345202451566764e-05 | 39.52% | 65.36% | 1.65x | ✅ |
| `hexbytes_new[ascii sentence]` | 3.850699158196516e-05 | 2.2840702057955877e-05 | 40.68% | 68.59% | 1.69x | ✅ |
| `hexbytes_new[b'']` | 3.938748129682407e-05 | 2.3098876693226537e-05 | 41.35% | 70.52% | 1.71x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 3.843579039985335e-05 | 2.287646442448442e-05 | 40.48% | 68.01% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 3.859493763227808e-05 | 2.3062044598966258e-05 | 40.25% | 67.35% | 1.67x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 3.9007911101076435e-05 | 2.407389298259554e-05 | 38.28% | 62.03% | 1.62x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.223774070656074e-05 | 3.1077825648002245e-05 | 40.51% | 68.09% | 1.68x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 3.8681156039748076e-05 | 2.3031846976252453e-05 | 40.46% | 67.95% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 3.8576632409073085e-05 | 2.3063684851648908e-05 | 40.21% | 67.26% | 1.67x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 3.849453604263304e-05 | 2.2918634073986292e-05 | 40.46% | 67.96% | 1.68x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 3.8496213225488954e-05 | 2.2919683346444685e-05 | 40.46% | 67.96% | 1.68x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.013010047180541e-05 | 2.302888101556643e-05 | 42.61% | 74.26% | 1.74x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 3.87606546651407e-05 | 2.3227056333284144e-05 | 40.08% | 66.88% | 1.67x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.9514697123350624e-05 | 2.901871659662856e-05 | 41.39% | 70.63% | 1.71x | ✅ |
| `hexbytes_new[b'abc']` | 3.860311085585444e-05 | 2.3071634076465477e-05 | 40.23% | 67.32% | 1.67x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.58137110010102e-05 | 3.335586493907897e-05 | 49.32% | 97.31% | 1.97x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.662421438581901e-05 | 3.4076097252897843e-05 | 48.85% | 95.52% | 1.96x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.848538082841292e-05 | 3.4023621519216175e-05 | 50.32% | 101.29% | 2.01x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.327651101117634e-05 | 3.3328213679768714e-05 | 47.33% | 89.86% | 1.90x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.739573946456329e-05 | 3.352893037137377e-05 | 50.25% | 101.01% | 2.01x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.507441970798562e-05 | 3.316521913933558e-05 | 49.03% | 96.21% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.101162379295868e-05 | 3.1433495004462376e-05 | 48.48% | 94.10% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.645241301115545e-05 | 3.3243994222664205e-05 | 49.97% | 99.89% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.586308846259015e-05 | 3.3477275127104426e-05 | 49.17% | 96.74% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.712345189404173e-05 | 3.368486011243118e-05 | 49.82% | 99.27% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.456652297424243e-05 | 4.812113623004088e-05 | 43.10% | 75.74% | 1.76x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.675541893904094e-05 | 3.3474708810651e-05 | 49.85% | 99.42% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.569983645934888e-05 | 3.3548844174021015e-05 | 48.94% | 95.83% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.674232694611611e-05 | 3.3229805941783156e-05 | 50.21% | 100.85% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.657845342374495e-05 | 3.345177606694419e-05 | 49.76% | 99.03% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.682277039890169e-05 | 3.385018001167196e-05 | 49.34% | 97.41% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.710116547490317e-05 | 3.37501917201241e-05 | 49.70% | 98.82% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.048165927929144e-05 | 4.502435832530961e-05 | 44.06% | 78.75% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.593874889463422e-05 | 3.345313103478533e-05 | 49.27% | 97.11% | 1.97x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.125777342251283e-05 | 4.52947726129213e-05 | 44.26% | 79.40% | 1.79x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.532341950867054e-05 | 3.367816169658564e-05 | 48.44% | 93.96% | 1.94x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.589682051155003e-05 | 3.3267523237434607e-05 | 49.52% | 98.08% | 1.98x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.544256461530917e-05 | 3.335278773893933e-05 | 49.04% | 96.21% | 1.96x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.576645984171141e-05 | 3.347580045181043e-05 | 49.10% | 96.46% | 1.96x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.407803817193892e-05 | 3.333682714207668e-05 | 47.97% | 92.21% | 1.92x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.521005919822448e-05 | 3.492506331748557e-05 | 46.44% | 86.71% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.64834441503188e-05 | 3.3818467714837834e-05 | 49.13% | 96.59% | 1.97x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.5858885329154e-05 | 3.3531499682369735e-05 | 49.09% | 96.41% | 1.96x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.543431285620767e-05 | 3.366451545942646e-05 | 48.55% | 94.37% | 1.94x | ✅ |
| `hexbytes_new[long alternating]` | 4.947339351090659e-05 | 2.9004592945077693e-05 | 41.37% | 70.57% | 1.71x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.520469274336844e-05 | 3.850212226591552e-05 | 54.81% | 121.30% | 2.21x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 7.997176054362528e-05 | 3.936862569352076e-05 | 50.77% | 103.14% | 2.03x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.208295037296125e-05 | 3.939079677649638e-05 | 52.01% | 108.38% | 2.08x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.026522236820256e-05 | 3.854594622345157e-05 | 51.98% | 108.23% | 2.08x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.326689127776071e-05 | 3.882566237926523e-05 | 53.37% | 114.46% | 2.14x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.367984772057247e-05 | 3.842894526991402e-05 | 54.08% | 117.75% | 2.18x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.746046656592384e-05 | 3.619703924119515e-05 | 53.27% | 114.00% | 2.14x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.079992117025558e-05 | 3.8383679277901006e-05 | 52.50% | 110.51% | 2.11x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.402621395816599e-05 | 3.860759720267908e-05 | 54.05% | 117.64% | 2.18x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.46392643965632e-05 | 3.897008509966405e-05 | 53.96% | 117.19% | 2.17x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.0001006938287433875 | 5.910056063332774e-05 | 41.31% | 70.38% | 1.70x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.318329665836886e-05 | 3.9098842967001355e-05 | 53.00% | 112.75% | 2.13x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.430188534217267e-05 | 3.860280194488722e-05 | 54.21% | 118.38% | 2.18x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.462252365529583e-05 | 3.852159549267072e-05 | 54.48% | 119.68% | 2.20x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.438820082453282e-05 | 3.8563153344034685e-05 | 54.30% | 118.83% | 2.19x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.399205791436706e-05 | 3.8565637942148666e-05 | 54.08% | 117.79% | 2.18x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.294971425007057e-05 | 3.891498040875394e-05 | 53.09% | 113.16% | 2.13x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.947824339586385e-05 | 5.412726543171318e-05 | 45.59% | 83.79% | 1.84x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.213502721213893e-05 | 3.863067368048247e-05 | 52.97% | 112.62% | 2.13x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.885422927305928e-05 | 5.549935669150533e-05 | 43.86% | 78.12% | 1.78x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.35967766713576e-05 | 3.902789441527548e-05 | 53.31% | 114.20% | 2.14x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.109862336580092e-05 | 3.8518701361647206e-05 | 52.50% | 110.54% | 2.11x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.403137225163264e-05 | 3.86081132729968e-05 | 54.06% | 117.65% | 2.18x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.397654127649756e-05 | 3.862389637501455e-05 | 54.01% | 117.42% | 2.17x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.276624207896374e-05 | 3.8607136699028445e-05 | 53.35% | 114.38% | 2.14x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.289068614931964e-05 | 3.8899126172024666e-05 | 53.07% | 113.09% | 2.13x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.066408086032619e-05 | 3.863668971551732e-05 | 52.10% | 108.78% | 2.09x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.426550854848588e-05 | 3.9164436615635295e-05 | 53.52% | 115.16% | 2.15x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.109976200650555e-05 | 3.882389731295014e-05 | 52.13% | 108.89% | 2.09x | ✅ |
| `hexbytes_new[mixed pattern]` | 3.872036401376763e-05 | 2.310082395891594e-05 | 40.34% | 67.61% | 1.68x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 3.857544658438668e-05 | 2.2994906238535705e-05 | 40.39% | 67.76% | 1.68x | ✅ |
| `hexbytes_new[palindrome ascii]` | 3.850641137405818e-05 | 2.29920042622494e-05 | 40.29% | 67.48% | 1.67x | ✅ |
| `hexbytes_new[palindrome numeric]` | 3.862856574079673e-05 | 2.3297570927640855e-05 | 39.69% | 65.81% | 1.66x | ✅ |
| `hexbytes_new[palindrome]` | 3.852420824192729e-05 | 2.2973623160740706e-05 | 40.37% | 67.69% | 1.68x | ✅ |
| `hexbytes_new[repeated 0-9]` | 3.8596593372430795e-05 | 2.3221143120147048e-05 | 39.84% | 66.21% | 1.66x | ✅ |
| `hexbytes_new[single 0xff]` | 3.855874994730389e-05 | 2.2959124568688974e-05 | 40.46% | 67.95% | 1.68x | ✅ |
| `hexbytes_new[single null byte]` | 3.853906728707086e-05 | 2.2991598703648575e-05 | 40.34% | 67.62% | 1.68x | ✅ |
| `hexbytes_new[two patterns]` | 3.877652593742725e-05 | 2.3245394875056998e-05 | 40.05% | 66.81% | 1.67x | ✅ |
| `hexbytes_repr[0-9]` | 3.174065235508384e-05 | 1.5240578411455073e-05 | 51.98% | 108.26% | 2.08x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012076653667426921 | 3.904131825782219e-05 | 67.67% | 209.33% | 3.09x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001207962921698335 | 3.903652456827194e-05 | 67.68% | 209.44% | 3.09x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.948166982575859e-05 | 1.9974311370973366e-05 | 59.63% | 147.73% | 2.48x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.952369978919753e-05 | 2.000602155765525e-05 | 59.60% | 147.54% | 2.48x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.272816769451749e-05 | 1.903313862275384e-05 | 55.46% | 124.49% | 2.24x | ✅ |
| `hexbytes_repr[b'']` | 2.2806581502947724e-05 | 1.1875331020160849e-05 | 47.93% | 92.05% | 1.92x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.919214515453439e-05 | 1.718294702754347e-05 | 56.16% | 128.09% | 2.28x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.9472200339340534e-05 | 1.4531787012187359e-05 | 50.69% | 102.81% | 2.03x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.152761369805506e-05 | 2.3005989632713638e-05 | 62.61% | 167.44% | 2.67x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0006986715599296061 | 0.00019941206252802464 | 71.46% | 250.37% | 3.50x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.919523777267577e-05 | 1.4472524170717864e-05 | 50.43% | 101.73% | 2.02x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.9931606231029368e-05 | 1.481500535728114e-05 | 50.50% | 102.04% | 2.02x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.121549513349918e-05 | 1.4970929208736515e-05 | 52.04% | 108.51% | 2.09x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.120318538373436e-05 | 1.5002787287261703e-05 | 51.92% | 107.98% | 2.08x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.946658421774947e-05 | 1.4512978459725902e-05 | 50.75% | 103.04% | 2.03x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.027324923234304e-05 | 2.002156916285927e-05 | 60.17% | 151.10% | 2.51x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00037462227663732976 | 0.00011142368625463135 | 70.26% | 236.21% | 3.36x | ✅ |
| `hexbytes_repr[b'abc']` | 2.916357197361113e-05 | 1.4496392122801927e-05 | 50.29% | 101.18% | 2.01x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003765124117203036 | 0.00011085670627907839 | 70.56% | 239.64% | 3.40x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.56234261019909e-05 | 3.3623171225121334e-05 | 64.84% | 184.40% | 2.84x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.1746994412275706e-05 | 1.5237584643286198e-05 | 52.00% | 108.35% | 2.08x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.0716600935300756e-05 | 1.4882364723963725e-05 | 51.55% | 106.40% | 2.06x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9775505353243388e-05 | 1.4659385611071357e-05 | 50.77% | 103.12% | 2.03x | ✅ |
| `hexbytes_repr[palindrome]` | 3.511495757721712e-05 | 1.6061281767325825e-05 | 54.26% | 118.63% | 2.19x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.265847202083006e-05 | 2.2985946341456795e-05 | 63.32% | 172.59% | 2.73x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.8532106453461477e-05 | 1.4211527830377149e-05 | 50.19% | 100.77% | 2.01x | ✅ |
| `hexbytes_repr[single null byte]` | 2.8387801611504945e-05 | 1.4254065983699205e-05 | 49.79% | 99.16% | 1.99x | ✅ |
| `hexbytes_repr[two patterns]` | 4.951749703695525e-05 | 1.9994835694484417e-05 | 59.62% | 147.65% | 2.48x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.675959820744343e-05 | 1.455368643438285e-05 | 13.16% | 15.16% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.107678101044048e-05 | 3.82949756963772e-05 | 6.77% | 7.26% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.094959578642404e-05 | 3.8274991883650565e-05 | 6.53% | 6.99% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.186672495015102e-05 | 1.92421407023227e-05 | 12.00% | 13.64% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1947040641228042e-05 | 1.922904083370683e-05 | 12.38% | 14.13% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0036903353358537e-05 | 1.7536296733113937e-05 | 12.48% | 14.26% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 9.938907810406929e-06 | 1.120974623277901e-05 | -12.79% | -11.34% | 0.89x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.902013528221202e-05 | 1.640555769674927e-05 | 13.75% | 15.94% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6029911746522358e-05 | 1.3802740971608384e-05 | 13.89% | 16.14% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.4734977925383105e-05 | 2.2301022828680978e-05 | 9.84% | 10.91% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00020090879297046134 | 0.00019646487437970268 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.5976953823870158e-05 | 1.3731256252460203e-05 | 14.06% | 16.35% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6144154005351454e-05 | 1.3937188796056964e-05 | 13.67% | 15.84% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6507151406260362e-05 | 1.429174493108783e-05 | 13.42% | 15.50% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.651907121403648e-05 | 1.4289125618423813e-05 | 13.50% | 15.61% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.601448256393764e-05 | 1.3797817059418135e-05 | 13.84% | 16.07% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1808332736598198e-05 | 1.9223695895064903e-05 | 11.85% | 13.45% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00011451773158086773 | 0.00011038831726910694 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.5998758495223025e-05 | 1.3729611786654992e-05 | 14.18% | 16.53% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00011301599904590221 | 0.00010996814617542237 | 2.70% | 2.77% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.4057205233823726e-05 | 3.159510250321784e-05 | 7.23% | 7.79% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.6989830246751506e-05 | 1.4524961764604716e-05 | 14.51% | 16.97% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.635102645086352e-05 | 1.4185799239231489e-05 | 13.24% | 15.26% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.610484752217119e-05 | 1.3915274185797456e-05 | 13.60% | 15.74% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7849568195242316e-05 | 1.5295980949454548e-05 | 14.31% | 16.69% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.4730852909767876e-05 | 2.2294547379391227e-05 | 9.85% | 10.93% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5708817772314688e-05 | 1.34637082435546e-05 | 14.29% | 16.68% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5757367880517595e-05 | 1.3440613190374174e-05 | 14.70% | 17.24% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.17040903725315e-05 | 1.934418233970517e-05 | 10.87% | 12.20% | 1.12x | ✅ |
