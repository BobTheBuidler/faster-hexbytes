#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/major-github-artifact-actions/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/major-github-artifact-actions/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.699284812371569e-05 | 2.387724337546615e-05 | 11.54% | 13.05% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6528717747812188e-05 | 2.3714804008542642e-05 | 10.61% | 11.87% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6680529181423587e-05 | 2.382553077479985e-05 | 10.70% | 11.98% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6706398936264575e-05 | 2.374262551722695e-05 | 11.10% | 12.48% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6852924692606146e-05 | 2.383640498489301e-05 | 11.23% | 12.66% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6815520307827452e-05 | 2.4140252575207425e-05 | 9.98% | 11.08% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.667993461881602e-05 | 2.373535458025635e-05 | 11.04% | 12.41% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.692336563849457e-05 | 2.3815128587519987e-05 | 11.54% | 13.05% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6813434314499548e-05 | 2.3689196400872738e-05 | 11.65% | 13.19% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6605682224852044e-05 | 2.3918694701197867e-05 | 10.10% | 11.23% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.696644360681423e-05 | 2.3629848869118637e-05 | 12.37% | 14.12% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.674382213863296e-05 | 2.3508209207133113e-05 | 12.10% | 13.76% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6833627370076098e-05 | 2.352783925670535e-05 | 12.32% | 14.05% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.7427369357451827e-05 | 2.380256175681218e-05 | 13.22% | 15.23% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6960206893153034e-05 | 2.354958370292654e-05 | 12.65% | 14.48% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6664830428358617e-05 | 2.3521684806160492e-05 | 11.79% | 13.36% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.6667174314291816e-05 | 2.3648259884429018e-05 | 11.32% | 12.77% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6688767517238085e-05 | 2.3640418978528752e-05 | 11.42% | 12.89% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.660332505916073e-05 | 2.3739937210840887e-05 | 10.76% | 12.06% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6787720641766655e-05 | 2.3202503561906954e-05 | 13.38% | 15.45% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6856632349219664e-05 | 2.3733061561461513e-05 | 11.63% | 13.16% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6680237715339663e-05 | 2.3739717744825157e-05 | 11.02% | 12.39% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6932381587698162e-05 | 2.3862944328470197e-05 | 11.40% | 12.86% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.7023062935475027e-05 | 2.3726285236984896e-05 | 12.20% | 13.90% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6944534659881433e-05 | 2.3624750616549822e-05 | 12.32% | 14.05% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.688811799536863e-05 | 2.35017708777318e-05 | 12.59% | 14.41% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6037726152771073e-05 | 2.2957120829339336e-05 | 11.83% | 13.42% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6216381305557608e-05 | 2.3136822535837117e-05 | 11.75% | 13.31% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6084977731305755e-05 | 2.2992609245954016e-05 | 11.85% | 13.45% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6085951555031356e-05 | 2.295371668094663e-05 | 12.01% | 13.65% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6082047223034885e-05 | 2.3279473312038646e-05 | 10.75% | 12.04% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6224848932394513e-05 | 2.289343678329909e-05 | 12.70% | 14.55% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.5956652496742482e-05 | 2.31284182544246e-05 | 10.90% | 12.23% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6275894610969792e-05 | 2.326766615119008e-05 | 11.45% | 12.93% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.5976580906905654e-05 | 2.317446994334722e-05 | 10.79% | 12.09% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6232694980824638e-05 | 2.311699432565317e-05 | 11.88% | 13.48% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.614079194297468e-05 | 2.323891136331059e-05 | 11.10% | 12.49% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5617291776710054e-05 | 2.3219366664789926e-05 | 9.36% | 10.33% | 1.10x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6194228112375855e-05 | 2.3148471130414242e-05 | 11.63% | 13.16% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6126799736579606e-05 | 2.32541560217584e-05 | 11.00% | 12.35% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.604602089289372e-05 | 2.324003431406007e-05 | 10.77% | 12.07% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.602181755027181e-05 | 2.3155142821128284e-05 | 11.02% | 12.38% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6237930861741383e-05 | 2.3217382737202295e-05 | 11.51% | 13.01% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.634568560281659e-05 | 2.3077592968590024e-05 | 12.40% | 14.16% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6311275091874145e-05 | 2.3017290027724672e-05 | 12.52% | 14.31% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.5994966197280544e-05 | 2.3079252473412552e-05 | 11.22% | 12.63% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6216690973321553e-05 | 2.320019106081461e-05 | 11.51% | 13.00% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.688320368131583e-05 | 2.3307928922924874e-05 | 13.30% | 15.34% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.607544117966385e-05 | 2.3093199970136476e-05 | 11.44% | 12.91% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6181424357735558e-05 | 2.325133157671347e-05 | 11.19% | 12.60% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.619378787366942e-05 | 2.2826440315900553e-05 | 12.86% | 14.75% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.610601294914406e-05 | 2.2875058311272803e-05 | 12.38% | 14.12% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6158317278597522e-05 | 2.301319469261355e-05 | 12.02% | 13.67% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.622684634710149e-05 | 2.308650036921069e-05 | 11.97% | 13.60% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.5915163703267794e-05 | 2.2987148366291636e-05 | 11.30% | 12.74% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.60974984660469e-05 | 2.3065617511057723e-05 | 11.62% | 13.14% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.6308656336688353e-05 | 2.3061516199716593e-05 | 12.34% | 14.08% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.6269751531385702e-05 | 2.2993659961419462e-05 | 12.47% | 14.25% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6056445283558326e-05 | 2.291594257701679e-05 | 12.05% | 13.70% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6424371150868767e-05 | 2.2911430106838594e-05 | 13.29% | 15.33% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.6267505803883672e-05 | 2.2953084138825026e-05 | 12.62% | 14.44% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6150605144867534e-05 | 2.3122801982299827e-05 | 11.58% | 13.09% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.613188864358434e-05 | 2.3059818757363605e-05 | 11.76% | 13.32% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.5988573840850864e-05 | 2.3042115471998876e-05 | 11.34% | 12.79% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.586206705963233e-05 | 2.3130340253615346e-05 | 10.56% | 11.81% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6320939043200856e-05 | 2.3110317844890602e-05 | 12.20% | 13.89% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.620331836608294e-05 | 2.2867905305404555e-05 | 12.73% | 14.59% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6439215276729344e-05 | 2.3030249530243143e-05 | 12.89% | 14.80% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.609636645728723e-05 | 2.3257037762679903e-05 | 10.88% | 12.21% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.62643675796953e-05 | 2.3066382173339127e-05 | 12.18% | 13.86% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.5993646591401447e-05 | 2.3209299657243054e-05 | 10.71% | 12.00% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6248848970269332e-05 | 2.253291352878192e-05 | 14.16% | 16.49% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.58460465528366e-05 | 2.3018464958836327e-05 | 10.94% | 12.28% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.624817805252429e-05 | 2.30660067229917e-05 | 12.12% | 13.80% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.591631188440513e-05 | 2.325097027106473e-05 | 10.28% | 11.46% | 1.11x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6110069480088975e-05 | 2.3207970518813125e-05 | 11.11% | 12.50% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.647204272527774e-05 | 2.304133815695687e-05 | 12.96% | 14.89% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.6229567485888077e-05 | 2.2762840980498835e-05 | 13.22% | 15.23% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.637955376889222e-05 | 2.2916735163774663e-05 | 13.13% | 15.11% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.60298123278601e-05 | 2.2770587141866773e-05 | 12.52% | 14.31% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.618005092103599e-05 | 2.3094577744952603e-05 | 11.79% | 13.36% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.616918261225272e-05 | 2.3333460996410145e-05 | 10.84% | 12.15% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.623879997222526e-05 | 2.3096613717457425e-05 | 11.98% | 13.60% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6215213899049025e-05 | 2.2855986988338393e-05 | 12.81% | 14.70% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.618854496577224e-05 | 2.3143184253710805e-05 | 11.63% | 13.16% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6147000705509526e-05 | 2.279987660986249e-05 | 12.80% | 14.68% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.6393378973581425e-05 | 2.3130888438616655e-05 | 12.36% | 14.10% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.6262651496898483e-05 | 2.2837930914577735e-05 | 13.04% | 15.00% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6199706081783835e-05 | 2.3457768464130145e-05 | 10.47% | 11.69% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.5702814912884828e-05 | 2.2905218198805576e-05 | 10.88% | 12.21% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6125178628658196e-05 | 2.2792589508924946e-05 | 12.76% | 14.62% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.606680793025587e-05 | 2.2791201074925572e-05 | 12.57% | 14.37% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6121098083216692e-05 | 2.2992491757496837e-05 | 11.98% | 13.61% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6281602022435715e-05 | 2.2760293756148786e-05 | 13.40% | 15.47% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6005212222157666e-05 | 2.3025426782680584e-05 | 11.46% | 12.94% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.62390806486948e-05 | 2.304807893944347e-05 | 12.16% | 13.84% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6051895093193143e-05 | 2.2899065441569897e-05 | 12.10% | 13.77% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6439071884345063e-05 | 2.2890891519170952e-05 | 13.42% | 15.50% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6348968654315083e-05 | 2.2920630228814642e-05 | 13.01% | 14.96% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6366330210599066e-05 | 2.2735752684862095e-05 | 13.77% | 15.97% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6301591193107484e-05 | 2.2672031032964314e-05 | 13.80% | 16.01% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.627177747190276e-05 | 2.3037647099558097e-05 | 12.31% | 14.04% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.593837951535433e-05 | 2.3053179572315545e-05 | 11.12% | 12.52% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6141251883824707e-05 | 2.294040607983822e-05 | 12.24% | 13.95% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6197975284072818e-05 | 2.275900331788113e-05 | 13.13% | 15.11% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.5946649250122755e-05 | 2.2913350143786045e-05 | 11.69% | 13.24% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.624443994446767e-05 | 2.303719401874625e-05 | 12.22% | 13.92% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.612132298704566e-05 | 2.2819729695346982e-05 | 12.64% | 14.47% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6150062471825376e-05 | 2.287233757221888e-05 | 12.53% | 14.33% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.622781439321141e-05 | 2.2837604427574267e-05 | 12.93% | 14.84% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.6252345588937898e-05 | 2.2867929390304323e-05 | 12.89% | 14.80% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6121832238627134e-05 | 2.292156187592091e-05 | 12.25% | 13.96% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.599914162626315e-05 | 2.3157652311392482e-05 | 10.93% | 12.27% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.582521681515071e-05 | 2.3218410275443475e-05 | 10.09% | 11.23% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.5821887784932414e-05 | 2.2952700796472573e-05 | 11.11% | 12.50% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.5911742516996117e-05 | 2.3047045519197588e-05 | 11.06% | 12.43% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.600314799684087e-05 | 2.3049196412224734e-05 | 11.36% | 12.82% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6039595678872916e-05 | 2.3196132951909603e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6296733483942776e-05 | 2.2817812829108354e-05 | 13.23% | 15.25% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.5912471932128507e-05 | 2.3149178438633466e-05 | 10.66% | 11.94% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.607298475345522e-05 | 2.3309425180260164e-05 | 10.60% | 11.86% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.5892578451813022e-05 | 2.3224749355893848e-05 | 10.30% | 11.49% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6042841824898353e-05 | 2.2936249335174843e-05 | 11.93% | 13.54% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.5786591634646758e-05 | 2.299564286663117e-05 | 10.82% | 12.14% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6309387682090134e-05 | 2.3051796109591546e-05 | 12.38% | 14.13% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.5840343196274463e-05 | 2.284225742420608e-05 | 11.60% | 13.13% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.5858605472151835e-05 | 2.2809377220894584e-05 | 11.79% | 13.37% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6034795755780654e-05 | 2.2972675233238778e-05 | 11.76% | 13.33% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.5835023518265273e-05 | 2.3135233443127304e-05 | 10.45% | 11.67% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.5980155513850853e-05 | 2.3343966671224323e-05 | 10.15% | 11.29% | 1.11x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6126109689768472e-05 | 2.2947113230952716e-05 | 12.17% | 13.85% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.5897894695900052e-05 | 2.265946274995373e-05 | 12.50% | 14.29% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6055705586290303e-05 | 2.2852249255155992e-05 | 12.29% | 14.02% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.732618040318236e-05 | 2.3116302852465562e-05 | 15.41% | 18.21% | 1.18x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.594758373606906e-05 | 2.2902593809102555e-05 | 11.74% | 13.30% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6082900607472847e-05 | 2.3209703308560947e-05 | 11.02% | 12.38% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6010925935521023e-05 | 2.3586013282705865e-05 | 9.32% | 10.28% | 1.10x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6156988775670073e-05 | 2.3066847325214905e-05 | 11.81% | 13.40% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.558419781537307e-05 | 2.3073430564353584e-05 | 9.81% | 10.88% | 1.11x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.62673033891102e-05 | 2.3064126132026852e-05 | 12.19% | 13.89% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.588297244872026e-05 | 2.2928387145607088e-05 | 11.42% | 12.89% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.5750233368671266e-05 | 2.300369241417638e-05 | 10.67% | 11.94% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.597360584910666e-05 | 2.3078035380936372e-05 | 11.15% | 12.55% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6000420115043684e-05 | 2.3112527681930376e-05 | 11.11% | 12.49% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.596821262232187e-05 | 2.291365143310755e-05 | 11.76% | 13.33% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.5969203528793924e-05 | 2.310722897248887e-05 | 11.02% | 12.39% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6144255713518386e-05 | 2.308151453052479e-05 | 11.71% | 13.27% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.6026142519917185e-05 | 2.2725880489977248e-05 | 12.68% | 14.52% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6110836350207384e-05 | 2.2912143063646e-05 | 12.25% | 13.96% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6199594584862128e-05 | 2.3182917483171782e-05 | 11.51% | 13.01% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.5995926484884628e-05 | 2.3220495995114258e-05 | 10.68% | 11.95% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.597198155250529e-05 | 2.2974130303950166e-05 | 11.54% | 13.05% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.602604940386583e-05 | 2.305273341671263e-05 | 11.42% | 12.90% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.5978296488515384e-05 | 2.3001355917593302e-05 | 11.46% | 12.94% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.591069255822455e-05 | 2.2865982617727276e-05 | 11.75% | 13.32% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6370998183842226e-05 | 2.3006009476538555e-05 | 12.76% | 14.63% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.5521556013299386e-05 | 2.3082752488204584e-05 | 9.56% | 10.57% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.5975397246174063e-05 | 2.3205196037870855e-05 | 10.66% | 11.94% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.5800204612714532e-05 | 2.318885505634739e-05 | 10.12% | 11.26% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.6230889261671005e-05 | 2.3214610321081242e-05 | 11.50% | 12.99% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.60353936989646e-05 | 2.3002940590090025e-05 | 11.65% | 13.18% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6188287036772495e-05 | 2.3092140214571397e-05 | 11.82% | 13.41% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6043842689639695e-05 | 2.3089022371287045e-05 | 11.35% | 12.80% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.5914390314648972e-05 | 2.329410483350714e-05 | 10.11% | 11.25% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6034882087316064e-05 | 2.3389584523307932e-05 | 10.16% | 11.31% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.608397463030669e-05 | 2.32797354871524e-05 | 10.75% | 12.05% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.619051750223865e-05 | 2.323710252914484e-05 | 11.28% | 12.71% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.5959219527274146e-05 | 2.3031894407386072e-05 | 11.28% | 12.71% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6175454986453633e-05 | 2.3502786386049804e-05 | 10.21% | 11.37% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.584968185821321e-05 | 2.298341859200881e-05 | 11.09% | 12.47% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.5919745753492624e-05 | 2.326746755499569e-05 | 10.23% | 11.40% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6312626114910076e-05 | 2.3345917315594603e-05 | 11.27% | 12.71% | 1.13x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.919909278135348e-05 | 5.758577856254301e-05 | 27.29% | 37.53% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.878795590542155e-05 | 5.818532690331393e-05 | 26.15% | 35.41% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.746873271867573e-05 | 5.801722752059416e-05 | 25.11% | 33.53% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.94167768338236e-05 | 5.75071337396083e-05 | 27.59% | 38.10% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.950342183064122e-05 | 5.674827827092998e-05 | 28.62% | 40.10% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.970933448736914e-05 | 5.8534298829364003e-05 | 26.57% | 36.18% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.722751440377398e-05 | 5.510806112574233e-05 | 28.64% | 40.14% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.9090173395875e-05 | 5.8345991181463076e-05 | 26.23% | 35.55% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.916137801675388e-05 | 5.863370971592412e-05 | 25.93% | 35.01% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.933447506168844e-05 | 5.73763090660479e-05 | 27.68% | 38.27% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.908688094408424e-05 | 5.7937481296241195e-05 | 26.74% | 36.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.874292557891619e-05 | 5.9166820485147315e-05 | 24.86% | 33.09% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.932084294569124e-05 | 5.8074984698091045e-05 | 26.78% | 36.58% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.030743250377108e-05 | 5.7464161356183105e-05 | 28.44% | 39.75% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.04159254265349e-05 | 5.773989868066279e-05 | 28.20% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.980122441081726e-05 | 5.865156774443944e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.91782261830623e-05 | 5.896805098468676e-05 | 25.52% | 34.27% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.948069504603049e-05 | 5.83000718998598e-05 | 26.65% | 36.33% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.917070086981926e-05 | 5.854384163880343e-05 | 26.05% | 35.23% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.854274198065958e-05 | 5.8399397602968244e-05 | 25.65% | 34.49% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.874934406874808e-05 | 5.858812381117412e-05 | 25.60% | 34.41% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.964591102453515e-05 | 5.8220793674821165e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.865791289888785e-05 | 5.8491388594232563e-05 | 25.64% | 34.48% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.968407205146782e-05 | 5.7697104355816475e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.934759600722758e-05 | 5.800141879061518e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.019269431600522e-05 | 5.918988329911757e-05 | 26.19% | 35.48% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.893607099431221e-05 | 5.523915114887703e-05 | 30.02% | 42.90% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.651145349789104e-05 | 5.5390234535053986e-05 | 27.61% | 38.13% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.879058812821216e-05 | 5.8732610805319625e-05 | 25.46% | 34.15% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.039639958336203e-05 | 5.8246794962674625e-05 | 27.55% | 38.03% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.07468994493185e-05 | 5.834469072156893e-05 | 27.74% | 38.40% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.075624276131661e-05 | 5.7894247190108665e-05 | 28.31% | 39.49% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.043459912878839e-05 | 5.786320536767274e-05 | 28.06% | 39.01% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.999936351576066e-05 | 5.795776266737713e-05 | 27.55% | 38.03% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.00348222189671e-05 | 5.8661563292679854e-05 | 26.70% | 36.43% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.78575330715514e-05 | 5.625122403055534e-05 | 27.75% | 38.41% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.052975183161953e-05 | 5.876368132267771e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.083089957051757e-05 | 5.850447609131505e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.165469959933625e-05 | 5.830532666868056e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.093826189033688e-05 | 5.784850012013259e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.101821907258709e-05 | 5.854953101859978e-05 | 27.73% | 38.38% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.127130964415603e-05 | 5.867740039233637e-05 | 27.80% | 38.51% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.099551422080745e-05 | 5.865492102093966e-05 | 27.58% | 38.09% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.072050353951557e-05 | 5.8620639297696545e-05 | 27.38% | 37.70% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.075104282029601e-05 | 5.827609546353953e-05 | 27.83% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.98055189077612e-05 | 5.859301241539848e-05 | 26.58% | 36.20% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.123491146886374e-05 | 5.748582886014131e-05 | 29.24% | 41.31% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.952149678271978e-05 | 5.863149061524567e-05 | 26.27% | 35.63% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.036791814347688e-05 | 5.7773797731926134e-05 | 28.11% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.084175355250435e-05 | 5.817302291709485e-05 | 28.04% | 38.97% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.074421984149332e-05 | 5.916047020252736e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.0743428843258e-05 | 5.8375090638774084e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.984815964772924e-05 | 5.84695594527597e-05 | 26.77% | 36.56% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.101078167064626e-05 | 5.812593722988599e-05 | 28.25% | 39.37% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.977064017115294e-05 | 5.772159319584129e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.747938847777285e-05 | 5.5370069606847596e-05 | 28.54% | 39.93% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.773344149418393e-05 | 5.615425139208801e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.981021090465309e-05 | 5.83725133874474e-05 | 26.86% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.976742990930509e-05 | 5.743943400752523e-05 | 27.99% | 38.87% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.959241409112419e-05 | 5.8489259664851905e-05 | 26.51% | 36.08% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.936513441954274e-05 | 5.814676750935044e-05 | 26.74% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.100107218227586e-05 | 5.839589104077739e-05 | 27.91% | 38.71% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.974505206504112e-05 | 5.8265608576961156e-05 | 26.94% | 36.86% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.937797457815576e-05 | 5.8429389808739865e-05 | 26.39% | 35.85% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.807590053696972e-05 | 5.63272755746776e-05 | 27.86% | 38.61% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.960115533561367e-05 | 5.832783213771314e-05 | 26.72% | 36.47% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.063774241753704e-05 | 5.744169882908981e-05 | 28.77% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.06254843689794e-05 | 5.817991968803789e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.924159341783044e-05 | 5.88927926505087e-05 | 25.68% | 34.55% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.106874319151353e-05 | 5.770198430378024e-05 | 28.82% | 40.50% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.06024812217186e-05 | 5.853946845398412e-05 | 27.37% | 37.69% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.041155846732028e-05 | 5.869996831675613e-05 | 27.00% | 36.99% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.048848233299092e-05 | 5.798035224428038e-05 | 27.96% | 38.82% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.093757108138905e-05 | 5.8291099625843756e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.000622639254552e-05 | 5.798355805675616e-05 | 27.53% | 37.98% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.091211907486256e-05 | 5.8378517078838205e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.993204957126365e-05 | 5.7630036281554586e-05 | 27.90% | 38.70% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.160018234591409e-05 | 5.8127965386399064e-05 | 28.76% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.090402011053236e-05 | 5.795296350015236e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.026368385387598e-05 | 5.75212285870306e-05 | 28.33% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.118613608031157e-05 | 5.7966747416516767e-05 | 28.60% | 40.06% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.04730108041328e-05 | 5.758006755525704e-05 | 28.45% | 39.76% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.041402194331792e-05 | 5.821797232420267e-05 | 27.60% | 38.13% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.962155773730246e-05 | 5.94069570885951e-05 | 25.39% | 34.03% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.865419255424606e-05 | 5.5986079436062954e-05 | 28.82% | 40.49% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.010610066310815e-05 | 5.5759504922125906e-05 | 30.39% | 43.66% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.203358391510495e-05 | 5.7937295855999934e-05 | 29.37% | 41.59% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.72202436172544e-05 | 5.685006713509616e-05 | 26.38% | 35.83% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.874623582780978e-05 | 5.6196902795469115e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.929568347105042e-05 | 5.628540331600729e-05 | 29.02% | 40.88% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.89618773250016e-05 | 5.6744570316015385e-05 | 28.14% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.85369723028214e-05 | 5.641707253619484e-05 | 28.16% | 39.21% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.798097984047064e-05 | 5.689889416190228e-05 | 27.03% | 37.05% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.769755975844741e-05 | 5.5335579165087455e-05 | 28.78% | 40.41% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.917541840858392e-05 | 5.658408423391433e-05 | 28.53% | 39.93% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.884889489754363e-05 | 5.746008743794201e-05 | 27.13% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.864491839273751e-05 | 5.649661942066189e-05 | 28.16% | 39.20% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010180163863976143 | 7.777676257240386e-05 | 23.60% | 30.89% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.814833574561314e-05 | 5.5146672694395674e-05 | 29.43% | 41.71% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.940661232398811e-05 | 5.833430349362064e-05 | 26.54% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.887935588246987e-05 | 5.699664019817586e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.991284845108305e-05 | 5.7449694230941226e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.03208425312991e-05 | 5.718867749518154e-05 | 28.80% | 40.45% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.861370101807126e-05 | 5.6260218923209585e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.649606439896262e-05 | 7.11098357831355e-05 | 26.31% | 35.70% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.713316647276989e-05 | 5.476806514045596e-05 | 29.00% | 40.84% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.68723610527244e-05 | 7.24138787650194e-05 | 25.25% | 33.78% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.986977490344469e-05 | 5.690476050480387e-05 | 28.75% | 40.36% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.845854000985832e-05 | 5.672300685024079e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.916378365339901e-05 | 5.74630887566603e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.827871490664056e-05 | 5.702774920318366e-05 | 27.15% | 37.26% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.954564839844907e-05 | 5.6644398266593765e-05 | 28.79% | 40.43% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.902662998973677e-05 | 5.789273972558945e-05 | 26.74% | 36.51% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.817202717077382e-05 | 5.5472766461535035e-05 | 29.04% | 40.92% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.747019955494626e-05 | 5.5182539599850514e-05 | 28.77% | 40.39% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.898236631737755e-05 | 5.778463104983792e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.699270914409514e-05 | 5.6975978246746265e-05 | 26.00% | 35.13% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.751068557009749e-05 | 5.641175881422454e-05 | 27.22% | 37.40% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.731223359710963e-05 | 5.6859005980446965e-05 | 26.46% | 35.97% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.609460211395563e-05 | 5.700037823242429e-05 | 25.09% | 33.50% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.720791337810012e-05 | 5.694709845338603e-05 | 26.24% | 35.58% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.767477051033727e-05 | 5.61116135402044e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.569178489207092e-05 | 5.4116974114419595e-05 | 28.50% | 39.87% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.89233442293375e-05 | 5.5688657036855417e-05 | 29.44% | 41.72% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.761598803615178e-05 | 5.6846482843971854e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.736762962991127e-05 | 5.7060089036166385e-05 | 26.25% | 35.59% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010175289920350769 | 7.781575796428416e-05 | 23.52% | 30.76% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.845657398362882e-05 | 5.743021223032224e-05 | 26.80% | 36.61% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.673837763281376e-05 | 5.7128795080975375e-05 | 25.55% | 34.33% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.76469479635929e-05 | 5.692229598080565e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.594245161536957e-05 | 5.644320853406926e-05 | 25.68% | 34.55% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.722710053187973e-05 | 5.747929454488819e-05 | 25.57% | 34.36% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.751831397952142e-05 | 5.669322720431252e-05 | 26.86% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.468571957524987e-05 | 7.016609312490737e-05 | 25.90% | 34.95% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.845053983891334e-05 | 5.6669916805609975e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.669523789745576e-05 | 7.737374363933737e-05 | 19.98% | 24.97% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.902785468616136e-05 | 5.621304456259461e-05 | 28.87% | 40.59% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.708951798561987e-05 | 5.7233729497990477e-05 | 25.76% | 34.69% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.694152423991806e-05 | 5.7526899036916105e-05 | 25.23% | 33.75% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.72595475455391e-05 | 5.751150952449146e-05 | 25.56% | 34.34% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.76843705043797e-05 | 5.6742906658592306e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.698782809859204e-05 | 5.844147682933518e-05 | 24.09% | 31.73% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.604616282308626e-05 | 5.4010949026156305e-05 | 28.98% | 40.80% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.5390740926393e-05 | 5.424857382987221e-05 | 28.04% | 38.97% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.74455349543417e-05 | 5.7137539780101806e-05 | 26.22% | 35.54% | 1.36x | ✅ |
| `hexbytes_new['']` | 7.147654141277428e-05 | 3.5169382331452456e-05 | 50.80% | 103.24% | 2.03x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.112054748785438e-05 | 5.0354082678823985e-05 | 44.74% | 80.96% | 1.81x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.154690655334664e-05 | 5.047757818711986e-05 | 44.86% | 81.36% | 1.81x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.719609335414177e-05 | 4.644995451829293e-05 | 46.73% | 87.72% | 1.88x | ✅ |
| `hexbytes_new['0x']` | 7.575914418424232e-05 | 3.6490163030766436e-05 | 51.83% | 107.62% | 2.08x | ✅ |
| `hexbytes_new['0x1234']` | 8.564414635231415e-05 | 4.4382366703285335e-05 | 48.18% | 92.97% | 1.93x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.463382285317422e-05 | 4.4050151665328225e-05 | 47.95% | 92.13% | 1.92x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.4789619449611e-05 | 4.406642154156774e-05 | 48.03% | 92.41% | 1.92x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.344533660570328e-05 | 4.505047748691326e-05 | 46.01% | 85.23% | 1.85x | ✅ |
| `hexbytes_new['abc']` | 8.258001937219235e-05 | 4.5455304768506755e-05 | 44.96% | 81.67% | 1.82x | ✅ |
| `hexbytes_new['deadbeef']` | 7.69675357379011e-05 | 4.054480337880718e-05 | 47.32% | 89.83% | 1.90x | ✅ |
| `hexbytes_new[0-9]` | 4.146944339817899e-05 | 2.4834237240586534e-05 | 40.11% | 66.98% | 1.67x | ✅ |
| `hexbytes_new[0]` | 0.00011908065860713998 | 5.9438048331941086e-05 | 50.09% | 100.34% | 2.00x | ✅ |
| `hexbytes_new[123456]` | 0.0001243953417654958 | 6.257082983893161e-05 | 49.70% | 98.81% | 1.99x | ✅ |
| `hexbytes_new[2**16]` | 0.00012319813704850943 | 6.238205388841618e-05 | 49.36% | 97.49% | 1.97x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012869631625098173 | 6.768311309683078e-05 | 47.41% | 90.15% | 1.90x | ✅ |
| `hexbytes_new[2**32]` | 0.0001255321483600782 | 6.512506265925854e-05 | 48.12% | 92.76% | 1.93x | ✅ |
| `hexbytes_new[2**64]` | 0.00012551707732735086 | 6.673708286596059e-05 | 46.83% | 88.08% | 1.88x | ✅ |
| `hexbytes_new[2**8]` | 0.0001226522914957449 | 6.260749288160546e-05 | 48.96% | 95.91% | 1.96x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.3969633278076536e-05 | 2.5322234778551525e-05 | 42.41% | 73.64% | 1.74x | ✅ |
| `hexbytes_new[False]` | 5.9447642292294487e-05 | 2.5942527732359497e-05 | 56.36% | 129.15% | 2.29x | ✅ |
| `hexbytes_new[True]` | 5.948177556372083e-05 | 2.576738328621809e-05 | 56.68% | 130.84% | 2.31x | ✅ |
| `hexbytes_new[all byte values]` | 4.303763376809874e-05 | 2.519786249323825e-05 | 41.45% | 70.80% | 1.71x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.325599354979472e-05 | 2.4920394497945374e-05 | 42.39% | 73.58% | 1.74x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.2775114877319425e-05 | 2.50503715391818e-05 | 41.44% | 70.76% | 1.71x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.2896187230218306e-05 | 2.4834708946311768e-05 | 42.11% | 72.73% | 1.73x | ✅ |
| `hexbytes_new[b'']` | 4.170285372210024e-05 | 2.4552211217173334e-05 | 41.13% | 69.85% | 1.70x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.254282038957465e-05 | 2.5007079744479083e-05 | 41.22% | 70.12% | 1.70x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.2641636097849145e-05 | 2.6094180777598723e-05 | 38.81% | 63.41% | 1.63x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.319381625745205e-05 | 2.4873284805705008e-05 | 42.41% | 73.66% | 1.74x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.67770209713971e-05 | 3.790403675404003e-05 | 33.24% | 49.79% | 1.50x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.178251379657484e-05 | 2.4809909810788718e-05 | 40.62% | 68.41% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.280405502029102e-05 | 2.497811325986108e-05 | 41.65% | 71.37% | 1.71x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.129006378656809e-05 | 2.4896024021082778e-05 | 39.70% | 65.85% | 1.66x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.207488162396413e-05 | 2.480650350674828e-05 | 41.04% | 69.61% | 1.70x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.1469007980720155e-05 | 2.491193641654049e-05 | 39.93% | 66.46% | 1.66x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.283458311093642e-05 | 2.521453935888345e-05 | 41.14% | 69.88% | 1.70x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.065745218429791e-05 | 3.1868933410027324e-05 | 37.09% | 58.96% | 1.59x | ✅ |
| `hexbytes_new[b'abc']` | 4.289507548204572e-05 | 2.4691749064611453e-05 | 42.44% | 73.72% | 1.74x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.753325769745797e-05 | 3.541413661354383e-05 | 47.56% | 90.70% | 1.91x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.831199853634929e-05 | 3.6913653233539096e-05 | 45.96% | 85.06% | 1.85x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.866939846195564e-05 | 3.534324127885276e-05 | 48.53% | 94.29% | 1.94x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.804545721974271e-05 | 3.5886060297876055e-05 | 47.26% | 89.62% | 1.90x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.737152007070517e-05 | 3.6759567643571347e-05 | 45.44% | 83.28% | 1.83x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.714707960158654e-05 | 3.535319179387e-05 | 47.35% | 89.93% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.613750887078443e-05 | 3.3300907335588434e-05 | 49.65% | 98.61% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.65639701234393e-05 | 3.492261413923995e-05 | 47.54% | 90.60% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.725140883581703e-05 | 3.5017861894903864e-05 | 47.93% | 92.05% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.736320027467209e-05 | 3.56700984002753e-05 | 47.05% | 88.85% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.979174082189665e-05 | 5.484090820952261e-05 | 38.92% | 63.73% | 1.64x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.647810404463532e-05 | 3.53251986873105e-05 | 46.86% | 88.19% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.828696644937169e-05 | 3.556537331634143e-05 | 47.92% | 92.00% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.738861881113794e-05 | 3.531724706074242e-05 | 47.59% | 90.81% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.778560291828661e-05 | 3.5417624297916047e-05 | 47.75% | 91.39% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.798699202330548e-05 | 3.548235435270715e-05 | 47.81% | 91.61% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.758761618125426e-05 | 3.543217848551608e-05 | 47.58% | 90.75% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.258981880134138e-05 | 4.8229740545776924e-05 | 41.60% | 71.24% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.736470514329135e-05 | 3.501982306355941e-05 | 48.01% | 92.36% | 1.92x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.278357830800787e-05 | 4.812725107396159e-05 | 41.86% | 72.01% | 1.72x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.842134661159944e-05 | 3.5188336936740765e-05 | 48.57% | 94.44% | 1.94x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.742741675082885e-05 | 3.555925008647931e-05 | 47.26% | 89.62% | 1.90x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.862232417722727e-05 | 3.5763716856138526e-05 | 47.88% | 91.88% | 1.92x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.815306399948618e-05 | 3.6710421407664704e-05 | 46.14% | 85.65% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.644359209228475e-05 | 3.578798520189177e-05 | 46.14% | 85.66% | 1.86x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.780252804431297e-05 | 3.537855420543156e-05 | 47.82% | 91.65% | 1.92x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.842041935716816e-05 | 3.532435963653471e-05 | 48.37% | 93.69% | 1.94x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.863209721213793e-05 | 3.5475996795591965e-05 | 48.31% | 93.46% | 1.93x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.768231979622407e-05 | 3.5144253505781675e-05 | 48.07% | 92.58% | 1.93x | ✅ |
| `hexbytes_new[long alternating]` | 5.065875903980683e-05 | 3.1501500193422254e-05 | 37.82% | 60.81% | 1.61x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.210859918699178e-05 | 4.029565556396219e-05 | 50.92% | 103.77% | 2.04x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.413656076003478e-05 | 4.16454712795268e-05 | 50.50% | 102.03% | 2.02x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.365048491147587e-05 | 4.12914915969136e-05 | 50.64% | 102.59% | 2.03x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.284778779767355e-05 | 4.142539250503621e-05 | 50.00% | 99.99% | 2.00x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.27321983042514e-05 | 4.084245941662829e-05 | 50.63% | 102.56% | 2.03x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.203017971469717e-05 | 3.979124379670298e-05 | 51.49% | 106.15% | 2.06x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.013772524598777e-05 | 3.87049359542194e-05 | 51.70% | 107.05% | 2.07x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.087102833889188e-05 | 4.058211107271707e-05 | 49.82% | 99.28% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.131817431049815e-05 | 4.05668076332156e-05 | 50.11% | 100.45% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.223391813901934e-05 | 4.1630924194255426e-05 | 49.37% | 97.53% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010396238496257491 | 6.08238328998435e-05 | 41.49% | 70.92% | 1.71x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.256108953878775e-05 | 4.0155246810005055e-05 | 51.36% | 105.60% | 2.06x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.33438425700757e-05 | 4.058788692407572e-05 | 51.30% | 105.34% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.015494239317762e-05 | 4.034224274113069e-05 | 49.67% | 98.69% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.125687808480804e-05 | 4.033674590970611e-05 | 50.36% | 101.45% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.077106354230415e-05 | 4.024776656715754e-05 | 50.17% | 100.68% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.192230186878883e-05 | 4.1277971707976884e-05 | 49.61% | 98.46% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.721094587513181e-05 | 5.5336485852667675e-05 | 43.08% | 75.67% | 1.76x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.238844324837492e-05 | 4.203084486965925e-05 | 48.98% | 96.02% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.679570108478094e-05 | 5.5387781311824805e-05 | 42.78% | 74.76% | 1.75x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.246641382464361e-05 | 4.068445982083928e-05 | 50.67% | 102.70% | 2.03x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.135262392241588e-05 | 4.028653963314702e-05 | 50.48% | 101.94% | 2.02x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.203232450966202e-05 | 4.046036419802807e-05 | 50.68% | 102.75% | 2.03x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.086815171385387e-05 | 4.175975402313638e-05 | 48.36% | 93.65% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.173964060539165e-05 | 3.9737478313017255e-05 | 51.39% | 105.70% | 2.06x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.177810311016746e-05 | 4.141365590572847e-05 | 49.36% | 97.47% | 1.97x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.185814951275442e-05 | 4.062741417301122e-05 | 50.37% | 101.49% | 2.01x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.127289622725523e-05 | 4.059767195316675e-05 | 50.05% | 100.19% | 2.00x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.240274695378326e-05 | 4.1417467762913676e-05 | 49.74% | 98.96% | 1.99x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.221340462201619e-05 | 2.4971316392609993e-05 | 40.85% | 69.05% | 1.69x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.234858688756057e-05 | 2.4795493513351854e-05 | 41.45% | 70.79% | 1.71x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.168430562182899e-05 | 2.489585501429888e-05 | 40.28% | 67.43% | 1.67x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.1562685317253846e-05 | 2.4857360041242953e-05 | 40.19% | 67.20% | 1.67x | ✅ |
| `hexbytes_new[palindrome]` | 4.13830945086796e-05 | 2.484401141844405e-05 | 39.97% | 66.57% | 1.67x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.195993210335908e-05 | 2.426757542641234e-05 | 42.16% | 72.91% | 1.73x | ✅ |
| `hexbytes_new[single 0xff]` | 4.217209589905719e-05 | 2.5005761751453018e-05 | 40.71% | 68.65% | 1.69x | ✅ |
| `hexbytes_new[single null byte]` | 4.1854527222454316e-05 | 2.4999303026216982e-05 | 40.27% | 67.42% | 1.67x | ✅ |
| `hexbytes_new[two patterns]` | 4.3246723092720946e-05 | 2.513074172405294e-05 | 41.89% | 72.09% | 1.72x | ✅ |
| `hexbytes_repr[0-9]` | 3.251857424702088e-05 | 1.5118531531208796e-05 | 53.51% | 115.09% | 2.15x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012536998915405563 | 4.090036301426985e-05 | 67.38% | 206.53% | 3.07x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001254737875014036 | 4.181002841316815e-05 | 66.68% | 200.10% | 3.00x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.144881910170009e-05 | 2.025462940851607e-05 | 60.63% | 154.01% | 2.54x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.171799110708406e-05 | 2.050731622233458e-05 | 60.35% | 152.19% | 2.52x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.32361886381927e-05 | 1.8259873209102508e-05 | 57.77% | 136.78% | 2.37x | ✅ |
| `hexbytes_repr[b'']` | 2.3616583512380615e-05 | 1.1889742594241162e-05 | 49.66% | 98.63% | 1.99x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.9497111516553795e-05 | 1.719862174180533e-05 | 56.46% | 129.65% | 2.30x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.9401523924503142e-05 | 1.3981556536971161e-05 | 52.45% | 110.29% | 2.10x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.405158954390038e-05 | 2.3764575511878362e-05 | 62.90% | 169.53% | 2.70x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.000790295867039524 | 0.00022562222299325228 | 71.45% | 250.27% | 3.50x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.9028756440279918e-05 | 1.4017737678221313e-05 | 51.71% | 107.09% | 2.07x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.9919428246814945e-05 | 1.433369638279612e-05 | 52.09% | 108.73% | 2.09x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.1652387295853206e-05 | 1.468774679148796e-05 | 53.60% | 115.50% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.196046294096487e-05 | 1.5188852706328921e-05 | 52.48% | 110.42% | 2.10x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.9311341823920007e-05 | 1.4319608147351164e-05 | 51.15% | 104.69% | 2.05x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.165444929809898e-05 | 2.009636901590272e-05 | 61.09% | 157.03% | 2.57x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004099092500000492 | 0.0001234197789055539 | 69.89% | 232.13% | 3.32x | ✅ |
| `hexbytes_repr[b'abc']` | 2.9483764347844744e-05 | 1.4016555578786338e-05 | 52.46% | 110.35% | 2.10x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004085913667487829 | 0.0001236404006943044 | 69.74% | 230.47% | 3.30x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010123207310534525 | 3.411986592870311e-05 | 66.30% | 196.70% | 2.97x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.257329684582708e-05 | 1.5061567658864608e-05 | 53.76% | 116.27% | 2.16x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.0949780937361156e-05 | 1.455812375472574e-05 | 52.96% | 112.59% | 2.13x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.990855453428386e-05 | 1.4364026143362538e-05 | 51.97% | 108.22% | 2.08x | ✅ |
| `hexbytes_repr[palindrome]` | 3.4925811369001705e-05 | 1.587302685968593e-05 | 54.55% | 120.03% | 2.20x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.409446919820365e-05 | 2.384320003031508e-05 | 62.80% | 168.82% | 2.69x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.902295240292083e-05 | 1.3945284108754353e-05 | 51.95% | 108.12% | 2.08x | ✅ |
| `hexbytes_repr[single null byte]` | 2.9003108231268735e-05 | 1.403389223029773e-05 | 51.61% | 106.66% | 2.07x | ✅ |
| `hexbytes_repr[two patterns]` | 5.1441520825368196e-05 | 2.028463206109041e-05 | 60.57% | 153.60% | 2.54x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.6919031167876326e-05 | 1.4708708042616854e-05 | 13.06% | 15.03% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.4129470289123e-05 | 4.0668042798967737e-05 | 7.84% | 8.51% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.4137154685232574e-05 | 4.076984910100437e-05 | 7.63% | 8.26% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.1931771343404663e-05 | 1.954562045473709e-05 | 10.88% | 12.21% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1785322136233333e-05 | 1.9716613030771568e-05 | 9.50% | 10.49% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.078095081511763e-05 | 1.7589149078556663e-05 | 15.36% | 18.15% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.1000857062378182e-05 | 1.1434140080621208e-05 | -3.94% | -3.79% | 0.96x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.871597595309564e-05 | 1.6493171046853272e-05 | 11.88% | 13.48% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6113603911562945e-05 | 1.4080855590744125e-05 | 12.62% | 14.44% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6171154366661825e-05 | 2.3585831946716984e-05 | 9.88% | 10.96% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022899419777324447 | 0.0002252470509718218 | 1.64% | 1.66% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.5934088931722873e-05 | 1.4120042073530393e-05 | 11.38% | 12.85% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6075354321037884e-05 | 1.4064000439676129e-05 | 12.51% | 14.30% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.7115942989115384e-05 | 1.436062685996305e-05 | 16.10% | 19.19% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.6651126951405036e-05 | 1.4216459269285241e-05 | 14.62% | 17.13% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.60765526233758e-05 | 1.3844038617807184e-05 | 13.89% | 16.13% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1830004859682717e-05 | 1.9657437632774144e-05 | 9.95% | 11.05% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012585421664347012 | 0.00012320569251650392 | 2.10% | 2.15% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.584240893881178e-05 | 1.4035607944033533e-05 | 11.40% | 12.87% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012563517125603648 | 0.00012336916396446073 | 1.80% | 1.84% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.689674297627472e-05 | 3.4068892699928905e-05 | 7.66% | 8.30% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.6841307634087695e-05 | 1.4543431153951193e-05 | 13.64% | 15.80% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6497672221613282e-05 | 1.4132214924229592e-05 | 14.34% | 16.74% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.622550601314207e-05 | 1.3819883152649528e-05 | 14.83% | 17.41% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7758777327596976e-05 | 1.54246835494217e-05 | 13.14% | 15.13% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.611832798943234e-05 | 2.3518733569539586e-05 | 9.95% | 11.05% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5679275451021676e-05 | 1.3355734489740182e-05 | 14.82% | 17.40% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.567649977589638e-05 | 1.365608219222332e-05 | 12.89% | 14.80% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.1846625844226263e-05 | 1.9653389765395906e-05 | 10.04% | 11.16% | 1.11x | ✅ |
