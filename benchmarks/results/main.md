#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/chore/rule-sync-agents-20260118125710/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/chore/rule-sync-agents-20260118125710/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.69283911115099e-05 | 2.5616275176469773e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6999730668729856e-05 | 2.5521914380529987e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6998967690632142e-05 | 2.5950907849360687e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6986024127579067e-05 | 2.575022071934659e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6966765179603624e-05 | 2.5655503059006795e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6925675947116053e-05 | 2.574180623705962e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\x00'*32]` | 2.6818073407517803e-05 | 2.5757527155104613e-05 | 3.95% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\x00\xff\x00\xff']` | 2.7080735816393613e-05 | 2.56717856996318e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\x01'*100]` | 2.6888836014353154e-05 | 2.5707067314355516e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\x01'*2048]` | 2.6862399786457717e-05 | 2.5595120460918477e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\x01\x02\x03']` | 2.6820075598029654e-05 | 2.573440719075248e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\x10\x20\x30\x40\x50']` | 2.6888289083894088e-05 | 2.557450172346906e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\x7f'*8]` | 2.6576538252746452e-05 | 2.5618251593384704e-05 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\x80'*8]` | 2.677914162872918e-05 | 2.5656392483631962e-05 | 4.19% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\xde\xad\xbe\xef']` | 2.6812410668327462e-05 | 2.568969514626652e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\xff'*64]` | 2.6859258257335447e-05 | 2.5556493060100917e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.683507132464216e-05 | 2.5436702936989048e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6853955129944715e-05 | 2.5755314103898605e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.6910413445418128e-05 | 2.5865984071479798e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6863142828388338e-05 | 2.67254290013392e-05 | 0.51% | 0.52% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6948606895060537e-05 | 2.5629435190172813e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6830604115442657e-05 | 2.5665014028184765e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.683532291330884e-05 | 2.558386749110289e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6786627063435043e-05 | 2.5667267037514584e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6862021850547127e-05 | 2.5664225774885543e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-single 0xff]` | 2.6781628609555286e-05 | 2.5566649110465872e-05 | 4.54% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-single null byte]` | 2.6821432725936503e-05 | 2.5618693889089856e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6859101177589014e-05 | 2.5695014460101785e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6158368286866665e-05 | 2.4960187501357185e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6084225669340444e-05 | 2.4993342552970942e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6133941562050497e-05 | 2.478419471279096e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.625381893552e-05 | 2.4813815395781675e-05 | 5.49% | 5.80% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.632878144296333e-05 | 2.494973006430265e-05 | 5.24% | 5.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6333803830822824e-05 | 2.4875769698077884e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\x00'*32]` | 2.6310992218128874e-05 | 2.4586989490395056e-05 | 6.55% | 7.01% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\x00\xff\x00\xff']` | 2.6100176228603192e-05 | 2.4819840780674616e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\x01'*100]` | 2.6201708246398896e-05 | 2.484365269160492e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\x01'*2048]` | 2.6226571552499145e-05 | 2.4797895311613676e-05 | 5.45% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\x01\x02\x03']` | 2.618348959216496e-05 | 2.4865302039307186e-05 | 5.04% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\x10\x20\x30\x40\x50']` | 2.614753345704539e-05 | 2.4732247151435068e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\x7f'*8]` | 2.556585969568915e-05 | 2.474541706699543e-05 | 3.21% | 3.32% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\x80'*8]` | 2.6327474232592823e-05 | 2.4866445023943342e-05 | 5.55% | 5.87% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\xde\xad\xbe\xef']` | 2.6012961903616775e-05 | 2.4880558984794982e-05 | 4.35% | 4.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\xff'*64]` | 2.6093324140858188e-05 | 2.4924627462251282e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6045247122799244e-05 | 2.4781025292495366e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6127308382121147e-05 | 2.5014136066712675e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6276567683832184e-05 | 2.4864617876995284e-05 | 5.37% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6104054730617915e-05 | 2.494916837047934e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.63311110499305e-05 | 2.4927829294939347e-05 | 5.33% | 5.62% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6092432174067695e-05 | 2.4877487787281984e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6189766868350737e-05 | 2.5050901417043655e-05 | 4.35% | 4.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.599499391453296e-05 | 2.4932131419194447e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6212558795579097e-05 | 2.498266746178861e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.623848970935418e-05 | 2.5004983666848443e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.625403461919156e-05 | 2.4941408397514985e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6278626657608267e-05 | 2.5088780962646386e-05 | 4.53% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6155040452231015e-05 | 2.5005692652530643e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6210395318489762e-05 | 2.5092621694724702e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.611173368404932e-05 | 2.5015605568508613e-05 | 4.20% | 4.39% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.6169181677201278e-05 | 2.500283656402671e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.617058375011141e-05 | 2.4980137660679334e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6232589149098108e-05 | 2.5081480641323154e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\x00'*32]` | 2.617374113436356e-05 | 2.4926552784604625e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\x00\xff\x00\xff']` | 2.6720598783171182e-05 | 2.5266728624120956e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\x01'*100]` | 2.625209631876685e-05 | 2.5062448950730267e-05 | 4.53% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\x01'*2048]` | 2.6112479146298472e-05 | 2.5010147199882882e-05 | 4.22% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\x01\x02\x03']` | 2.6104480663099367e-05 | 2.506710243888946e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\x10\x20\x30\x40\x50']` | 2.6255930230162418e-05 | 2.511291330874804e-05 | 4.35% | 4.55% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\x7f'*8]` | 2.617208625230967e-05 | 2.495793309815019e-05 | 4.64% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\x80'*8]` | 2.6059931319338082e-05 | 2.493163785148955e-05 | 4.33% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\xde\xad\xbe\xef']` | 2.6134317761459652e-05 | 2.5027871459367614e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\xff'*64]` | 2.6061480527639444e-05 | 2.5006501257295503e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6104923782437367e-05 | 2.5011317595881417e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6109975064948972e-05 | 2.5078159268022193e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6327556392533573e-05 | 2.5015259139562462e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6146589419911766e-05 | 2.5109710214681924e-05 | 3.96% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.622841130358597e-05 | 2.506101834607459e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6104750897687375e-05 | 2.5069960005440214e-05 | 3.96% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.6064418623663512e-05 | 2.493765393853188e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.6245965161405542e-05 | 2.5032222131799164e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6125839763785635e-05 | 2.4940386357021785e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-single 0xff]` | 2.6238310974234348e-05 | 2.499927605033675e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-single null byte]` | 2.6254475535864954e-05 | 2.4928893981218613e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6178291438601795e-05 | 2.5058538213287135e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.610011019707779e-05 | 2.5013947813709372e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6093293983626688e-05 | 2.5022870441921024e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6005596324780406e-05 | 2.49662763257682e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6007238298520497e-05 | 2.489155939338012e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.601332976010683e-05 | 2.494402039761543e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.5999242693414164e-05 | 2.5034547924550357e-05 | 3.71% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\x00'*32]` | 2.6057926677818932e-05 | 2.4763751408880132e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\x00\xff\x00\xff']` | 2.60509464613324e-05 | 2.4842190854391122e-05 | 4.64% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\x01'*100]` | 2.5984215657761864e-05 | 2.4920154919034475e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\x01'*2048]` | 2.612968634597684e-05 | 2.4969955531468684e-05 | 4.44% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\x01\x02\x03']` | 2.6028620424480943e-05 | 2.488596047042546e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\x10\x20\x30\x40\x50']` | 2.6132845501878132e-05 | 2.4952422479399852e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\x7f'*8]` | 2.6021281791191036e-05 | 2.491940102316158e-05 | 4.23% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\x80'*8]` | 2.602227538468376e-05 | 2.491641444677412e-05 | 4.25% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\xde\xad\xbe\xef']` | 2.6003513109620647e-05 | 2.4855296220904407e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\xff'*64]` | 2.6008154366706367e-05 | 2.493096015849618e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.61243785329944e-05 | 2.4853773051601275e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6050196989149738e-05 | 2.4997737019800062e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.5993770181636856e-05 | 2.4873735342826514e-05 | 4.31% | 4.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.599282226049655e-05 | 2.4865683314488068e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.621240698546461e-05 | 2.4882915508050838e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.613108778261698e-05 | 2.4912082251326442e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6120784875198358e-05 | 2.4935250688678083e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6060354364466727e-05 | 2.49268424840262e-05 | 4.35% | 4.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6174748178907123e-05 | 2.483937889865013e-05 | 5.10% | 5.37% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-single 0xff]` | 2.623877946248415e-05 | 2.4872585285627118e-05 | 5.21% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-single null byte]` | 2.604738040171693e-05 | 2.4871953497218896e-05 | 4.51% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6177330222687093e-05 | 2.490741352523745e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.618210606084572e-05 | 2.4974116950843856e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6206143026326963e-05 | 2.516183553344846e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6153949685536763e-05 | 2.4972097007996833e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6213712783881786e-05 | 2.502225768079891e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.614510222031102e-05 | 2.5013052101565342e-05 | 4.33% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.621420928689498e-05 | 2.506700519528254e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\x00'*32]` | 2.613170529765467e-05 | 2.4967412069683058e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\x00\xff\x00\xff']` | 2.6146237936443204e-05 | 2.507724718055739e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\x01'*100]` | 2.6312997194404674e-05 | 2.488697202296388e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\x01'*2048]` | 2.6211169889707e-05 | 2.4902663091895588e-05 | 4.99% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\x10\x20\x30\x40\x50']` | 2.620709829928066e-05 | 2.506086505712189e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\x7f'*8]` | 2.617144331930822e-05 | 2.4961473090737972e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\x80'*8]` | 2.6144565354933594e-05 | 2.5007050954776504e-05 | 4.35% | 4.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\xde\xad\xbe\xef']` | 2.6245424360704402e-05 | 2.5067524717401022e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\xff'*64]` | 2.6162119107525635e-05 | 2.5024012303917192e-05 | 4.35% | 4.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.614042570345816e-05 | 2.5074015522381207e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6288650465181084e-05 | 2.507059159218407e-05 | 4.64% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6088019068078423e-05 | 2.5071982349978807e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6112231491730418e-05 | 2.5022400832915032e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.615743744755541e-05 | 2.5102034207110836e-05 | 4.03% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.61836541857412e-05 | 2.4966490502889824e-05 | 4.65% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6176080899653752e-05 | 2.505635280994095e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6250774046051883e-05 | 2.5020144178369394e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6217943854008584e-05 | 2.5049450242793296e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6087312982769565e-05 | 2.4940220258246178e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6068186160462507e-05 | 2.4991066434178292e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6178780383809926e-05 | 2.4996128999357294e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6078506425883464e-05 | 2.491559860557205e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6066631186617926e-05 | 2.500941660555005e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6203710314990552e-05 | 2.5021098682701256e-05 | 4.51% | 4.72% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\x00'*32]` | 2.618124965563391e-05 | 2.5033784092227753e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\x01'*100]` | 2.6047128021286484e-05 | 2.5008490450076168e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\x01'*2048]` | 2.6153973683525236e-05 | 2.4995564118661405e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\x10\x20\x30\x40\x50']` | 2.6233612615098182e-05 | 2.5081344902952897e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\x7f'*8]` | 2.616197142540703e-05 | 2.5010371145842226e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\x80'*8]` | 2.616975122450182e-05 | 2.4993319333206475e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\xff'*64]` | 2.6182239064345357e-05 | 2.5001478526933307e-05 | 4.51% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.611648832457259e-05 | 2.500067709435182e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.615898058114481e-05 | 2.4892298126983646e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6120824909502476e-05 | 2.4997317474388917e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.618221773566497e-05 | 2.4971972911816346e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.615895638759769e-05 | 2.5003304054527746e-05 | 4.42% | 4.63% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6225884796776785e-05 | 2.4988355283840844e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6220112683269454e-05 | 2.4971341706762096e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.6151246455216407e-05 | 2.499392092946908e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.623382963792839e-05 | 2.503680110785166e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.60676329617055e-05 | 2.5006372452478057e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.623024736152619e-05 | 2.5005369473974453e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.623396440864073e-05 | 2.4988026711949425e-05 | 4.75% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6258594591717945e-05 | 2.5067086411527167e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6180966023888595e-05 | 2.5040167728771378e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6283084673981357e-05 | 2.507056892685147e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\x00'*32]` | 2.6208356799837245e-05 | 2.5008411119846992e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\x01'*100]` | 2.613700989831767e-05 | 2.4948102351844843e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\x01'*2048]` | 2.6282817171260907e-05 | 2.5038132888579762e-05 | 4.73% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\x7f'*8]` | 2.614323968801644e-05 | 2.5021693150293797e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\x80'*8]` | 2.6155834862665267e-05 | 2.501730076137144e-05 | 4.35% | 4.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\xff'*64]` | 2.6095316974649526e-05 | 2.5056355025434966e-05 | 3.98% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.621419607567215e-05 | 2.495635261158242e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.623201523114554e-05 | 2.5073673276101496e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6186508634744558e-05 | 2.500931838718645e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6152814167752223e-05 | 2.500192726841508e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.617408455578492e-05 | 2.4975521360813512e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.612883181407119e-05 | 2.4963660847362432e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6056464264396527e-05 | 2.4972825660886656e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6306876747004537e-05 | 2.5013434110150424e-05 | 4.92% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.168224104057811e-05 | 5.99411792038588e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.11287252076963e-05 | 5.955166494394858e-05 | 26.59% | 36.23% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.087618259087795e-05 | 5.99687933259815e-05 | 25.86% | 34.86% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.133755658268236e-05 | 5.994885907292747e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.154287679791047e-05 | 6.0086499441044596e-05 | 26.32% | 35.73% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.090560585172838e-05 | 5.968060867548957e-05 | 26.24% | 35.57% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.962678426887828e-05 | 5.975602781938136e-05 | 24.97% | 33.28% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x00'*32]` | 8.011835868347711e-05 | 6.0396817981912195e-05 | 24.62% | 32.65% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x00\xff\x00\xff']` | 8.117130753373513e-05 | 5.9646945786034075e-05 | 26.52% | 36.11% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x01'*100]` | 8.063084675157273e-05 | 5.924631593922348e-05 | 26.53% | 36.13% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x01'*2048]` | 8.07167728191726e-05 | 5.944090682365743e-05 | 26.35% | 35.79% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x01\x02\x03']` | 8.107609520016998e-05 | 5.933301990534861e-05 | 26.82% | 36.64% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x10\x20\x30\x40\x50']` | 8.10749650413482e-05 | 5.944164448827515e-05 | 26.67% | 36.37% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x7f'*8]` | 8.041888251827769e-05 | 5.949617154519186e-05 | 26.02% | 35.17% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\x80'*8]` | 8.053701645679219e-05 | 5.9379879840034156e-05 | 26.28% | 35.65% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\xde\xad\xbe\xef']` | 8.141169197764143e-05 | 5.9234212965233625e-05 | 27.24% | 37.43% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\xff'*64]` | 8.036285805400978e-05 | 5.9500163025088024e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.094911765402969e-05 | 5.993030773640914e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.072699443205937e-05 | 5.92523754193224e-05 | 26.58% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.106341136128434e-05 | 5.9973612919610626e-05 | 26.02% | 35.17% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.047833723490895e-05 | 5.969119138107112e-05 | 25.82% | 34.79% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.088746595103102e-05 | 5.921288444954132e-05 | 26.79% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.101522769366835e-05 | 5.99220615271719e-05 | 26.04% | 35.22% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.09248798114672e-05 | 5.948235267557728e-05 | 26.51% | 36.08% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.086797028878647e-05 | 5.950471482355536e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.04693027751181e-05 | 5.9903180965378324e-05 | 25.55% | 34.32% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.04389243784029e-05 | 5.957830311371464e-05 | 25.94% | 35.01% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.117505709015811e-05 | 5.9739772670965064e-05 | 26.41% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.091522412987117e-05 | 5.947477279116213e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.048699704874978e-05 | 5.9715830842843745e-05 | 25.80% | 34.76% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.028313755465234e-05 | 5.982618062417173e-05 | 25.48% | 34.19% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 7.97844081404485e-05 | 5.901208992103129e-05 | 26.03% | 35.20% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.005062228706704e-05 | 5.92508233293805e-05 | 25.98% | 35.08% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.045026551796447e-05 | 5.942673591189031e-05 | 26.15% | 35.39% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.00533945050718e-05 | 5.948331331825366e-05 | 25.70% | 34.60% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.920050023123997e-05 | 5.888268532354289e-05 | 25.65% | 34.51% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x00'*32]` | 8.015939680188514e-05 | 5.957330875491155e-05 | 25.69% | 34.59% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x00\xff\x00\xff']` | 7.985762017671464e-05 | 5.994372515337207e-05 | 24.94% | 33.22% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x01'*100]` | 8.084443600880187e-05 | 5.991926423159754e-05 | 25.90% | 34.95% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x01'*2048]` | 8.152568688590576e-05 | 5.939321833887873e-05 | 27.15% | 37.29% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x01\x02\x03']` | 8.04799179873593e-05 | 5.916329577929554e-05 | 26.48% | 36.01% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x10\x20\x30\x40\x50']` | 8.008356588147753e-05 | 5.944553807960338e-05 | 25.78% | 34.73% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x7f'*8]` | 7.965084668239436e-05 | 5.928068640037642e-05 | 25.58% | 34.38% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\x80'*8]` | 7.969442225659233e-05 | 5.92174251928968e-05 | 25.69% | 34.59% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\xde\xad\xbe\xef']` | 8.036167403187803e-05 | 5.9450083843289235e-05 | 26.01% | 35.15% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\xff'*64]` | 8.017441162854824e-05 | 5.940228875431034e-05 | 25.91% | 34.96% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.080305642659396e-05 | 5.996114110300776e-05 | 25.80% | 34.77% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.098795879002063e-05 | 5.9311768808420005e-05 | 26.77% | 36.56% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.019158615833393e-05 | 6.016994378982517e-05 | 24.97% | 33.28% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.044140608012928e-05 | 5.920062183265686e-05 | 26.39% | 35.86% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.038095135200098e-05 | 6.0100784278610355e-05 | 25.22% | 33.70% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.058279644555927e-05 | 5.9398077486920366e-05 | 26.29% | 35.67% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.05280999215648e-05 | 5.9378182465757435e-05 | 26.28% | 35.66% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.03934458170945e-05 | 5.93576080895286e-05 | 26.17% | 35.46% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.109728965571567e-05 | 6.004826005848462e-05 | 25.95% | 35.03% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.058132006060635e-05 | 5.967098169686833e-05 | 25.95% | 35.03% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.99927127574909e-05 | 5.9375382245619615e-05 | 25.78% | 34.73% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.021178653240219e-05 | 5.9550842671507114e-05 | 25.76% | 34.69% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.069987056206655e-05 | 5.987410577163168e-05 | 25.80% | 34.76% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.045786672483041e-05 | 5.9447282229180264e-05 | 26.11% | 35.33% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.068080809334708e-05 | 5.968706341451898e-05 | 26.01% | 35.15% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.075921997165719e-05 | 5.9661061393961174e-05 | 26.14% | 35.37% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.099799859112091e-05 | 5.9646118500053846e-05 | 26.36% | 35.76% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.084389718504388e-05 | 5.951781309123878e-05 | 26.38% | 35.80% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.972100390544878e-05 | 5.9151572751638076e-05 | 25.80% | 34.77% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x00'*32]` | 8.002181091608186e-05 | 5.9682459344606106e-05 | 25.42% | 34.08% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x00\xff\x00\xff']` | 8.032906394393437e-05 | 5.978088628045995e-05 | 25.57% | 34.36% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x01'*100]` | 8.06767385981595e-05 | 5.9909197430368136e-05 | 25.75% | 34.66% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x01'*2048]` | 8.104745879611969e-05 | 5.959604619832668e-05 | 26.48% | 36.01% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x01\x02\x03']` | 8.073819649781761e-05 | 5.9151220088451827e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x10\x20\x30\x40\x50']` | 8.03104820826344e-05 | 5.9536738321414594e-05 | 25.90% | 34.94% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x7f'*8]` | 8.038036803683898e-05 | 5.952945378554035e-05 | 25.94% | 35.01% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\x80'*8]` | 8.018294697142125e-05 | 5.9491983954809093e-05 | 25.80% | 34.76% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\xde\xad\xbe\xef']` | 8.034801414621465e-05 | 5.961899277036189e-05 | 25.80% | 34.76% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\xff'*64]` | 8.022498402292206e-05 | 5.9596745584812566e-05 | 25.72% | 34.60% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.114119685351212e-05 | 5.98772867613388e-05 | 26.22% | 35.54% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.100604199200523e-05 | 5.9172650069343686e-05 | 26.95% | 36.90% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.059314746112116e-05 | 5.980710828591065e-05 | 25.79% | 34.73% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.085520288595594e-05 | 5.980770503394194e-05 | 26.04% | 35.22% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.109420198456803e-05 | 5.9924375661098276e-05 | 26.09% | 35.32% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.083159559422053e-05 | 5.96956399765568e-05 | 26.18% | 35.47% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.09594627573488e-05 | 5.991434729662849e-05 | 25.97% | 35.05% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.066123966787597e-05 | 5.972848226332388e-05 | 25.94% | 35.01% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.103237603525437e-05 | 5.988615713488776e-05 | 26.10% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.014788670591647e-05 | 5.991965568401675e-05 | 25.24% | 33.75% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.080796544681681e-05 | 5.9668188968007676e-05 | 26.16% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.076247880420546e-05 | 5.9801467656699575e-05 | 25.95% | 35.03% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.15295914764137e-05 | 5.98655228782831e-05 | 26.58% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.109438499044747e-05 | 5.9730845194140264e-05 | 26.34% | 35.76% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.052760337366542e-05 | 5.9840496134104016e-05 | 25.69% | 34.60% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.134673662211745e-05 | 5.944882251994708e-05 | 26.92% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.132309238353451e-05 | 5.959982895459137e-05 | 26.73% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.133998072398687e-05 | 5.980624508113037e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.96467246958363e-05 | 5.951079683905484e-05 | 25.28% | 33.83% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x00'*32]` | 8.05397170667979e-05 | 5.9988565625081716e-05 | 25.51% | 34.24% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x00\xff\x00\xff']` | 8.09603967691322e-05 | 5.9696936332418176e-05 | 26.26% | 35.61% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x01'*100]` | 8.106907682733361e-05 | 5.9610897111060844e-05 | 26.48% | 36.01% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x01'*2048]` | 8.113866898078928e-05 | 5.980369423032005e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x01\x02\x03']` | 8.102686148079231e-05 | 5.982884339129821e-05 | 26.17% | 35.47% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x10\x20\x30\x40\x50']` | 8.09711510841009e-05 | 5.9431779349421385e-05 | 26.61% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x7f'*8]` | 8.099605841985485e-05 | 5.976034914311742e-05 | 26.22% | 35.55% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\x80'*8]` | 8.09167153712561e-05 | 5.96082728460133e-05 | 26.34% | 35.77% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\xde\xad\xbe\xef']` | 8.08451022511934e-05 | 5.979405899583846e-05 | 26.04% | 35.22% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\xff'*64]` | 8.042218876926824e-05 | 5.981490757075539e-05 | 25.63% | 34.48% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 8.125572664933795e-05 | 5.964824689256798e-05 | 26.60% | 36.25% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 8.09351454509416e-05 | 5.9786322720470444e-05 | 26.13% | 35.36% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 8.105675874472547e-05 | 5.994449885939273e-05 | 26.07% | 35.29% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.072257238687566e-05 | 5.975282049224772e-05 | 25.99% | 35.10% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.089218181875499e-05 | 5.938277334399392e-05 | 26.59% | 36.24% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.115109202767462e-05 | 5.995952549385349e-05 | 26.13% | 35.36% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.046710394813844e-05 | 5.96403396988568e-05 | 25.87% | 34.88% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.113636600839253e-05 | 5.970931346974391e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.122052254600303e-05 | 5.9661768799458364e-05 | 26.55% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 8.0222587202782e-05 | 5.960933016184829e-05 | 25.71% | 34.57% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 8.043648047340065e-05 | 5.9823241845365245e-05 | 25.65% | 34.52% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.058708511365317e-05 | 5.9750401430424314e-05 | 25.85% | 34.84% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.867259789010689e-05 | 5.302571234751677e-05 | 32.60% | 48.39% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.933871475949283e-05 | 5.271724256128392e-05 | 33.58% | 50.51% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.88377356692582e-05 | 5.255580825994872e-05 | 33.34% | 50.02% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.861860100912482e-05 | 5.2618303851294144e-05 | 33.08% | 49.43% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.890721584899997e-05 | 5.279287313233001e-05 | 33.09% | 49.46% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.886597349690497e-05 | 5.2671244958508375e-05 | 33.20% | 49.71% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.706568317173827e-05 | 5.26262569668727e-05 | 31.70% | 46.41% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x00'*32]` | 7.892905713239831e-05 | 5.2667569155820845e-05 | 33.27% | 49.86% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x00\xff\x00\xff']` | 7.88255159320393e-05 | 5.26910294547454e-05 | 33.17% | 49.62% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x01'*100]` | 7.868497270968175e-05 | 5.262704505366021e-05 | 33.10% | 49.47% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x01'*2048]` | 7.90591533833382e-05 | 5.290690047547039e-05 | 33.09% | 49.44% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x01\x02\x03']` | 7.937911496046852e-05 | 5.290636755163801e-05 | 33.34% | 50.02% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x10\x20\x30\x40\x50']` | 7.89151846881377e-05 | 5.286375977267719e-05 | 33.00% | 49.26% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x7f'*8]` | 7.875408771717374e-05 | 5.2745614685716855e-05 | 33.02% | 49.30% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\x80'*8]` | 7.882464227867983e-05 | 5.266218593560824e-05 | 33.19% | 49.66% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\xde\xad\xbe\xef']` | 7.890527485770644e-05 | 5.286647896187145e-05 | 33.00% | 49.26% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\xff'*64]` | 7.933067628579164e-05 | 5.2730016337144625e-05 | 33.55% | 50.50% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 7.941233494171732e-05 | 5.2521892369854294e-05 | 33.86% | 51.21% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.89511755240873e-05 | 5.272706600996718e-05 | 33.22% | 49.74% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 7.9072981691547e-05 | 5.2619550837429854e-05 | 33.45% | 50.30% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.895262352853334e-05 | 5.2691529706364194e-05 | 33.26% | 49.82% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.886189844976654e-05 | 5.2528861196232854e-05 | 33.39% | 50.16% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.92518615393394e-05 | 5.273455893655569e-05 | 33.46% | 50.32% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.912284316639602e-05 | 5.2745081507903065e-05 | 33.35% | 50.04% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.902275464378148e-05 | 5.266239364681267e-05 | 33.36% | 50.07% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.870813760362712e-05 | 5.265165015084487e-05 | 33.11% | 49.50% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.883616547129322e-05 | 5.2652121324285464e-05 | 33.21% | 49.73% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.859009196789037e-05 | 5.271115026356437e-05 | 32.92% | 48.98% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.903357055530935e-05 | 5.269079728593715e-05 | 33.35% | 50.03% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.85305146548959e-05 | 5.271987707620093e-05 | 32.87% | 48.96% | 1.49x | ✅ |
| `hexbytes_new['']` | 7.110611696415657e-05 | 2.9247642072252628e-05 | 58.87% | 143.12% | 2.43x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.907822209939435e-05 | 4.422785180190531e-05 | 50.35% | 101.41% | 2.01x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.018498840355594e-05 | 4.381203031468709e-05 | 51.42% | 105.85% | 2.06x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.540134338040517e-05 | 4.127620362912157e-05 | 51.67% | 106.90% | 2.07x | ✅ |
| `hexbytes_new['0x']` | 7.656364240793985e-05 | 2.877580651074928e-05 | 62.42% | 166.07% | 2.66x | ✅ |
| `hexbytes_new['0x1234']` | 8.537284075613134e-05 | 3.945859968529404e-05 | 53.78% | 116.36% | 2.16x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.466700475600303e-05 | 3.926204087209697e-05 | 53.63% | 115.65% | 2.16x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.25243633170838e-05 | 3.944745673521482e-05 | 52.20% | 109.20% | 2.09x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.474879538568271e-05 | 3.942562166934856e-05 | 53.48% | 114.96% | 2.15x | ✅ |
| `hexbytes_new['abc']` | 8.218240469633888e-05 | 4.150225899716814e-05 | 49.50% | 98.02% | 1.98x | ✅ |
| `hexbytes_new['deadbeef']` | 7.694686057631972e-05 | 3.644514350498496e-05 | 52.64% | 111.13% | 2.11x | ✅ |
| `hexbytes_new[0-9]` | 4.2218008999487016e-05 | 2.4839764099507788e-05 | 41.16% | 69.96% | 1.70x | ✅ |
| `hexbytes_new[0]` | 0.0001238573474190622 | 3.7807852965620456e-05 | 69.47% | 227.60% | 3.28x | ✅ |
| `hexbytes_new[123456]` | 0.00012651615214212048 | 3.7462492250648136e-05 | 70.39% | 237.71% | 3.38x | ✅ |
| `hexbytes_new[2**16]` | 0.0001281345568765 | 3.783526419324255e-05 | 70.47% | 238.66% | 3.39x | ✅ |
| `hexbytes_new[2**256-1]` | 0.0001305279654506546 | 4.614820039270823e-05 | 64.64% | 182.85% | 2.83x | ✅ |
| `hexbytes_new[2**32]` | 0.0001291764505763184 | 4.046308873189431e-05 | 68.68% | 219.25% | 3.19x | ✅ |
| `hexbytes_new[2**64]` | 0.00012958845903402358 | 4.285032878999906e-05 | 66.93% | 202.42% | 3.02x | ✅ |
| `hexbytes_new[2**8]` | 0.00012999103171977322 | 3.849093636352875e-05 | 70.39% | 237.72% | 3.38x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4235124912108644e-05 | 2.6451762347614413e-05 | 40.20% | 67.23% | 1.67x | ✅ |
| `hexbytes_new[False]` | 5.7109150642323456e-05 | 2.5696628109247217e-05 | 55.00% | 122.24% | 2.22x | ✅ |
| `hexbytes_new[True]` | 6.001509196544041e-05 | 2.5720572807667995e-05 | 57.14% | 133.33% | 2.33x | ✅ |
| `hexbytes_new[all byte values]` | 4.4698597436380415e-05 | 2.718723181525886e-05 | 39.18% | 64.41% | 1.64x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.363261124673777e-05 | 2.5828717508498885e-05 | 40.80% | 68.93% | 1.69x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.37147972222686e-05 | 2.5789266317800718e-05 | 41.01% | 69.51% | 1.70x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.277957191024388e-05 | 2.4767248904255542e-05 | 42.10% | 72.73% | 1.73x | ✅ |
| `hexbytes_new[b'']` | 4.227489730000617e-05 | 2.5035915767503926e-05 | 40.78% | 68.86% | 1.69x | ✅ |
| `hexbytes_new[b'\x00'*32]` | 4.2408475867380275e-05 | 2.4077768670823522e-05 | 43.22% | 76.13% | 1.76x | ✅ |
| `hexbytes_new[b'\x00\xff\x00\xff']` | 4.309859694028344e-05 | 2.470791838447801e-05 | 42.67% | 74.43% | 1.74x | ✅ |
| `hexbytes_new[b'\x01'*100]` | 4.270329515521949e-05 | 2.5868785223905073e-05 | 39.42% | 65.08% | 1.65x | ✅ |
| `hexbytes_new[b'\x01'*2048]` | 5.49923443806095e-05 | 3.625563248661583e-05 | 34.07% | 51.68% | 1.52x | ✅ |
| `hexbytes_new[b'\x01\x02\x03']` | 4.331387773663198e-05 | 2.4691101196285233e-05 | 42.99% | 75.42% | 1.75x | ✅ |
| `hexbytes_new[b'\x10\x20\x30\x40\x50']` | 4.2698089177583676e-05 | 2.5053980648177234e-05 | 41.32% | 70.42% | 1.70x | ✅ |
| `hexbytes_new[b'\x7f'*8]` | 4.283133584742631e-05 | 2.4578583802088582e-05 | 42.62% | 74.26% | 1.74x | ✅ |
| `hexbytes_new[b'\x80'*8]` | 4.2758026642883686e-05 | 2.456171661061161e-05 | 42.56% | 74.08% | 1.74x | ✅ |
| `hexbytes_new[b'\xde\xad\xbe\xef']` | 4.316646904647953e-05 | 2.4651607358229816e-05 | 42.89% | 75.11% | 1.75x | ✅ |
| `hexbytes_new[b'\xff'*64]` | 4.39789755210193e-05 | 2.571656383021084e-05 | 41.53% | 71.01% | 1.71x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.934743886398508e-05 | 3.068664914398422e-05 | 37.82% | 60.81% | 1.61x | ✅ |
| `hexbytes_new[b'abc']` | 4.29546944150122e-05 | 2.484534065783701e-05 | 42.16% | 72.89% | 1.73x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.782070518550947e-05 | 3.405842489150025e-05 | 49.78% | 99.13% | 1.99x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.020101575534454e-05 | 3.7117796382833374e-05 | 47.13% | 89.13% | 1.89x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.068993493383657e-05 | 3.701486852398984e-05 | 47.64% | 90.98% | 1.91x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.792100754609193e-05 | 3.4384046623693636e-05 | 49.38% | 97.54% | 1.98x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.838218411342632e-05 | 3.641896715780786e-05 | 46.74% | 87.77% | 1.88x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.692784158450417e-05 | 3.396899955314511e-05 | 49.25% | 97.03% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.716204284818242e-05 | 3.3019949280202435e-05 | 50.84% | 103.40% | 2.03x | ✅ |
| `hexbytes_new[bytearray(b'\x00'*32)]` | 6.814215481466295e-05 | 3.43327094562498e-05 | 49.62% | 98.48% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\x00\xff\x00\xff')]` | 6.794215906678314e-05 | 3.489900342440313e-05 | 48.63% | 94.68% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\x01'*100)]` | 6.991987249650581e-05 | 3.5351566156682795e-05 | 49.44% | 97.78% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\x01'*2048)]` | 8.75408102590116e-05 | 5.393412605143254e-05 | 38.39% | 62.31% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\x01\x02\x03')]` | 6.782901651254008e-05 | 3.4482979036347726e-05 | 49.16% | 96.70% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\x10\x20\x30\x40\x50')]` | 6.72732555006822e-05 | 3.426092935203108e-05 | 49.07% | 96.36% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\x7f'*8)]` | 6.690130250078638e-05 | 3.390417414464032e-05 | 49.32% | 97.32% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\x80'*8)]` | 6.78709728274278e-05 | 3.3910971401480405e-05 | 50.04% | 100.14% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\xde\xad\xbe\xef')]` | 6.771955826747288e-05 | 3.460177448261763e-05 | 48.90% | 95.71% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\xff'*64)]` | 6.848256669994332e-05 | 3.4862895538563695e-05 | 49.09% | 96.43% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.2250140147764e-05 | 4.752603565861113e-05 | 42.22% | 73.06% | 1.73x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.848692667203896e-05 | 3.459689023823912e-05 | 49.48% | 97.96% | 1.98x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.263693671385421e-05 | 4.7416658996428595e-05 | 42.62% | 74.28% | 1.74x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.850828654051088e-05 | 3.459249176274862e-05 | 49.51% | 98.04% | 1.98x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.711114518395535e-05 | 3.404658706678927e-05 | 49.27% | 97.12% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.800527018730098e-05 | 3.394486998563484e-05 | 50.08% | 100.34% | 2.00x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.833239215692675e-05 | 3.422918994714621e-05 | 49.91% | 99.63% | 2.00x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.815358862694224e-05 | 3.451439888233193e-05 | 49.36% | 97.46% | 1.97x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.888353230559869e-05 | 3.628586508967877e-05 | 47.32% | 89.84% | 1.90x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.818540862944636e-05 | 3.450470437505877e-05 | 49.40% | 97.61% | 1.98x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.872319214119784e-05 | 3.506028913969941e-05 | 48.98% | 96.01% | 1.96x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.918617139967165e-05 | 3.4587051487639096e-05 | 50.01% | 100.03% | 2.00x | ✅ |
| `hexbytes_new[long alternating]` | 5.012230276393655e-05 | 3.0873196002240385e-05 | 38.40% | 62.35% | 1.62x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.41652201890409e-05 | 4.201000434858156e-05 | 50.09% | 100.35% | 2.00x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.636093676336883e-05 | 4.500211662677277e-05 | 47.89% | 91.90% | 1.92x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.678956313928611e-05 | 4.4677832927145854e-05 | 48.52% | 94.26% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.390284051585188e-05 | 4.2723715153733336e-05 | 49.08% | 96.38% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.432021733425456e-05 | 4.280784987211167e-05 | 49.23% | 96.97% | 1.97x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.375587240669796e-05 | 4.265571594487472e-05 | 49.07% | 96.35% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.220748175286055e-05 | 3.992781341438157e-05 | 51.43% | 105.89% | 2.06x | ✅ |
| `hexbytes_new[memoryview(b'\x00'*32)]` | 8.27879960809375e-05 | 4.211380507182377e-05 | 49.13% | 96.58% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\x00\xff\x00\xff')]` | 8.390076889380432e-05 | 4.222032493006758e-05 | 49.68% | 98.72% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\x01'*100)]` | 8.422973045693937e-05 | 4.240498025597364e-05 | 49.66% | 98.63% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\x01'*2048)]` | 0.00010412247047925015 | 6.146802113597058e-05 | 40.97% | 69.39% | 1.69x | ✅ |
| `hexbytes_new[memoryview(b'\x01\x02\x03')]` | 8.397491212564028e-05 | 4.257408768977069e-05 | 49.30% | 97.24% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\x10\x20\x30\x40\x50')]` | 8.46172129632406e-05 | 4.227771617739256e-05 | 50.04% | 100.15% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\x7f'*8)]` | 8.267115753293117e-05 | 4.1862872687981416e-05 | 49.36% | 97.48% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\x80'*8)]` | 8.326827602421969e-05 | 4.258166675944418e-05 | 48.86% | 95.55% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\xde\xad\xbe\xef')]` | 8.367870161252743e-05 | 4.205767225587506e-05 | 49.74% | 98.96% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\xff'*64)]` | 8.466471027896374e-05 | 4.260718412757146e-05 | 49.68% | 98.71% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.864685145396992e-05 | 5.5571244455183533e-05 | 43.67% | 77.51% | 1.78x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.367479726245197e-05 | 4.1819972122497125e-05 | 50.02% | 100.08% | 2.00x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.876619725375811e-05 | 5.574100883541415e-05 | 43.56% | 77.19% | 1.77x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.515749229424097e-05 | 4.325934696439824e-05 | 49.20% | 96.85% | 1.97x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.328575532092768e-05 | 4.189835267116132e-05 | 49.69% | 98.78% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.419470829619435e-05 | 4.1846745499335406e-05 | 50.30% | 101.20% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.344432226707367e-05 | 4.210578520157283e-05 | 49.54% | 98.18% | 1.98x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.312307313483105e-05 | 4.233176536236064e-05 | 49.07% | 96.36% | 1.96x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.316804598152516e-05 | 4.27168332157396e-05 | 48.64% | 94.70% | 1.95x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.392198555830601e-05 | 4.306525998591447e-05 | 48.68% | 94.87% | 1.95x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.286061287777635e-05 | 4.265478774577782e-05 | 48.52% | 94.26% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.427139626845093e-05 | 4.275545887911281e-05 | 49.26% | 97.10% | 1.97x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.342286897301396e-05 | 2.563432509614618e-05 | 40.97% | 69.39% | 1.69x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.255230551424882e-05 | 2.4817363876812924e-05 | 41.68% | 71.46% | 1.71x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.2541628999919395e-05 | 2.4875785181398623e-05 | 41.53% | 71.02% | 1.71x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.298964599832624e-05 | 2.4902041787057602e-05 | 42.07% | 72.64% | 1.73x | ✅ |
| `hexbytes_new[palindrome]` | 4.2705188576758537e-05 | 2.3943847583251513e-05 | 43.93% | 78.36% | 1.78x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.279497027818077e-05 | 2.518004654126066e-05 | 41.16% | 69.96% | 1.70x | ✅ |
| `hexbytes_new[single 0xff]` | 4.262120832947954e-05 | 2.5547449454724684e-05 | 40.06% | 66.83% | 1.67x | ✅ |
| `hexbytes_new[single null byte]` | 4.264880454156915e-05 | 2.5523759679637562e-05 | 40.15% | 67.09% | 1.67x | ✅ |
| `hexbytes_new[two patterns]` | 4.3683643479996374e-05 | 2.5786720184383043e-05 | 40.97% | 69.40% | 1.69x | ✅ |
| `hexbytes_repr[0-9]` | 3.388219715475109e-05 | 1.561001962589094e-05 | 53.93% | 117.05% | 2.17x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012466282451548382 | 4.1708572475335936e-05 | 66.54% | 198.89% | 2.99x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012427528805836142 | 4.1672858299060687e-05 | 66.47% | 198.22% | 2.98x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.36605059165539e-05 | 2.095420713954024e-05 | 60.95% | 156.08% | 2.56x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.361950008339297e-05 | 2.0919674005668122e-05 | 60.98% | 156.31% | 2.56x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.5109930504514265e-05 | 1.9369678787503192e-05 | 57.06% | 132.89% | 2.33x | ✅ |
| `hexbytes_repr[b'']` | 2.5234740873756447e-05 | 1.2336888392919601e-05 | 51.11% | 104.55% | 2.05x | ✅ |
| `hexbytes_repr[b'\x00'*32]` | 4.127919152964111e-05 | 1.746770229489318e-05 | 57.68% | 136.32% | 2.36x | ✅ |
| `hexbytes_repr[b'\x00\xff\x00\xff']` | 3.2455623931847736e-05 | 1.4545244483118025e-05 | 55.18% | 123.14% | 2.23x | ✅ |
| `hexbytes_repr[b'\x01'*100]` | 6.648365072108627e-05 | 2.4502750795368466e-05 | 63.14% | 171.33% | 2.71x | ✅ |
| `hexbytes_repr[b'\x01'*2048]` | 0.0007703843362781556 | 0.0002235682322864015 | 70.98% | 244.59% | 3.45x | ✅ |
| `hexbytes_repr[b'\x01\x02\x03']` | 3.174018249216361e-05 | 1.4644653582118003e-05 | 53.86% | 116.74% | 2.17x | ✅ |
| `hexbytes_repr[b'\x10\x20\x30\x40\x50']` | 3.277267024570937e-05 | 1.4635281259749667e-05 | 55.34% | 123.93% | 2.24x | ✅ |
| `hexbytes_repr[b'\x7f'*8]` | 3.3594713338952175e-05 | 1.5369208281417234e-05 | 54.25% | 118.58% | 2.19x | ✅ |
| `hexbytes_repr[b'\x80'*8]` | 3.3660498605083544e-05 | 1.521930385645787e-05 | 54.79% | 121.17% | 2.21x | ✅ |
| `hexbytes_repr[b'\xde\xad\xbe\xef']` | 3.249485092179475e-05 | 1.4597163433455663e-05 | 55.08% | 122.61% | 2.23x | ✅ |
| `hexbytes_repr[b'\xff'*64]` | 5.373762815802136e-05 | 2.105965465975694e-05 | 60.81% | 155.17% | 2.55x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040529560179452086 | 0.00012199545884198806 | 69.90% | 232.22% | 3.32x | ✅ |
| `hexbytes_repr[b'abc']` | 3.193579280863781e-05 | 1.4702970412131371e-05 | 53.96% | 117.21% | 2.17x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004042188828458607 | 0.000122718709951302 | 69.64% | 229.39% | 3.29x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010304344959828065 | 3.5802201377470174e-05 | 65.26% | 187.81% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.388149474106343e-05 | 1.5528237190898424e-05 | 54.17% | 118.19% | 2.18x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.296320073432881e-05 | 1.5228694661794193e-05 | 53.80% | 116.45% | 2.16x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.269988247720959e-05 | 1.4987848439545592e-05 | 54.17% | 118.18% | 2.18x | ✅ |
| `hexbytes_repr[palindrome]` | 3.681356409935135e-05 | 1.6393280755634026e-05 | 55.47% | 124.56% | 2.25x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.676912800676216e-05 | 2.4744320884326003e-05 | 62.94% | 169.84% | 2.70x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.056769393593295e-05 | 1.4687084360929216e-05 | 51.95% | 108.13% | 2.08x | ✅ |
| `hexbytes_repr[single null byte]` | 3.063708877245248e-05 | 1.4626577179295852e-05 | 52.26% | 109.46% | 2.09x | ✅ |
| `hexbytes_repr[two patterns]` | 5.392532767674667e-05 | 2.123201440292206e-05 | 60.63% | 153.98% | 2.54x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7298831187544678e-05 | 1.513389450799091e-05 | 12.51% | 14.31% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.3216653528852583e-05 | 4.072809142719099e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.3275163258445196e-05 | 4.089684208449883e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.260591543755913e-05 | 2.0484987930655244e-05 | 9.38% | 10.35% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2713252509827197e-05 | 2.0430750895789794e-05 | 10.05% | 11.17% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0427895154353182e-05 | 1.856843609132191e-05 | 9.10% | 10.01% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.026209244846296e-05 | 1.2084087342936706e-05 | -17.75% | -15.08% | 0.85x | ❌ |
| `hexbytes_to_0x_hex[b'\x00'*32]` | 1.94447334586809e-05 | 1.689499535458249e-05 | 13.11% | 15.09% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\x00\xff\x00\xff']` | 1.675854486022142e-05 | 1.4610983308404025e-05 | 12.81% | 14.70% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\x01'*100]` | 2.6300781340107962e-05 | 2.397516988066615e-05 | 8.84% | 9.70% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\x01'*2048]` | 0.00022608847683892728 | 0.00022290888771978558 | 1.41% | 1.43% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\x01\x02\x03']` | 1.638183638564619e-05 | 1.4645193774382499e-05 | 10.60% | 11.86% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\x10\x20\x30\x40\x50']` | 1.6878469692607907e-05 | 1.4704213291116563e-05 | 12.88% | 14.79% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\x7f'*8]` | 1.7310604168894874e-05 | 1.5129687056490917e-05 | 12.60% | 14.41% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\x80'*8]` | 1.7195706493606917e-05 | 1.5081269153024118e-05 | 12.30% | 14.02% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\xde\xad\xbe\xef']` | 1.7135026200913913e-05 | 1.4642456794118693e-05 | 14.55% | 17.02% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\xff'*64]` | 2.266383538451679e-05 | 2.038775351858712e-05 | 10.04% | 11.16% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012440195455998217 | 0.00012241385575284547 | 1.60% | 1.62% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6433408003838214e-05 | 1.4638118765448805e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012404267454761174 | 0.00012154891219045605 | 2.01% | 2.05% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.6829073309854805e-05 | 3.446916453733039e-05 | 6.41% | 6.85% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7328202845197288e-05 | 1.5117378632467618e-05 | 12.76% | 14.62% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.709587713637096e-05 | 1.4921570465489034e-05 | 12.72% | 14.57% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.680142228537817e-05 | 1.4629335351068768e-05 | 12.93% | 14.85% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.8140717990742357e-05 | 1.5925610713464325e-05 | 12.21% | 13.91% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.6185206708416745e-05 | 2.3936994449581292e-05 | 8.59% | 9.39% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5941039281618467e-05 | 1.4230238900567173e-05 | 10.73% | 12.02% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.59734900402096e-05 | 1.4251991285088412e-05 | 10.78% | 12.08% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.256489584428214e-05 | 2.035545903478946e-05 | 9.79% | 10.85% | 1.11x | ✅ |
