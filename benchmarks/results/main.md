#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.683523886763302e-05 | 2.3694614261860205e-05 | 11.70% | 13.25% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6757318569210967e-05 | 2.371281154423068e-05 | 11.38% | 12.84% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.671757509215257e-05 | 2.37136381732056e-05 | 11.24% | 12.67% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.67626755763087e-05 | 2.3533015729679874e-05 | 12.07% | 13.72% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6808101192017356e-05 | 2.3767304331339126e-05 | 11.34% | 12.79% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6924999290282597e-05 | 2.5799843935873294e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.689151004915369e-05 | 2.3497641788964918e-05 | 12.62% | 14.44% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6772403427899506e-05 | 2.3452856689065148e-05 | 12.40% | 14.15% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.66304740809046e-05 | 2.391140919935391e-05 | 10.21% | 11.37% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6723852381362746e-05 | 2.3912969484263205e-05 | 10.52% | 11.75% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.645007588120477e-05 | 2.352465045332209e-05 | 11.06% | 12.44% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6683806866993844e-05 | 2.3537683979362997e-05 | 11.79% | 13.37% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6416246707261685e-05 | 2.3661427849277524e-05 | 10.43% | 11.64% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6722070968667005e-05 | 2.361554363000516e-05 | 11.63% | 13.15% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.662812430453184e-05 | 2.3635197513785258e-05 | 11.24% | 12.66% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.673428021909268e-05 | 2.3467027859490736e-05 | 12.22% | 13.92% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.6936125927800815e-05 | 2.365563583212574e-05 | 12.18% | 13.87% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6857790916872818e-05 | 2.3684595853206408e-05 | 11.81% | 13.40% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.664660260664946e-05 | 2.3577870421412323e-05 | 11.52% | 13.02% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.690265087991744e-05 | 2.3614152193148242e-05 | 12.22% | 13.93% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6774385006331806e-05 | 2.3034071635141294e-05 | 13.97% | 16.24% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6878745459546762e-05 | 2.386059814860252e-05 | 11.23% | 12.65% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.674990152298743e-05 | 2.4302598454468638e-05 | 9.15% | 10.07% | 1.10x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6622736236715036e-05 | 2.3502142491972644e-05 | 11.72% | 13.28% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6874266555014312e-05 | 2.3780885493330288e-05 | 11.51% | 13.01% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6877499928546077e-05 | 2.4135919820065718e-05 | 10.20% | 11.36% | 1.11x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.679848214266704e-05 | 2.3077054159376205e-05 | 13.89% | 16.13% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6355386457018744e-05 | 2.3385283302758782e-05 | 11.27% | 12.70% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6225327666114284e-05 | 2.309629533633429e-05 | 11.93% | 13.55% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6369140500147e-05 | 2.3181674397841994e-05 | 12.09% | 13.75% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.63380268280457e-05 | 2.3149892036322174e-05 | 12.10% | 13.77% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.598508531056626e-05 | 2.3112176289487784e-05 | 11.06% | 12.43% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6477034120631522e-05 | 2.3724857073425643e-05 | 10.39% | 11.60% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6388275352127332e-05 | 2.3305442856433767e-05 | 11.68% | 13.23% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.636004190755631e-05 | 2.3249836672471987e-05 | 11.80% | 13.38% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.632962135273768e-05 | 2.277922000927374e-05 | 13.48% | 15.59% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.7026949822749473e-05 | 2.3322539817015715e-05 | 13.71% | 15.88% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6294862346858746e-05 | 2.319594451332066e-05 | 11.79% | 13.36% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6271137734168675e-05 | 2.3063322207224906e-05 | 12.21% | 13.91% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6309251522442775e-05 | 2.3296505173822142e-05 | 11.45% | 12.93% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.662058545759731e-05 | 2.3258716580244435e-05 | 12.63% | 14.45% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.5918869104442553e-05 | 2.3137450157658893e-05 | 10.73% | 12.02% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6427793857561603e-05 | 2.3206317958426916e-05 | 12.19% | 13.88% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6255343531842145e-05 | 2.325092912867295e-05 | 11.44% | 12.92% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6307688646618056e-05 | 2.308513397840113e-05 | 12.25% | 13.96% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.617833933139729e-05 | 2.3146316458727724e-05 | 11.58% | 13.10% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.640893262976495e-05 | 2.3128387031876257e-05 | 12.42% | 14.18% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.618366604113575e-05 | 2.318422164072099e-05 | 11.46% | 12.94% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.5905228453717068e-05 | 2.31653698820356e-05 | 10.58% | 11.83% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6538394142580477e-05 | 2.3229816049565833e-05 | 12.47% | 14.24% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.5923298650769776e-05 | 2.3248668463111468e-05 | 10.32% | 11.50% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6294426159991172e-05 | 2.308281919421889e-05 | 12.21% | 13.91% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6275471847016058e-05 | 2.3509433673700342e-05 | 10.53% | 11.77% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.56026711308675e-05 | 2.296655014381297e-05 | 10.30% | 11.48% | 1.11x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6002448276340462e-05 | 2.3152719548563756e-05 | 10.96% | 12.31% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6084396448373458e-05 | 2.3259733476822555e-05 | 10.83% | 12.14% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.6070283223338963e-05 | 2.3139624538687256e-05 | 11.24% | 12.67% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.5823599833340482e-05 | 2.309269828573632e-05 | 10.58% | 11.83% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.597490911136991e-05 | 2.3024126369839176e-05 | 11.36% | 12.82% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.68623412896938e-05 | 2.294655948216722e-05 | 14.58% | 17.06% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.62343673922751e-05 | 2.3059294532202434e-05 | 12.10% | 13.77% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.5889076842945922e-05 | 2.3286344022763785e-05 | 10.05% | 11.18% | 1.11x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6194115370772936e-05 | 2.3302985822222484e-05 | 11.04% | 12.41% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.6140414075626194e-05 | 2.3286403075050564e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6311290582735028e-05 | 2.3330241824361715e-05 | 11.33% | 12.78% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6158566108730886e-05 | 2.3158384577418496e-05 | 11.47% | 12.96% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6028112622449888e-05 | 2.302211375152125e-05 | 11.55% | 13.06% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.613906905377928e-05 | 2.333999653848124e-05 | 10.71% | 11.99% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.5966861517192324e-05 | 2.3195790585856052e-05 | 10.67% | 11.95% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6171642099058904e-05 | 2.3184022106085232e-05 | 11.42% | 12.89% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.624767385293898e-05 | 2.3175132808415057e-05 | 11.71% | 13.26% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.612857193935733e-05 | 2.299424488364699e-05 | 12.00% | 13.63% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6126049391274115e-05 | 2.3241258203457625e-05 | 11.04% | 12.41% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6928768722656514e-05 | 2.2855285772368504e-05 | 15.13% | 17.82% | 1.18x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.61196934009072e-05 | 2.3629206092436377e-05 | 9.53% | 10.54% | 1.11x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6225967828513296e-05 | 2.2793567772345622e-05 | 13.09% | 15.06% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.676213563968688e-05 | 2.299517228742995e-05 | 14.08% | 16.38% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.620164396123931e-05 | 2.2977860356682175e-05 | 12.30% | 14.03% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.702672137534708e-05 | 2.3166875042099545e-05 | 14.28% | 16.66% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6390827130091747e-05 | 2.401522848365691e-05 | 9.00% | 9.89% | 1.10x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6167989717961407e-05 | 2.3145432641108824e-05 | 11.55% | 13.06% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6450048804686864e-05 | 2.3157667368777244e-05 | 12.45% | 14.22% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.651662478398864e-05 | 2.311678179669827e-05 | 12.82% | 14.71% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6159631204842014e-05 | 2.3165748875341712e-05 | 11.44% | 12.92% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6025099819973094e-05 | 2.3243193886466402e-05 | 10.69% | 11.97% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6158741308044924e-05 | 2.3320165724920373e-05 | 10.85% | 12.17% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.6344053133986096e-05 | 2.3062670637901637e-05 | 12.46% | 14.23% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.618322414609287e-05 | 2.3258468268263087e-05 | 11.17% | 12.58% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6329706446637715e-05 | 2.316421887907233e-05 | 12.02% | 13.67% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.610046109361934e-05 | 2.3231587897456118e-05 | 10.99% | 12.35% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6260407071426805e-05 | 2.2967557630569675e-05 | 12.54% | 14.34% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.61586152410342e-05 | 2.3196765975836364e-05 | 11.32% | 12.77% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.617973687489049e-05 | 2.3169139278140376e-05 | 11.50% | 12.99% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.632679444754934e-05 | 2.287572566329727e-05 | 13.11% | 15.09% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6619349176910216e-05 | 2.3031501567363177e-05 | 13.48% | 15.58% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.6056236948608035e-05 | 2.323971130429411e-05 | 10.81% | 12.12% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6043773990095507e-05 | 2.3151787896225712e-05 | 11.10% | 12.49% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6763032957670008e-05 | 2.304092950263247e-05 | 13.91% | 16.15% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6248294107753207e-05 | 2.3162276881824132e-05 | 11.76% | 13.32% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6288680851631564e-05 | 2.3202006936818418e-05 | 11.74% | 13.30% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6230108585089706e-05 | 2.320708410205124e-05 | 11.53% | 13.03% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.616401953719836e-05 | 2.325606234427568e-05 | 11.11% | 12.50% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6281036595060815e-05 | 2.336578691491735e-05 | 11.09% | 12.48% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6369092282507395e-05 | 2.3409059407188657e-05 | 11.23% | 12.64% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6146474400027132e-05 | 2.3212004643978525e-05 | 11.22% | 12.64% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6302963179854003e-05 | 2.3050214004592064e-05 | 12.37% | 14.11% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6333978754619046e-05 | 2.325879634333473e-05 | 11.68% | 13.22% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6612352470768452e-05 | 2.3227351924335058e-05 | 12.72% | 14.57% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.608629581702201e-05 | 2.3212500281422995e-05 | 11.02% | 12.38% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6050560786657958e-05 | 2.325400305809044e-05 | 10.74% | 12.03% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.637593924836035e-05 | 2.3269794909902876e-05 | 11.78% | 13.35% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.630455389322179e-05 | 2.354588250812938e-05 | 10.49% | 11.72% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.627657356171399e-05 | 2.3146932086139156e-05 | 11.91% | 13.52% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.6309662776951697e-05 | 2.321357695877603e-05 | 11.77% | 13.34% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6310717902326172e-05 | 2.313300069266947e-05 | 12.08% | 13.74% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6134322694389548e-05 | 2.3241722445976604e-05 | 11.07% | 12.45% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6334543805916146e-05 | 2.327557924361966e-05 | 11.62% | 13.14% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6284347020350194e-05 | 2.310936172979962e-05 | 12.08% | 13.74% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6199533696754926e-05 | 2.3202615759159745e-05 | 11.44% | 12.92% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6260832269512384e-05 | 2.320343973506781e-05 | 11.64% | 13.18% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6121512445505893e-05 | 2.322605733020994e-05 | 11.08% | 12.47% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.5976893537741773e-05 | 2.3125462688187693e-05 | 10.98% | 12.33% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6158389065591504e-05 | 2.324979300063828e-05 | 11.12% | 12.51% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6085765011566158e-05 | 2.3671145604372025e-05 | 9.26% | 10.20% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.607053472687789e-05 | 2.3254955619363468e-05 | 10.80% | 12.11% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.6169125665829196e-05 | 2.3678964662993857e-05 | 9.52% | 10.52% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6505256639371136e-05 | 2.3243914236263565e-05 | 12.30% | 14.03% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6349657946329117e-05 | 2.316659421685591e-05 | 12.08% | 13.74% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6316089618339832e-05 | 2.3345794173296103e-05 | 11.29% | 12.72% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6303615504012984e-05 | 2.3685923274423834e-05 | 9.95% | 11.05% | 1.11x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.607750454556942e-05 | 2.3136598576906672e-05 | 11.28% | 12.71% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.70272817278234e-05 | 2.313842443922552e-05 | 14.39% | 16.81% | 1.17x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6206168560725514e-05 | 2.317637353723076e-05 | 11.56% | 13.07% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.610682172043707e-05 | 2.3338850179824933e-05 | 10.60% | 11.86% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6046109960074704e-05 | 2.2933893019270584e-05 | 11.95% | 13.57% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.596965734892877e-05 | 2.3170969371124932e-05 | 10.78% | 12.08% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6042653382339883e-05 | 2.3188328366114592e-05 | 10.96% | 12.31% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6119335913553828e-05 | 2.3285269253273487e-05 | 10.85% | 12.17% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.6310971794090596e-05 | 2.3640591047632865e-05 | 10.15% | 11.30% | 1.11x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6194175952378142e-05 | 2.3334231187769633e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.5955397211475688e-05 | 2.331631592263783e-05 | 10.17% | 11.32% | 1.11x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.650260949098037e-05 | 2.330800606941763e-05 | 12.05% | 13.71% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6040263998147685e-05 | 2.306499053950506e-05 | 11.43% | 12.90% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6096389652474155e-05 | 2.3224674010374602e-05 | 11.00% | 12.36% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6139183481308165e-05 | 2.3577004697150907e-05 | 9.80% | 10.87% | 1.11x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6182383181030343e-05 | 2.3736030652938224e-05 | 9.34% | 10.31% | 1.10x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6008774636730326e-05 | 2.300061345580658e-05 | 11.57% | 13.08% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.628561792374071e-05 | 2.3142185530455412e-05 | 11.96% | 13.58% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6263787160365596e-05 | 2.3153422760610116e-05 | 11.84% | 13.43% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.589171776429264e-05 | 2.3239008439916923e-05 | 10.25% | 11.41% | 1.11x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.622684494289932e-05 | 2.3126524160027958e-05 | 11.82% | 13.41% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.61755468724449e-05 | 2.3247673699927736e-05 | 11.19% | 12.59% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6037668402863187e-05 | 2.3279099308431855e-05 | 10.59% | 11.85% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.647731000993019e-05 | 2.3218264925703666e-05 | 12.31% | 14.04% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6227906984879407e-05 | 2.3199993022986667e-05 | 11.54% | 13.05% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.5735371758800854e-05 | 2.3185893706855315e-05 | 9.91% | 11.00% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6189872260840186e-05 | 2.3231150229023288e-05 | 11.30% | 12.74% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6376249613771387e-05 | 2.3459742358113174e-05 | 11.06% | 12.43% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.607112936208564e-05 | 2.3103444536670694e-05 | 11.38% | 12.85% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.6145922070525803e-05 | 2.310799483915721e-05 | 11.62% | 13.15% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6228403009750094e-05 | 2.316806049645148e-05 | 11.67% | 13.21% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.609237580104808e-05 | 2.3173610992990465e-05 | 11.19% | 12.60% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.614892852793444e-05 | 2.3213381088609406e-05 | 11.23% | 12.65% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.621913435415281e-05 | 2.3275809698346606e-05 | 11.23% | 12.65% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6034610185960968e-05 | 2.328867576879454e-05 | 10.55% | 11.79% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.672702873080642e-05 | 2.3264469835723495e-05 | 12.96% | 14.88% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.5981979439446696e-05 | 2.308409852320525e-05 | 11.15% | 12.55% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6153077849513547e-05 | 2.31860649345691e-05 | 11.34% | 12.80% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.61130587542042e-05 | 2.318493255025381e-05 | 11.21% | 12.63% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.608634170653429e-05 | 2.3193134617963278e-05 | 11.09% | 12.47% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6072171408181333e-05 | 2.300583005330757e-05 | 11.76% | 13.33% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6305012997594703e-05 | 2.322197391077002e-05 | 11.72% | 13.28% | 1.13x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.950372462242409e-05 | 5.7104579650031174e-05 | 28.17% | 39.22% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.940354168742008e-05 | 5.685584424514278e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.970722770099952e-05 | 5.674474128342366e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.963942612336998e-05 | 5.7283513227496506e-05 | 28.07% | 39.03% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.953047980159523e-05 | 5.731817568299643e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.035637053391777e-05 | 5.724925878590751e-05 | 28.76% | 40.36% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.796297244954707e-05 | 5.3863610335246965e-05 | 30.91% | 44.74% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.00126790388041e-05 | 5.752574749460619e-05 | 28.10% | 39.09% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.095285665398028e-05 | 5.797147705080295e-05 | 28.39% | 39.64% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.925893135427062e-05 | 5.763741887747531e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.063454133273523e-05 | 5.7463986908355306e-05 | 28.74% | 40.32% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.981443711031721e-05 | 5.790034070877219e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.948629634217929e-05 | 5.679478989040382e-05 | 28.55% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.957962520582032e-05 | 5.652538038569013e-05 | 28.97% | 40.79% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.959498866631064e-05 | 5.735271699788741e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.086933546733693e-05 | 5.7690640087465485e-05 | 28.66% | 40.18% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.0952008868961e-05 | 5.743368081819862e-05 | 29.05% | 40.95% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.224831286077513e-05 | 5.978192888670196e-05 | 27.32% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.929295839936098e-05 | 5.774555321429739e-05 | 27.17% | 37.31% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.004753905283834e-05 | 5.767574401563614e-05 | 27.95% | 38.79% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.967117565877238e-05 | 5.715651382405733e-05 | 28.26% | 39.39% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.941977027144584e-05 | 5.839014427855199e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.971910625823841e-05 | 5.7126998213453175e-05 | 28.34% | 39.55% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.00861946754849e-05 | 5.692920014288651e-05 | 28.92% | 40.68% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.19097716890052e-05 | 5.6916181554688826e-05 | 30.51% | 43.91% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.877632380253679e-05 | 5.773882221345585e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.75043865173067e-05 | 5.435688660540724e-05 | 29.87% | 42.58% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.78804755323088e-05 | 5.608989833776644e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.893103300596723e-05 | 5.6800736276472284e-05 | 28.04% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.959371854531614e-05 | 5.747498289388144e-05 | 27.79% | 38.48% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.136712244922658e-05 | 5.745385370177783e-05 | 29.39% | 41.62% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.063249739984624e-05 | 5.8049162530354436e-05 | 28.01% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.018607179120756e-05 | 5.809577872253393e-05 | 27.55% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.09936527491262e-05 | 5.7811051154638264e-05 | 28.62% | 40.10% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.89388282694528e-05 | 5.817025629172582e-05 | 26.31% | 35.70% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.77094052589854e-05 | 5.4376359947332685e-05 | 30.03% | 42.91% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.053804322691834e-05 | 5.770642374520768e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.968015140196263e-05 | 5.7166826979821036e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.127244893412692e-05 | 5.786946008444745e-05 | 28.80% | 40.44% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.100578549442761e-05 | 5.7769563526083716e-05 | 28.68% | 40.22% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.141111027732493e-05 | 5.798033198300362e-05 | 28.78% | 40.41% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.082714979982694e-05 | 5.818303610038247e-05 | 28.02% | 38.92% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.024961847506928e-05 | 5.768780249007084e-05 | 28.11% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.022029390103785e-05 | 5.824129874135758e-05 | 27.40% | 37.74% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.987478698377025e-05 | 5.8072267188133024e-05 | 27.30% | 37.54% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.04532469551322e-05 | 5.785701676269976e-05 | 28.09% | 39.06% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.013629065368209e-05 | 5.7873469709889256e-05 | 27.78% | 38.47% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.935321567959263e-05 | 5.71790068480621e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.044572657969138e-05 | 5.737563657319316e-05 | 28.68% | 40.21% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.987780713773209e-05 | 5.839396434942695e-05 | 26.90% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.062306978742317e-05 | 5.682643165377173e-05 | 29.52% | 41.88% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.119933639399528e-05 | 5.8001249081976604e-05 | 28.57% | 40.00% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.050902362365869e-05 | 5.745349954580114e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.04174423762803e-05 | 5.8379827823025804e-05 | 27.40% | 37.75% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.919932323505106e-05 | 5.8120843157207586e-05 | 26.61% | 36.27% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.82775033277603e-05 | 5.46281038496824e-05 | 30.21% | 43.29% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.850829074733624e-05 | 5.442807589164579e-05 | 30.67% | 44.24% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.992557925431649e-05 | 5.818689907095436e-05 | 27.20% | 37.36% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.934040080759089e-05 | 5.787005672893254e-05 | 27.06% | 37.10% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.949134990223586e-05 | 5.838802824801547e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.989264323745806e-05 | 5.746007382102946e-05 | 28.08% | 39.04% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.94967675661819e-05 | 5.81060557066047e-05 | 26.91% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.898674026795259e-05 | 5.7637101532234244e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.985945351542894e-05 | 5.772133729150789e-05 | 27.72% | 38.35% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.050528587522647e-05 | 5.4725907229595046e-05 | 32.02% | 47.11% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.143152087489019e-05 | 5.8229873916842945e-05 | 28.49% | 39.84% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.053865940088468e-05 | 5.776313963364288e-05 | 28.28% | 39.43% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.815343793626591e-05 | 5.752692735328428e-05 | 26.39% | 35.86% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.870271143751711e-05 | 5.743050017963545e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.838574216564924e-05 | 5.819770133118145e-05 | 25.75% | 34.69% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.879198736560918e-05 | 5.6873742555003904e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 7.927537858561299e-05 | 5.777972746721785e-05 | 27.12% | 37.20% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.906893372659578e-05 | 5.77711582917259e-05 | 26.94% | 36.87% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.938249134521688e-05 | 5.7499149960488905e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.9361547887598e-05 | 5.886566080066401e-05 | 25.83% | 34.82% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.83924800787745e-05 | 5.983621988659825e-05 | 23.67% | 31.01% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.946564196290453e-05 | 5.750273824369884e-05 | 27.64% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.067235168257772e-05 | 5.765294413640709e-05 | 28.53% | 39.93% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.009650304054412e-05 | 5.738731216385008e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.899383376732326e-05 | 5.724591025391581e-05 | 27.53% | 37.99% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.851205656365714e-05 | 5.71634307964479e-05 | 27.19% | 37.35% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.01238837715429e-05 | 5.670967820924413e-05 | 29.22% | 41.29% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.998431414721715e-05 | 5.720590058411143e-05 | 28.48% | 39.82% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.949305517776187e-05 | 5.77256691407636e-05 | 27.38% | 37.71% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.82121383961404e-05 | 5.474661712825436e-05 | 30.00% | 42.86% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.009316512151843e-05 | 5.481428086256643e-05 | 31.56% | 46.12% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.910556936958885e-05 | 5.748717948241369e-05 | 27.33% | 37.61% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.916883545951755e-05 | 5.705070998927483e-05 | 27.94% | 38.77% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.849756231139786e-05 | 6.022708338211304e-05 | 23.28% | 30.34% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.918400008107239e-05 | 5.9746405258815194e-05 | 24.55% | 32.53% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.848077642945295e-05 | 5.7402933483318114e-05 | 26.86% | 36.72% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.888843612486998e-05 | 5.882126065550614e-05 | 25.44% | 34.12% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.807879725568036e-05 | 5.6142927486009e-05 | 28.09% | 39.07% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.813668677488604e-05 | 5.426782104325508e-05 | 30.55% | 43.98% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.755754562287123e-05 | 5.7139820868877025e-05 | 26.33% | 35.73% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.808642045010885e-05 | 5.6913821889905325e-05 | 27.11% | 37.20% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.073258200520592e-05 | 5.70641902928719e-05 | 29.32% | 41.48% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010190472374973842 | 8.062687736481772e-05 | 20.88% | 26.39% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.789151018898629e-05 | 5.405722898907809e-05 | 30.60% | 44.09% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.855023328391547e-05 | 5.701911153456075e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.985802210841679e-05 | 5.747783668835916e-05 | 28.02% | 38.94% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.795893100991077e-05 | 5.7207747632263766e-05 | 26.62% | 36.27% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.881832415756184e-05 | 5.711929235027093e-05 | 27.53% | 37.99% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.763979403204845e-05 | 5.744123423161222e-05 | 26.02% | 35.16% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.809570692405861e-05 | 7.189544873598097e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.670727804221158e-05 | 5.433855372597834e-05 | 29.16% | 41.17% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.634401345690556e-05 | 7.241350402447636e-05 | 24.84% | 33.05% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.893551181140356e-05 | 5.6566766434792904e-05 | 28.34% | 39.54% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.910209684022398e-05 | 5.788546095064123e-05 | 26.82% | 36.65% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.77200336091325e-05 | 5.692389489983425e-05 | 26.76% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.861038279652864e-05 | 5.639974822170923e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.791294479735582e-05 | 5.690990560093719e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.83936585208071e-05 | 5.804231915540138e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.821622425941567e-05 | 5.4601083687221515e-05 | 30.19% | 43.25% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.76879142833455e-05 | 5.414140759364945e-05 | 30.31% | 43.49% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.762260289849734e-05 | 5.813276434961217e-05 | 25.11% | 33.53% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.57056256554261e-05 | 5.7223261414913836e-05 | 24.41% | 32.30% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.837217548336868e-05 | 5.590242876858367e-05 | 28.67% | 40.19% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.904812227791982e-05 | 5.6333645180972386e-05 | 28.73% | 40.32% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.629923788728957e-05 | 5.6762436215789635e-05 | 25.61% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.726798998516659e-05 | 5.594263445264644e-05 | 27.60% | 38.12% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.869037925202283e-05 | 5.645970120337588e-05 | 28.25% | 39.37% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.659945050134954e-05 | 5.37826061298971e-05 | 29.79% | 42.42% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.83150110125861e-05 | 5.6363003352547585e-05 | 28.03% | 38.95% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.677077171973958e-05 | 5.6739200214617245e-05 | 26.09% | 35.30% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.767962799655081e-05 | 5.682906391734838e-05 | 26.84% | 36.69% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.000100610932474654 | 7.643655771450371e-05 | 24.03% | 31.63% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.711283690170235e-05 | 5.600847441239079e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.738249236611553e-05 | 5.6346388719745295e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.038761069864744e-05 | 5.70151848135926e-05 | 29.07% | 40.99% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.688332236381078e-05 | 5.790048270408341e-05 | 24.69% | 32.79% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.728471391189325e-05 | 5.668723523369018e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.68339053122508e-05 | 5.6537441241339945e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.339537852991084e-05 | 7.116446831630849e-05 | 23.80% | 31.24% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.760886900719047e-05 | 5.7175366708562585e-05 | 26.33% | 35.74% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.519087255205539e-05 | 7.101975076689348e-05 | 25.39% | 34.03% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.868712765311849e-05 | 5.624016669608588e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.710104225215592e-05 | 5.608276180168015e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.694838022237908e-05 | 5.688355053846159e-05 | 26.08% | 35.27% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.608993127612047e-05 | 5.6492676657911886e-05 | 25.76% | 34.69% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.69540153962768e-05 | 5.633617807771549e-05 | 26.79% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.75989826539712e-05 | 5.699268383084418e-05 | 26.55% | 36.16% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.631596862696285e-05 | 5.288261425374073e-05 | 30.71% | 44.31% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.621288101169081e-05 | 5.31032553980166e-05 | 30.32% | 43.52% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.829404721470864e-05 | 5.714195915979659e-05 | 27.02% | 37.02% | 1.37x | ✅ |
| `hexbytes_new['']` | 7.209308457656236e-05 | 3.4475936554650216e-05 | 52.18% | 109.11% | 2.09x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.059049021316249e-05 | 4.9159885481047875e-05 | 45.73% | 84.28% | 1.84x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.212690360312182e-05 | 4.993982408950519e-05 | 45.79% | 84.48% | 1.84x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.780589214657324e-05 | 4.59416859019933e-05 | 47.68% | 91.12% | 1.91x | ✅ |
| `hexbytes_new['0x']` | 7.829414074602961e-05 | 3.5905316512798375e-05 | 54.14% | 118.06% | 2.18x | ✅ |
| `hexbytes_new['0x1234']` | 8.57585571659131e-05 | 4.3773212282100924e-05 | 48.96% | 95.92% | 1.96x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.575762879909986e-05 | 4.385609880392465e-05 | 48.86% | 95.54% | 1.96x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.591641434293841e-05 | 4.3110872532427154e-05 | 49.82% | 99.29% | 1.99x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.6038730497243e-05 | 4.36643453956536e-05 | 49.25% | 97.05% | 1.97x | ✅ |
| `hexbytes_new['abc']` | 8.365479924823888e-05 | 4.550234879525923e-05 | 45.61% | 83.85% | 1.84x | ✅ |
| `hexbytes_new['deadbeef']` | 7.793346675945082e-05 | 3.9580806530633035e-05 | 49.21% | 96.90% | 1.97x | ✅ |
| `hexbytes_new[0-9]` | 4.291255321997581e-05 | 2.4832108034002465e-05 | 42.13% | 72.81% | 1.73x | ✅ |
| `hexbytes_new[0]` | 0.00012093129789018462 | 5.783596975006301e-05 | 52.17% | 109.09% | 2.09x | ✅ |
| `hexbytes_new[123456]` | 0.00012267024717154865 | 6.108985622527716e-05 | 50.20% | 100.80% | 2.01x | ✅ |
| `hexbytes_new[2**16]` | 0.00012336181677923778 | 6.111006023604466e-05 | 50.46% | 101.87% | 2.02x | ✅ |
| `hexbytes_new[2**256-1]` | 0.0001294049245406387 | 6.721264400085993e-05 | 48.06% | 92.53% | 1.93x | ✅ |
| `hexbytes_new[2**32]` | 0.00012583884514748392 | 6.481676305883123e-05 | 48.49% | 94.15% | 1.94x | ✅ |
| `hexbytes_new[2**64]` | 0.0001252535511433817 | 6.598656599992613e-05 | 47.32% | 89.82% | 1.90x | ✅ |
| `hexbytes_new[2**8]` | 0.00012140103003696614 | 6.116395639642207e-05 | 49.62% | 98.48% | 1.98x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.497937726716034e-05 | 2.5449750566240232e-05 | 43.42% | 76.74% | 1.77x | ✅ |
| `hexbytes_new[False]` | 6.092244683248982e-05 | 2.6131877248004433e-05 | 57.11% | 133.13% | 2.33x | ✅ |
| `hexbytes_new[True]` | 5.9492580766077325e-05 | 2.605896136121819e-05 | 56.20% | 128.30% | 2.28x | ✅ |
| `hexbytes_new[all byte values]` | 4.482559470815032e-05 | 2.5351043070432866e-05 | 43.45% | 76.82% | 1.77x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3613041592638836e-05 | 2.5206979097643424e-05 | 42.20% | 73.02% | 1.73x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.3795434244969244e-05 | 2.5153694129854325e-05 | 42.57% | 74.11% | 1.74x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.312928855642304e-05 | 2.4998047056974416e-05 | 42.04% | 72.53% | 1.73x | ✅ |
| `hexbytes_new[b'']` | 4.317771679077786e-05 | 2.5655520611475233e-05 | 40.58% | 68.30% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.292025758058589e-05 | 2.5176200432465615e-05 | 41.34% | 70.48% | 1.70x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.2938778446818814e-05 | 2.495389863221474e-05 | 41.88% | 72.07% | 1.72x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.396579511360035e-05 | 2.564196202409972e-05 | 41.68% | 71.46% | 1.71x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.761475013498217e-05 | 3.6929981185211244e-05 | 35.90% | 56.01% | 1.56x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.260851305980675e-05 | 2.533287923292034e-05 | 40.55% | 68.19% | 1.68x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.343086596811073e-05 | 2.4993817979776e-05 | 42.45% | 73.77% | 1.74x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.241727680273713e-05 | 2.4817353149891115e-05 | 41.49% | 70.92% | 1.71x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.304759682874736e-05 | 2.4947252611239994e-05 | 42.05% | 72.55% | 1.73x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.326594977455997e-05 | 2.5286709541567074e-05 | 41.56% | 71.10% | 1.71x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.361944008695189e-05 | 2.5355324573323967e-05 | 41.87% | 72.03% | 1.72x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.070566690316299e-05 | 3.1458498511224206e-05 | 37.96% | 61.18% | 1.61x | ✅ |
| `hexbytes_new[b'abc']` | 4.2776941102617546e-05 | 2.5174305414429993e-05 | 41.15% | 69.92% | 1.70x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.912996179195352e-05 | 3.5651511692862216e-05 | 48.43% | 93.90% | 1.94x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.031600228339209e-05 | 3.65224897622737e-05 | 48.06% | 92.53% | 1.93x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.196096749811582e-05 | 3.665552514401082e-05 | 49.06% | 96.32% | 1.96x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.966972126717064e-05 | 3.6019140096012755e-05 | 48.30% | 93.42% | 1.93x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.831574237091601e-05 | 3.6021455696827095e-05 | 47.27% | 89.65% | 1.90x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.917382499307704e-05 | 3.550765402042392e-05 | 48.67% | 94.81% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.674264800052331e-05 | 3.290435097583485e-05 | 50.70% | 102.84% | 2.03x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.947258214444131e-05 | 3.544566324358993e-05 | 48.98% | 96.00% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.824541493158889e-05 | 3.648617622199681e-05 | 46.54% | 87.04% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.846276090355815e-05 | 3.6837755861583555e-05 | 46.19% | 85.85% | 1.86x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.009095451116408e-05 | 5.547887148575143e-05 | 38.42% | 62.39% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.848499585798226e-05 | 3.553314067766642e-05 | 48.12% | 92.74% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.898307397128264e-05 | 3.559914761359989e-05 | 48.39% | 93.78% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.744092718246551e-05 | 3.555948402620539e-05 | 47.27% | 89.66% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.822315952377846e-05 | 3.575146408339094e-05 | 47.60% | 90.83% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.838093804784211e-05 | 3.565128989902901e-05 | 47.86% | 91.80% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.863664878836782e-05 | 3.6484887183588765e-05 | 46.84% | 88.12% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.304386033312202e-05 | 4.847404406965292e-05 | 41.63% | 71.32% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.850186288245696e-05 | 3.5515889586794935e-05 | 48.15% | 92.88% | 1.93x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.293737340928423e-05 | 4.8855607473610286e-05 | 41.09% | 69.76% | 1.70x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.917599107693229e-05 | 3.564319645078595e-05 | 48.47% | 94.08% | 1.94x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.848501362558085e-05 | 3.5847199070932736e-05 | 47.66% | 91.05% | 1.91x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.835733625784582e-05 | 3.552565180810289e-05 | 48.03% | 92.42% | 1.92x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.843151618914195e-05 | 3.56504006255537e-05 | 47.90% | 91.95% | 1.92x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.803703369227748e-05 | 3.6096492019357577e-05 | 46.95% | 88.49% | 1.88x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.952435972294853e-05 | 3.642867819658151e-05 | 47.60% | 90.85% | 1.91x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.846183027479455e-05 | 3.5965717377688454e-05 | 47.47% | 90.35% | 1.90x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.860710074174373e-05 | 3.574161825937857e-05 | 47.90% | 91.95% | 1.92x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.966630045008142e-05 | 3.6421558574269204e-05 | 47.72% | 91.28% | 1.91x | ✅ |
| `hexbytes_new[long alternating]` | 5.235911579194439e-05 | 3.198916358495458e-05 | 38.90% | 63.68% | 1.64x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.304301163999956e-05 | 4.047619427583577e-05 | 51.26% | 105.17% | 2.05x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.436333436191585e-05 | 4.223389456111051e-05 | 49.94% | 99.75% | 2.00x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.455824181884578e-05 | 4.215655689370812e-05 | 50.14% | 100.58% | 2.01x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.320356968359577e-05 | 4.116181507360666e-05 | 50.53% | 102.14% | 2.02x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.250784386939797e-05 | 4.125439349930303e-05 | 50.00% | 100.00% | 2.00x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.209824215641246e-05 | 4.016487315391015e-05 | 51.08% | 104.40% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.940858128689954e-05 | 3.909410256208946e-05 | 50.77% | 103.12% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.189819536062729e-05 | 4.269899982008618e-05 | 47.86% | 91.80% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.287338348178695e-05 | 4.097321815750633e-05 | 50.56% | 102.26% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.351404907632669e-05 | 4.1225640939077514e-05 | 50.64% | 102.58% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.0001049863771044469 | 6.22794544356345e-05 | 40.68% | 68.57% | 1.69x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.648916790674082e-05 | 4.086496991131197e-05 | 52.75% | 111.65% | 2.12x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.286321851221388e-05 | 4.085093126828279e-05 | 50.70% | 102.84% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.188854085543397e-05 | 4.0256031971083694e-05 | 50.84% | 103.42% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.269859806161538e-05 | 4.053713384151244e-05 | 50.98% | 104.01% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.406703393473598e-05 | 4.091627858188238e-05 | 51.33% | 105.46% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.240368103293671e-05 | 4.185266215858721e-05 | 49.21% | 96.89% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.757809080754163e-05 | 5.641036828997654e-05 | 42.19% | 72.98% | 1.73x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.443182309430438e-05 | 4.1661093494945353e-05 | 50.66% | 102.66% | 2.03x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.80575000511732e-05 | 5.698046144832057e-05 | 41.89% | 72.09% | 1.72x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.205684673942146e-05 | 4.113841776225689e-05 | 49.87% | 99.47% | 1.99x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.266670767931033e-05 | 4.052391458452919e-05 | 50.98% | 103.99% | 2.04x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.109752223256629e-05 | 4.110656145087851e-05 | 49.31% | 97.29% | 1.97x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.152463999680768e-05 | 4.10347885153339e-05 | 49.67% | 98.67% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.202001104118928e-05 | 4.0408375186671183e-05 | 50.73% | 102.98% | 2.03x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.270135271814639e-05 | 4.129769184713514e-05 | 50.06% | 100.26% | 2.00x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.221856562099578e-05 | 4.1604953417532196e-05 | 49.40% | 97.62% | 1.98x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.228142229552829e-05 | 4.2724239643365976e-05 | 48.08% | 92.59% | 1.93x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.23886872869849e-05 | 4.118711637455224e-05 | 50.01% | 100.04% | 2.00x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.346259566319409e-05 | 2.4827000382753905e-05 | 42.88% | 75.06% | 1.75x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.4013427692206676e-05 | 2.4838503491357336e-05 | 43.57% | 77.20% | 1.77x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.292139950839759e-05 | 2.5002074963643825e-05 | 41.75% | 71.67% | 1.72x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.266817372887079e-05 | 2.5175877529340048e-05 | 41.00% | 69.48% | 1.69x | ✅ |
| `hexbytes_new[palindrome]` | 4.283724572140366e-05 | 2.4887313959803272e-05 | 41.90% | 72.12% | 1.72x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.317240262534483e-05 | 2.5161667568576344e-05 | 41.72% | 71.58% | 1.72x | ✅ |
| `hexbytes_new[single 0xff]` | 4.26950889136341e-05 | 2.4870645695676303e-05 | 41.75% | 71.67% | 1.72x | ✅ |
| `hexbytes_new[single null byte]` | 4.254982575869905e-05 | 2.4888791047580473e-05 | 41.51% | 70.96% | 1.71x | ✅ |
| `hexbytes_new[two patterns]` | 4.331226689860206e-05 | 2.525706654279344e-05 | 41.69% | 71.49% | 1.71x | ✅ |
| `hexbytes_repr[0-9]` | 3.241501616599696e-05 | 1.5433179675323603e-05 | 52.39% | 110.03% | 2.10x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001256008639326478 | 4.1012302617476935e-05 | 67.35% | 206.25% | 3.06x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012596991872317918 | 4.1197973482723596e-05 | 67.30% | 205.77% | 3.06x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.134650525301514e-05 | 2.0201748782888733e-05 | 60.66% | 154.17% | 2.54x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.130001716698648e-05 | 2.013807192795789e-05 | 60.74% | 154.74% | 2.55x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.348442630067979e-05 | 1.8206313883833843e-05 | 58.13% | 138.84% | 2.39x | ✅ |
| `hexbytes_repr[b'']` | 2.3495977680720502e-05 | 1.2090790981313989e-05 | 48.54% | 94.33% | 1.94x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.9539335206926624e-05 | 1.7275958675850364e-05 | 56.31% | 128.87% | 2.29x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.0171249830068718e-05 | 1.4174799226611514e-05 | 53.02% | 112.85% | 2.13x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.373720613293829e-05 | 2.36160923529678e-05 | 62.95% | 169.89% | 2.70x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007769846051809612 | 0.00022511553766573457 | 71.03% | 245.15% | 3.45x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.9242701866844567e-05 | 1.4066984313880905e-05 | 51.90% | 107.88% | 2.08x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.9695606896463256e-05 | 1.4305954393380406e-05 | 51.82% | 107.58% | 2.08x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.173128264271183e-05 | 1.46456544249026e-05 | 53.84% | 116.66% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.174441095974562e-05 | 1.4710686987754766e-05 | 53.66% | 115.79% | 2.16x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.9544499411436265e-05 | 1.4080585890337447e-05 | 52.34% | 109.82% | 2.10x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.1368840975183385e-05 | 2.0194383549072213e-05 | 60.69% | 154.37% | 2.54x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004089213448410431 | 0.00012383614250161806 | 69.72% | 230.21% | 3.30x | ✅ |
| `hexbytes_repr[b'abc']` | 2.914525535608155e-05 | 1.400995541866312e-05 | 51.93% | 108.03% | 2.08x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004086978739317776 | 0.0001233433844613907 | 69.82% | 231.35% | 3.31x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010146959082018923 | 3.401205183392877e-05 | 66.48% | 198.33% | 2.98x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.24730460746148e-05 | 1.4892602169087559e-05 | 54.14% | 118.05% | 2.18x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.090311176822e-05 | 1.4578187052765462e-05 | 52.83% | 111.98% | 2.12x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9840223930780564e-05 | 1.4229928941348439e-05 | 52.31% | 109.70% | 2.10x | ✅ |
| `hexbytes_repr[palindrome]` | 3.511551136985267e-05 | 1.6262642669354197e-05 | 53.69% | 115.93% | 2.16x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.507172126115261e-05 | 2.344151723552152e-05 | 63.98% | 177.59% | 2.78x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.926034424313616e-05 | 1.4013048620416781e-05 | 52.11% | 108.81% | 2.09x | ✅ |
| `hexbytes_repr[single null byte]` | 2.9040363535142076e-05 | 1.3898367887992295e-05 | 52.14% | 108.95% | 2.09x | ✅ |
| `hexbytes_repr[two patterns]` | 5.153764640940508e-05 | 2.0468688903364006e-05 | 60.28% | 151.79% | 2.52x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.701535185148488e-05 | 1.4346955191166856e-05 | 15.68% | 18.60% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.438667250904991e-05 | 4.0673298512704656e-05 | 8.37% | 9.13% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.441473618421441e-05 | 4.069055712961994e-05 | 8.39% | 9.15% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.282880079901085e-05 | 1.9554412800606678e-05 | 14.34% | 16.75% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.215917619542133e-05 | 1.9575919171011492e-05 | 11.66% | 13.20% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.062126888785437e-05 | 1.761299150361071e-05 | 14.59% | 17.08% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.1166462620755791e-05 | 1.162337253953215e-05 | -4.09% | -3.93% | 0.96x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.885048852657126e-05 | 1.6659557927895816e-05 | 11.62% | 13.15% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6543501964135775e-05 | 1.3827710605854419e-05 | 16.42% | 19.64% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6010403501260074e-05 | 2.2991215466431136e-05 | 11.61% | 13.13% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022807185499634037 | 0.00022470140210107106 | 1.48% | 1.50% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6203457096682174e-05 | 1.4143008676247858e-05 | 12.72% | 14.57% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.642111020187829e-05 | 1.3745601969447398e-05 | 16.29% | 19.46% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.682529465470794e-05 | 1.4210899953916605e-05 | 15.54% | 18.40% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.673557203404229e-05 | 1.4117225274086175e-05 | 15.65% | 18.55% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6252800603030485e-05 | 1.3815853590988886e-05 | 14.99% | 17.64% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2131024352187823e-05 | 1.9614934312705676e-05 | 11.37% | 12.83% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.000127575910437064 | 0.00012385965167785725 | 2.91% | 3.00% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6069803613134267e-05 | 1.422993006086665e-05 | 11.45% | 12.93% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012505976789693835 | 0.0001234679447848743 | 1.27% | 1.29% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.7035978620462925e-05 | 3.39117509570749e-05 | 8.44% | 9.21% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.699126717472019e-05 | 1.4424560761667518e-05 | 15.11% | 17.79% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6485448190706115e-05 | 1.4038312509297352e-05 | 14.84% | 17.43% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6301536204883112e-05 | 1.3876414942621139e-05 | 14.88% | 17.48% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7878300119654728e-05 | 1.565998559147859e-05 | 12.41% | 14.17% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5997228335192654e-05 | 2.300287063447897e-05 | 11.52% | 13.02% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5843616582668458e-05 | 1.334312657911213e-05 | 15.78% | 18.74% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.586714239412274e-05 | 1.3401293988011838e-05 | 15.54% | 18.40% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2268103766579562e-05 | 1.949106929335943e-05 | 12.47% | 14.25% | 1.14x | ✅ |
