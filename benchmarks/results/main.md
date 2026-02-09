#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/pytest-codspeed-4.x/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/pytest-codspeed-4.x/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.7512511586062623e-05 | 2.5746474606300312e-05 | 6.42% | 6.86% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.740229562825667e-05 | 2.582627669847129e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.709167880895982e-05 | 2.5944574235482015e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.73360853057024e-05 | 2.5798479649748355e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.750896804173032e-05 | 2.5896163210966214e-05 | 5.86% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.730069784676942e-05 | 2.5743587051336563e-05 | 5.70% | 6.05% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.7236177327924908e-05 | 2.5636387899099366e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.700079498165948e-05 | 2.5819599296432414e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.7268452209565845e-05 | 2.57717190422301e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.7452929736060483e-05 | 2.5685230138708955e-05 | 6.44% | 6.88% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.735229649475653e-05 | 2.588282874952287e-05 | 5.37% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.747814069481756e-05 | 2.5708213908758398e-05 | 6.44% | 6.88% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.7383874385657858e-05 | 2.581704040305044e-05 | 5.72% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.721171473781524e-05 | 2.5606639203014952e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.729860294922973e-05 | 2.5728516843225842e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.7042956318527832e-05 | 2.5766358023405285e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.7343530410148016e-05 | 2.5855175123484367e-05 | 5.44% | 5.76% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.7373048423041988e-05 | 2.5910438661213626e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.7651630788010184e-05 | 2.5781342144958147e-05 | 6.76% | 7.25% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.735243609830573e-05 | 2.57911352428018e-05 | 5.71% | 6.05% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.7537440252602753e-05 | 2.5744807851103693e-05 | 6.51% | 6.96% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.7511928188011126e-05 | 2.5652301289438007e-05 | 6.76% | 7.25% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.7393276736108066e-05 | 2.5889008422547696e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.7865845307594295e-05 | 2.5867334377981197e-05 | 7.17% | 7.73% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6834659431123995e-05 | 2.5681025594011923e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.7449780005479146e-05 | 2.576991385071246e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6399092680148108e-05 | 2.5291348099073538e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.628300976535716e-05 | 2.554843219682456e-05 | 2.79% | 2.88% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6515383284659568e-05 | 2.5339931914173335e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6164698673025442e-05 | 2.505850827458084e-05 | 4.23% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6458120677593372e-05 | 2.5288536870080533e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6643663566570722e-05 | 2.5700600953833244e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6126367271845647e-05 | 2.5258896025921734e-05 | 3.32% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6286990103593e-05 | 2.5443412461352985e-05 | 3.21% | 3.32% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.639606376924098e-05 | 2.539665866835529e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.642846609317472e-05 | 2.553676602831784e-05 | 3.37% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6462545116129355e-05 | 2.5247240677576024e-05 | 4.59% | 4.81% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.636484816185563e-05 | 2.5496280895180045e-05 | 3.29% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6569038490390534e-05 | 2.5402050115227094e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6337349029402794e-05 | 2.5161923629469967e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6266156251445985e-05 | 2.5359866817124764e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6719477480912657e-05 | 2.5417132473107497e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.635496106468196e-05 | 2.519201094987691e-05 | 4.41% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6482846806957114e-05 | 2.4805648817843826e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6301244378598982e-05 | 2.535711810409632e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6438224624138283e-05 | 2.5541430096216964e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6353595836091763e-05 | 2.535926009463831e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6529748358242925e-05 | 2.5480310392904853e-05 | 3.96% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6524253737548712e-05 | 2.538844628131428e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6429737596953842e-05 | 2.5379349088178132e-05 | 3.97% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6636118556101267e-05 | 2.5332538288732365e-05 | 4.89% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6485050475042736e-05 | 2.5482065479556975e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.686106472015151e-05 | 2.5454986746796645e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6410611661296658e-05 | 2.5444083175946564e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6392229922763558e-05 | 2.5226693307684577e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6693735086038575e-05 | 2.53318254728652e-05 | 5.10% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.6596391990614448e-05 | 2.4964661085507405e-05 | 6.14% | 6.54% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.647720936439428e-05 | 2.5298543429614636e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6422578225182865e-05 | 2.521358874773993e-05 | 4.58% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6617016926608823e-05 | 2.529809646406289e-05 | 4.96% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.650741381697057e-05 | 2.5172337277738662e-05 | 5.04% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.640198204721969e-05 | 2.55314439975474e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.649830015338961e-05 | 2.5149099928700872e-05 | 5.09% | 5.36% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.627554817625802e-05 | 2.5330678137490535e-05 | 3.60% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6651744382619715e-05 | 2.527878670503506e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.633584550574467e-05 | 2.5302415782201016e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6235029920684744e-05 | 2.549629770538121e-05 | 2.82% | 2.90% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.646613319743579e-05 | 2.5405136302429617e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6387399813821837e-05 | 2.5339777616787035e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6829152974748666e-05 | 2.5378909971875327e-05 | 5.41% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.685370971673294e-05 | 2.5157291105402777e-05 | 6.32% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6732175165966456e-05 | 2.5218272909034115e-05 | 5.66% | 6.00% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.669487828462999e-05 | 2.54278197714883e-05 | 4.75% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.629821872691857e-05 | 2.5246503462451395e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.629713208989454e-05 | 2.529661263938692e-05 | 3.80% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6567165648536037e-05 | 2.5358875729232996e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.653957966548711e-05 | 2.514759481256362e-05 | 5.24% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.6213339687397498e-05 | 2.5524375325744224e-05 | 2.63% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.639112178377605e-05 | 2.5101365238258883e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6528579470002714e-05 | 2.5351752369575585e-05 | 4.44% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6709507595645615e-05 | 2.5314256647897313e-05 | 5.22% | 5.51% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6625884965873996e-05 | 2.5193256327623516e-05 | 5.38% | 5.69% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.627584787430878e-05 | 2.5210529017972936e-05 | 4.05% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6605447064973007e-05 | 2.5056540745534754e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6578292902657527e-05 | 2.529022921479041e-05 | 4.85% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.681684189596888e-05 | 2.5186511963230374e-05 | 6.08% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.7155134088875887e-05 | 2.5275425978885254e-05 | 6.92% | 7.44% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.6433036445641517e-05 | 2.587505627126328e-05 | 2.11% | 2.16% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.631788720291575e-05 | 2.5437322851858614e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6118877585158314e-05 | 2.5447365287915065e-05 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6843974478809735e-05 | 2.5389071463195645e-05 | 5.42% | 5.73% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.65927151378087e-05 | 2.5285244349163762e-05 | 4.92% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6307825571409694e-05 | 2.5380236101432985e-05 | 3.53% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6526049185006975e-05 | 2.5425617975667737e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6489328433287392e-05 | 2.5971404419295882e-05 | 1.96% | 1.99% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.650420877421241e-05 | 2.5355160442858943e-05 | 4.34% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6494491133054094e-05 | 2.5327070100962385e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.719198378744683e-05 | 2.533448119125719e-05 | 6.83% | 7.33% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6348835534964715e-05 | 2.5196299616224118e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.7049130734285652e-05 | 2.5049826005611566e-05 | 7.39% | 7.98% | 1.08x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6628643928523618e-05 | 2.5256592241028497e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.672981405990721e-05 | 2.5383251679344565e-05 | 5.04% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6735753835996847e-05 | 2.5206170958214052e-05 | 5.72% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6717634557392436e-05 | 2.5320943867600765e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6685198254525426e-05 | 2.5298899802820955e-05 | 5.20% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6736200153918995e-05 | 2.5053119683212595e-05 | 6.30% | 6.72% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6689769603141392e-05 | 2.5577415743773872e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6805903634333323e-05 | 2.5534392360120684e-05 | 4.74% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6633584726068712e-05 | 2.5530791107748888e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6629078265831813e-05 | 2.546108682706557e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.6741343696346943e-05 | 2.5516958183350054e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6914051708416178e-05 | 2.5386021540128283e-05 | 5.68% | 6.02% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6767353876649897e-05 | 2.5218796992570208e-05 | 5.79% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.6135472886967648e-05 | 2.5395395566508697e-05 | 2.83% | 2.91% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6797038618202316e-05 | 2.5650075002506037e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6536766535297775e-05 | 2.520963549770681e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.661986339638308e-05 | 2.5431584553382337e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6828666799426263e-05 | 2.530873973152632e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.68182028707684e-05 | 2.5535713384292444e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6785990336679042e-05 | 2.5443973537932158e-05 | 5.01% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6651633398991595e-05 | 2.529902123768034e-05 | 5.08% | 5.35% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.6743773420012247e-05 | 2.5413582186026803e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.662583138887682e-05 | 2.5476714616179784e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6497368274360233e-05 | 2.5369564155391592e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6460204045044327e-05 | 2.5351800491617184e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.6570461262747956e-05 | 2.5316334498772674e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.626516997100114e-05 | 2.5347656454547096e-05 | 3.49% | 3.62% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6735530725305782e-05 | 2.5575967460305446e-05 | 4.34% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6361452785638732e-05 | 2.5261925197723773e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.650182824531277e-05 | 2.5372766815705846e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.678648865000992e-05 | 2.5314681948001468e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.668841986265798e-05 | 2.5373596510105514e-05 | 4.93% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6878037958847494e-05 | 2.547790111390695e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.667748475090531e-05 | 2.513993102130673e-05 | 5.76% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.681216577382543e-05 | 2.5345669243244466e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6511357990412366e-05 | 2.5331496126035337e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6257895406447785e-05 | 2.5236092005694147e-05 | 3.89% | 4.05% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.680444177652467e-05 | 2.5414840631702405e-05 | 5.18% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.6644357848595832e-05 | 2.527159899506655e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6574954021774537e-05 | 2.484428627228371e-05 | 6.51% | 6.97% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.653438430369925e-05 | 2.5402062321019312e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.6695798758020854e-05 | 2.5188575848793112e-05 | 5.65% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6312712204931838e-05 | 2.5145789216670285e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.691089541067424e-05 | 2.538434875614863e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6695611577242016e-05 | 2.5232003400518523e-05 | 5.48% | 5.80% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.680838817514843e-05 | 2.5517626916349464e-05 | 4.81% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.678118763098901e-05 | 2.53540143272171e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.6735435412290198e-05 | 2.540713934834985e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.671506924730357e-05 | 2.518251624040121e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.668738676304331e-05 | 2.5378033784067933e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.66714386071412e-05 | 2.540793585854125e-05 | 4.74% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.699582848469821e-05 | 2.5564394452509123e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6718516946213606e-05 | 2.528789228925949e-05 | 5.35% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.6720852651494537e-05 | 2.542279636709478e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6504917459962564e-05 | 2.5304081916873502e-05 | 4.53% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6529555734460694e-05 | 2.503977082992896e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6593772858598782e-05 | 2.540129199637869e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6658233077243027e-05 | 2.538111438636364e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6667994588014365e-05 | 2.5382724416220537e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.649352015604902e-05 | 2.5728525344249566e-05 | 2.89% | 2.97% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6991792277628702e-05 | 2.5383183392557553e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6709800016937657e-05 | 2.5713685178260147e-05 | 3.73% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.663455379642916e-05 | 2.55044400173123e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.681694816083225e-05 | 2.5266488685084713e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.668263132840412e-05 | 2.551140778613014e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6736555156045516e-05 | 2.5249824355110136e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6569566222243645e-05 | 2.5322121592214564e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6828558077628145e-05 | 2.508934336179039e-05 | 6.48% | 6.93% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6466890171310315e-05 | 2.5392481996568685e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.674118806204964e-05 | 2.555956772538576e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.680820258113086e-05 | 2.534536944430676e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.64387473761207e-05 | 2.5389330862811582e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.25762629646058e-05 | 5.560825931350043e-05 | 32.66% | 48.50% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.162317209928444e-05 | 5.432957279505924e-05 | 33.44% | 50.24% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.170944558876395e-05 | 5.574887390901386e-05 | 31.77% | 46.57% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.255234823315464e-05 | 5.529762679010967e-05 | 33.02% | 49.29% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.28604222795789e-05 | 5.5282621598838486e-05 | 33.28% | 49.89% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.180341534142535e-05 | 5.516792580506611e-05 | 32.56% | 48.28% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.912833147649147e-05 | 5.3210193351334686e-05 | 32.75% | 48.71% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.314013578177139e-05 | 5.540304321729428e-05 | 33.36% | 50.06% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.255145509012428e-05 | 5.5518799381275406e-05 | 32.75% | 48.69% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.197836722199255e-05 | 5.526544488145571e-05 | 32.59% | 48.34% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.277475538755927e-05 | 5.479738116817425e-05 | 33.80% | 51.06% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.275339320530746e-05 | 5.529766806594911e-05 | 33.18% | 49.65% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.258629356180171e-05 | 5.5396689783893805e-05 | 32.92% | 49.08% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.233975942938991e-05 | 5.538076355647246e-05 | 32.74% | 48.68% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.2650098018763e-05 | 5.604133539131327e-05 | 32.19% | 47.48% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.192385531796047e-05 | 5.483740275203313e-05 | 33.06% | 49.39% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.263394828138668e-05 | 5.622107066724665e-05 | 31.96% | 46.98% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.250371058215481e-05 | 5.5539618714689235e-05 | 32.68% | 48.55% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.211420353803355e-05 | 5.522925936674234e-05 | 32.74% | 48.68% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.232338820552903e-05 | 5.515982278590968e-05 | 33.00% | 49.25% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.30825583306792e-05 | 5.5049598342218567e-05 | 33.74% | 50.92% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.231292768911913e-05 | 5.558503001386498e-05 | 32.47% | 48.08% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.230785161440577e-05 | 5.707169708056259e-05 | 30.66% | 44.22% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.272507227094097e-05 | 5.4740334632682744e-05 | 33.83% | 51.12% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.221395208505434e-05 | 5.5757410252074494e-05 | 32.18% | 47.45% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.218320570635892e-05 | 5.4858891306850404e-05 | 33.25% | 49.81% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.960391325895424e-05 | 5.380214309596451e-05 | 32.41% | 47.96% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.949863653443786e-05 | 5.318673432627019e-05 | 33.10% | 49.47% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.26072836528168e-05 | 5.4363369428074816e-05 | 34.19% | 51.95% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.377330186832518e-05 | 5.6416748055785986e-05 | 32.66% | 48.49% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.33929515372043e-05 | 5.58233661473792e-05 | 33.06% | 49.39% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.33507232936499e-05 | 5.632946015348851e-05 | 32.42% | 47.97% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.305073721757048e-05 | 5.547945415124782e-05 | 33.20% | 49.70% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.420532025241515e-05 | 5.5801167222010805e-05 | 33.73% | 50.90% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.351279166020576e-05 | 5.624647406026498e-05 | 32.65% | 48.48% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.850097160621536e-05 | 5.396949382484174e-05 | 31.25% | 45.45% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.276531973302287e-05 | 5.5738005610944944e-05 | 32.66% | 48.49% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.394952284484997e-05 | 5.583203038631237e-05 | 33.49% | 50.36% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.384808867432372e-05 | 5.584890897850752e-05 | 33.39% | 50.13% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.272438171819128e-05 | 5.655587432028697e-05 | 31.63% | 46.27% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.321577469552245e-05 | 5.556361254187517e-05 | 33.23% | 49.77% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.422087337626466e-05 | 5.603838056444524e-05 | 33.46% | 50.29% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.344241270638764e-05 | 5.593757433538884e-05 | 32.96% | 49.17% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.383702156521321e-05 | 5.603138202261836e-05 | 33.17% | 49.63% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.437935992917586e-05 | 5.618584626740124e-05 | 33.41% | 50.18% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.271590312435724e-05 | 5.53746060624863e-05 | 33.05% | 49.38% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.280482100598753e-05 | 5.541488597468567e-05 | 33.08% | 49.43% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.271850595850395e-05 | 5.616498095524914e-05 | 32.10% | 47.28% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.299302719265318e-05 | 5.680504632845438e-05 | 31.55% | 46.10% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.313595057896566e-05 | 5.6328920333220475e-05 | 32.24% | 47.59% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.367104301853294e-05 | 5.714809395528435e-05 | 31.70% | 46.41% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.333267748106525e-05 | 5.632303152979404e-05 | 32.41% | 47.95% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.316899462334706e-05 | 5.657218861484744e-05 | 31.98% | 47.01% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.365813768635229e-05 | 5.5445857930957134e-05 | 33.72% | 50.88% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.295345948805012e-05 | 5.675417664539767e-05 | 31.58% | 46.16% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.94037155323561e-05 | 5.395151419406152e-05 | 32.05% | 47.18% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.929194068639461e-05 | 5.4047938406962345e-05 | 31.84% | 46.71% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.361737290622373e-05 | 5.636329862574553e-05 | 32.59% | 48.35% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.213684840384814e-05 | 5.627001583649711e-05 | 31.49% | 45.97% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.264038425133866e-05 | 5.6372256735981306e-05 | 31.79% | 46.60% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.267226613767811e-05 | 5.588216288023181e-05 | 32.41% | 47.94% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.217885975112737e-05 | 5.6372374903041224e-05 | 31.40% | 45.78% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.265379548093619e-05 | 5.702594354731031e-05 | 31.01% | 44.94% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.252419626193293e-05 | 5.5758687530470575e-05 | 32.43% | 48.00% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.064492783048968e-05 | 5.435809821902774e-05 | 32.60% | 48.36% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.307607316590525e-05 | 5.65823057884833e-05 | 31.89% | 46.82% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.30867817042676e-05 | 5.569745464177602e-05 | 32.96% | 49.18% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.22867797132926e-05 | 5.576845986635262e-05 | 32.23% | 47.55% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.206339062874778e-05 | 5.606253521196005e-05 | 31.68% | 46.38% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.279125830233811e-05 | 5.6335251678600265e-05 | 31.96% | 46.96% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.161279231796145e-05 | 5.6061101821590124e-05 | 31.31% | 45.58% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.314740486570851e-05 | 5.610201935997112e-05 | 32.53% | 48.21% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.346804799575625e-05 | 5.60975274898241e-05 | 32.79% | 48.79% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.355901544223202e-05 | 5.557472247897223e-05 | 33.49% | 50.35% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.236326903165787e-05 | 5.6680944273384785e-05 | 31.18% | 45.31% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.268571034344494e-05 | 5.628904311397081e-05 | 31.92% | 46.89% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.244233112265315e-05 | 5.638594067547722e-05 | 31.61% | 46.21% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.269264329399734e-05 | 5.6138675024191325e-05 | 32.11% | 47.30% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.257932820490719e-05 | 5.574497048282632e-05 | 32.50% | 48.14% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.249607321783475e-05 | 5.5799090876665485e-05 | 32.36% | 47.84% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.318602039659568e-05 | 5.637370170791001e-05 | 32.23% | 47.56% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.237986425095226e-05 | 5.598189300453221e-05 | 32.04% | 47.15% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.331342961472848e-05 | 5.606612767655084e-05 | 32.70% | 48.60% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.245659065144721e-05 | 5.5883999999841824e-05 | 32.23% | 47.55% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.991107151296578e-05 | 5.373121805233231e-05 | 32.76% | 48.72% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.818452152699182e-05 | 5.370121831037184e-05 | 31.31% | 45.59% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.36600884632933e-05 | 5.5886111046811307e-05 | 33.20% | 49.70% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.07806730085683e-05 | 5.5151106186810675e-05 | 31.73% | 46.47% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.20592238101454e-05 | 5.490272605456464e-05 | 33.09% | 49.46% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.207084828241468e-05 | 5.504114231122921e-05 | 32.93% | 49.11% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.105039962910585e-05 | 5.4719231684077247e-05 | 32.49% | 48.12% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.16743729539237e-05 | 5.482499733280004e-05 | 32.87% | 48.97% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.104203534263827e-05 | 5.539340430952965e-05 | 31.65% | 46.30% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.891246604769915e-05 | 5.290851778566168e-05 | 32.95% | 49.15% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.192149037290189e-05 | 5.515067754886831e-05 | 32.68% | 48.54% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.12161234249006e-05 | 5.4954150624659104e-05 | 32.34% | 47.79% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.145797483343478e-05 | 5.5038850949495584e-05 | 32.43% | 48.00% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010528206110626196 | 7.347921859334098e-05 | 30.21% | 43.28% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 8.253366773104495e-05 | 5.273400122143555e-05 | 36.11% | 56.51% | 1.57x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.193459828484282e-05 | 5.5845005040690214e-05 | 31.84% | 46.72% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.113405020735642e-05 | 5.506981101585385e-05 | 32.12% | 47.33% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.132561572517478e-05 | 5.532578486508878e-05 | 31.97% | 46.99% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.19401217865758e-05 | 5.493469991245521e-05 | 32.96% | 49.16% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.142536472057157e-05 | 5.66481258036896e-05 | 30.43% | 43.74% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.916492577113116e-05 | 6.76969460604689e-05 | 31.73% | 46.48% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.759151635672312e-05 | 5.289998170614531e-05 | 31.82% | 46.68% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 0.00010117252839396408 | 6.912431334494462e-05 | 31.68% | 46.36% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.233888995819081e-05 | 5.504201352405103e-05 | 33.15% | 49.59% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.060181540046587e-05 | 5.49951289569007e-05 | 31.77% | 46.56% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.188455114368595e-05 | 5.562976613825457e-05 | 32.06% | 47.20% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.189439370370489e-05 | 5.5461992285139944e-05 | 32.28% | 47.66% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.2073380987317e-05 | 5.4368573950610914e-05 | 33.76% | 50.96% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.23317479700958e-05 | 5.523021943881125e-05 | 32.92% | 49.07% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.855722316304592e-05 | 5.330009529973726e-05 | 32.15% | 47.39% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.893117026821841e-05 | 5.341086695437959e-05 | 32.33% | 47.78% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.15628696698755e-05 | 5.428709187840772e-05 | 33.44% | 50.24% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.811880574144847e-05 | 5.315241013870097e-05 | 31.96% | 46.97% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.148849216363533e-05 | 5.333227162668142e-05 | 34.55% | 52.79% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.181925219290412e-05 | 5.351160565117028e-05 | 34.60% | 52.90% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.950537805414661e-05 | 5.3992975719480087e-05 | 32.09% | 47.25% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.933498318251149e-05 | 5.297696876260952e-05 | 33.22% | 49.75% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.887200362451316e-05 | 5.287246552632954e-05 | 32.96% | 49.17% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.693907788358172e-05 | 5.1683630404554574e-05 | 32.83% | 48.87% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.912909345286247e-05 | 5.3485662079287256e-05 | 32.41% | 47.94% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.956637643895525e-05 | 5.412271217152649e-05 | 31.98% | 47.01% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.920699269769793e-05 | 5.3371947851962406e-05 | 32.62% | 48.41% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010386119088023215 | 7.269869393963046e-05 | 30.00% | 42.87% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.99502512070976e-05 | 5.399512871560264e-05 | 32.46% | 48.07% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.93831229848781e-05 | 5.325986044573282e-05 | 32.91% | 49.05% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.915215298782803e-05 | 5.2865648522557673e-05 | 33.21% | 49.72% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.873943318648102e-05 | 5.352305120992735e-05 | 32.03% | 47.11% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.928876705979401e-05 | 5.4074625386217595e-05 | 31.80% | 46.63% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.876778245156266e-05 | 5.3087955508252566e-05 | 32.60% | 48.37% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.857571301701743e-05 | 6.751308204731678e-05 | 31.51% | 46.01% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.993908527935338e-05 | 5.3883248680651814e-05 | 32.59% | 48.36% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.80925257132499e-05 | 6.71597891674776e-05 | 31.53% | 46.06% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.01549371989262e-05 | 5.377230876975572e-05 | 32.91% | 49.06% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.91718532594298e-05 | 5.286494310193018e-05 | 33.23% | 49.76% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.898953743614021e-05 | 5.33619726429272e-05 | 32.44% | 48.03% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.850023071945789e-05 | 5.352179678526701e-05 | 31.82% | 46.67% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.932520468284942e-05 | 5.300762767123946e-05 | 33.18% | 49.65% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.92404062211603e-05 | 5.30962656636293e-05 | 32.99% | 49.24% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.561249190209468e-05 | 5.168416999679438e-05 | 31.65% | 46.30% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.60932458451987e-05 | 5.093371678137018e-05 | 33.06% | 49.40% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.927274675340112e-05 | 5.326105327924794e-05 | 32.81% | 48.84% | 1.49x | ✅ |
| `hexbytes_new['']` | 7.246703210496114e-05 | 2.9388014300919946e-05 | 59.45% | 146.59% | 2.47x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.043349865847495e-05 | 4.4656975079349926e-05 | 50.62% | 102.51% | 2.03x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.055754906937693e-05 | 4.4112559453152194e-05 | 51.29% | 105.29% | 2.05x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.823798052184407e-05 | 4.1387377714707834e-05 | 53.10% | 113.20% | 2.13x | ✅ |
| `hexbytes_new['0x']` | 7.792111183916473e-05 | 2.8550750435807136e-05 | 63.36% | 172.92% | 2.73x | ✅ |
| `hexbytes_new['0x1234']` | 8.687023993808925e-05 | 3.9578160049846775e-05 | 54.44% | 119.49% | 2.19x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.633587857432496e-05 | 3.9354572809854165e-05 | 54.42% | 119.38% | 2.19x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.649114653960908e-05 | 3.913819227466954e-05 | 54.75% | 120.99% | 2.21x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.625960999640276e-05 | 3.9636905241495646e-05 | 54.05% | 117.62% | 2.18x | ✅ |
| `hexbytes_new['abc']` | 8.351456874080906e-05 | 4.216569847843049e-05 | 49.51% | 98.06% | 1.98x | ✅ |
| `hexbytes_new['deadbeef']` | 7.634032662590862e-05 | 3.571100895602666e-05 | 53.22% | 113.77% | 2.14x | ✅ |
| `hexbytes_new[0-9]` | 4.302584947095144e-05 | 2.414693308317687e-05 | 43.88% | 78.18% | 1.78x | ✅ |
| `hexbytes_new[0]` | 0.0001228064884483545 | 3.7778331795783167e-05 | 69.24% | 225.07% | 3.25x | ✅ |
| `hexbytes_new[123456]` | 0.00012723909466974271 | 3.814740196063804e-05 | 70.02% | 233.55% | 3.34x | ✅ |
| `hexbytes_new[2**16]` | 0.0001293697957194272 | 3.8004979012361804e-05 | 70.62% | 240.40% | 3.40x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013580316389293556 | 4.5804637793981986e-05 | 66.27% | 196.48% | 2.96x | ✅ |
| `hexbytes_new[2**32]` | 0.00013143078585732863 | 4.124818888050081e-05 | 68.62% | 218.63% | 3.19x | ✅ |
| `hexbytes_new[2**64]` | 0.0001313014756733727 | 4.355998448033143e-05 | 66.82% | 201.43% | 3.01x | ✅ |
| `hexbytes_new[2**8]` | 0.00012867497449731166 | 3.876086706557186e-05 | 69.88% | 231.97% | 3.32x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.417197625270846e-05 | 2.5304109377680548e-05 | 42.71% | 74.56% | 1.75x | ✅ |
| `hexbytes_new[False]` | 6.047806036116293e-05 | 2.5917865943627313e-05 | 57.15% | 133.35% | 2.33x | ✅ |
| `hexbytes_new[True]` | 5.96202179517735e-05 | 2.6073606911136123e-05 | 56.27% | 128.66% | 2.29x | ✅ |
| `hexbytes_new[all byte values]` | 4.441674758623984e-05 | 2.540621776965237e-05 | 42.80% | 74.83% | 1.75x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.38792853750044e-05 | 2.514432185755537e-05 | 42.70% | 74.51% | 1.75x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.391511092954345e-05 | 2.53795098694268e-05 | 42.21% | 73.03% | 1.73x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.218299182126093e-05 | 2.4395299367577927e-05 | 42.17% | 72.91% | 1.73x | ✅ |
| `hexbytes_new[b'']` | 4.279270054659177e-05 | 2.5069293435658733e-05 | 41.42% | 70.70% | 1.71x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.2729539315932805e-05 | 2.440789735385003e-05 | 42.88% | 75.06% | 1.75x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.350285308812313e-05 | 2.4687538998634587e-05 | 43.25% | 76.21% | 1.76x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.3161921596207737e-05 | 2.4471041545378872e-05 | 43.30% | 76.38% | 1.76x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.4927877784786654e-05 | 3.6386756030277886e-05 | 33.76% | 50.96% | 1.51x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.374981497251299e-05 | 2.4572424874997433e-05 | 43.83% | 78.04% | 1.78x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.299250351305531e-05 | 2.4786740702044566e-05 | 42.35% | 73.45% | 1.73x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.27878630507698e-05 | 2.6584980313501902e-05 | 37.87% | 60.95% | 1.61x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.3007519892843074e-05 | 2.4232455627191847e-05 | 43.66% | 77.48% | 1.77x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.318860506939967e-05 | 2.498910822819732e-05 | 42.14% | 72.83% | 1.73x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.379507660028492e-05 | 2.5359260429264558e-05 | 42.10% | 72.70% | 1.73x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.017040969218887e-05 | 3.082602591427526e-05 | 38.56% | 62.75% | 1.63x | ✅ |
| `hexbytes_new[b'abc']` | 4.2852755623607205e-05 | 2.506351645495333e-05 | 41.51% | 70.98% | 1.71x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.757866404550448e-05 | 3.433207270018925e-05 | 49.20% | 96.84% | 1.97x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.894737433488465e-05 | 3.61261314288729e-05 | 47.60% | 90.85% | 1.91x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.845453653491097e-05 | 3.5651572346100704e-05 | 47.92% | 92.01% | 1.92x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.873522428431219e-05 | 3.4834210785518155e-05 | 49.32% | 97.32% | 1.97x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.919819395282481e-05 | 3.497772185787664e-05 | 49.45% | 97.84% | 1.98x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.701078159921787e-05 | 3.4333267074667454e-05 | 48.76% | 95.18% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.609114846327024e-05 | 3.30504479379329e-05 | 49.99% | 99.97% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.705471153060432e-05 | 3.4480941957509946e-05 | 48.58% | 94.47% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.75793347521039e-05 | 3.467139368227771e-05 | 48.70% | 94.91% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.807328001726535e-05 | 3.537130808501272e-05 | 48.04% | 92.45% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.85012654325594e-05 | 5.279062889454552e-05 | 40.35% | 67.65% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.72218036508819e-05 | 3.4976614986939187e-05 | 47.97% | 92.19% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.726924340516123e-05 | 3.483497979501661e-05 | 48.22% | 93.11% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.735856669731917e-05 | 3.406541330815656e-05 | 49.43% | 97.73% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.735387174942395e-05 | 3.41989079624442e-05 | 49.23% | 96.95% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.689748580422532e-05 | 3.4643147798299966e-05 | 48.21% | 93.10% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.779103884609194e-05 | 3.515095146141219e-05 | 48.15% | 92.86% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.28531231369852e-05 | 4.777372602602053e-05 | 42.34% | 73.43% | 1.73x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.812924040702137e-05 | 3.418291155335527e-05 | 49.83% | 99.31% | 1.99x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.222189198016827e-05 | 4.756831494231291e-05 | 42.15% | 72.85% | 1.73x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.840207246821926e-05 | 3.45533933074743e-05 | 49.48% | 97.96% | 1.98x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.659289780057647e-05 | 3.420428564307905e-05 | 48.64% | 94.69% | 1.95x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.745275037114517e-05 | 3.4190271187049484e-05 | 49.31% | 97.29% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.771496320695628e-05 | 3.3928292952233263e-05 | 49.90% | 99.58% | 2.00x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.71050011275393e-05 | 3.3610398924388706e-05 | 49.91% | 99.66% | 2.00x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.842296811445017e-05 | 3.4872547804480543e-05 | 49.03% | 96.21% | 1.96x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.864469215142641e-05 | 3.536625709909961e-05 | 48.48% | 94.10% | 1.94x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.768914526216151e-05 | 3.4605648432727284e-05 | 48.88% | 95.60% | 1.96x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.906328019992985e-05 | 3.485702054423318e-05 | 49.53% | 98.13% | 1.98x | ✅ |
| `hexbytes_new[long alternating]` | 5.037916493948702e-05 | 3.1009961258631756e-05 | 38.45% | 62.46% | 1.62x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.238526426904979e-05 | 4.254168077319808e-05 | 48.36% | 93.66% | 1.94x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.47039664701952e-05 | 4.395191530022285e-05 | 48.11% | 92.72% | 1.93x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.601954251502688e-05 | 4.380846422859285e-05 | 49.07% | 96.35% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.364461204597404e-05 | 4.321130684616319e-05 | 48.34% | 93.57% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.450499186239033e-05 | 4.2960788855799275e-05 | 49.16% | 96.70% | 1.97x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.418453532520911e-05 | 4.287774878679342e-05 | 49.07% | 96.34% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.384138724416138e-05 | 4.149648840936046e-05 | 50.51% | 102.04% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.363708150981113e-05 | 4.289654296100618e-05 | 48.71% | 94.97% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.373837787602903e-05 | 4.2948332731145705e-05 | 48.71% | 94.97% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.445332814419325e-05 | 4.270070069810291e-05 | 49.44% | 97.78% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.0001032366275121447 | 6.305218332521358e-05 | 38.92% | 63.73% | 1.64x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.414797934504478e-05 | 4.269028433230884e-05 | 49.27% | 97.11% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.418082506993999e-05 | 4.230556543977577e-05 | 49.74% | 98.98% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.384625784850575e-05 | 4.236026242724206e-05 | 49.48% | 97.94% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.419355603289448e-05 | 4.216550724076268e-05 | 49.92% | 99.67% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.384070244311455e-05 | 4.296024601145132e-05 | 48.76% | 95.16% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.520270459775758e-05 | 4.361182597726207e-05 | 48.81% | 95.37% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.790004472905578e-05 | 5.604154601372247e-05 | 42.76% | 74.69% | 1.75x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.310678834146672e-05 | 4.2936054535264254e-05 | 48.34% | 93.56% | 1.94x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.969838178009428e-05 | 5.690829110791729e-05 | 42.92% | 75.19% | 1.75x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.35949691237351e-05 | 4.3292291592168405e-05 | 48.21% | 93.09% | 1.93x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.294573561811034e-05 | 4.257639495909704e-05 | 48.67% | 94.82% | 1.95x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.45422889793342e-05 | 4.212214564317607e-05 | 50.18% | 100.71% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.576977474461945e-05 | 4.267930266110155e-05 | 50.24% | 100.96% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.206615584858355e-05 | 4.2533659277078114e-05 | 48.17% | 92.94% | 1.93x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.425198485635175e-05 | 4.370681878063122e-05 | 48.12% | 92.77% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.418083747460052e-05 | 4.2933591538389165e-05 | 49.00% | 96.07% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.451963687730353e-05 | 4.3480092367061574e-05 | 48.56% | 94.39% | 1.94x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.375993641237705e-05 | 4.344427937584059e-05 | 48.13% | 92.80% | 1.93x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.351738144439723e-05 | 2.5395521485147474e-05 | 41.64% | 71.36% | 1.71x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.358068123698583e-05 | 2.441901568522519e-05 | 43.97% | 78.47% | 1.78x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.4896091043783676e-05 | 2.4292845870793453e-05 | 45.89% | 84.81% | 1.85x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.304580553892427e-05 | 2.4470802768616197e-05 | 43.15% | 75.91% | 1.76x | ✅ |
| `hexbytes_new[palindrome]` | 4.2364729957647594e-05 | 2.4315668539811896e-05 | 42.60% | 74.23% | 1.74x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.249822600992511e-05 | 2.4450922337800815e-05 | 42.47% | 73.81% | 1.74x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2684498274463316e-05 | 2.508258068096091e-05 | 41.24% | 70.18% | 1.70x | ✅ |
| `hexbytes_new[single null byte]` | 4.260732661409813e-05 | 2.4745085767673553e-05 | 41.92% | 72.19% | 1.72x | ✅ |
| `hexbytes_new[two patterns]` | 4.3979720443728445e-05 | 2.5523262469506517e-05 | 41.97% | 72.31% | 1.72x | ✅ |
| `hexbytes_repr[0-9]` | 3.442427217309468e-05 | 1.575416648131812e-05 | 54.24% | 118.51% | 2.19x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012490765542315648 | 4.182613407523877e-05 | 66.51% | 198.64% | 2.99x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012491941968798535 | 4.181476500864003e-05 | 66.53% | 198.74% | 2.99x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.4834889861462156e-05 | 2.119868323492304e-05 | 61.34% | 158.67% | 2.59x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.498088484548655e-05 | 2.14501327848419e-05 | 60.99% | 156.32% | 2.56x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.5601989988789005e-05 | 1.9258359301057213e-05 | 57.77% | 136.79% | 2.37x | ✅ |
| `hexbytes_repr[b'']` | 2.550559078105142e-05 | 1.2425202892045831e-05 | 51.28% | 105.27% | 2.05x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.208493802986565e-05 | 1.7845717969053367e-05 | 57.60% | 135.83% | 2.36x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.298364212978516e-05 | 1.4676145196498172e-05 | 55.50% | 124.74% | 2.25x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.70963297653504e-05 | 2.4664341866615e-05 | 63.24% | 172.04% | 2.72x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007703578373050529 | 0.0002230768876361567 | 71.04% | 245.33% | 3.45x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.156404377146339e-05 | 1.4756230282468054e-05 | 53.25% | 113.90% | 2.14x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.315275853345515e-05 | 1.4968920582629393e-05 | 54.85% | 121.48% | 2.21x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.402170297971042e-05 | 1.603894904305089e-05 | 52.86% | 112.12% | 2.12x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.402359706293409e-05 | 1.5812343759091488e-05 | 53.53% | 115.17% | 2.15x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.326057446800096e-05 | 1.473541171602454e-05 | 55.70% | 125.72% | 2.26x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.46118545769148e-05 | 2.1402355274976585e-05 | 60.81% | 155.17% | 2.55x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004027860313396927 | 0.00012170718975108453 | 69.78% | 230.95% | 3.31x | ✅ |
| `hexbytes_repr[b'abc']` | 3.189117216478522e-05 | 1.4937390138830954e-05 | 53.16% | 113.50% | 2.13x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004037306999563284 | 0.00012256996073362847 | 69.64% | 229.39% | 3.29x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010292454712744064 | 3.520538309160371e-05 | 65.79% | 192.35% | 2.92x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.506339771087945e-05 | 1.5618702251739444e-05 | 55.46% | 124.50% | 2.24x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.363580173287786e-05 | 1.5179466669967164e-05 | 54.87% | 121.59% | 2.22x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.3682854735884115e-05 | 1.501566504813218e-05 | 55.42% | 124.32% | 2.24x | ✅ |
| `hexbytes_repr[palindrome]` | 3.7650853117354437e-05 | 1.6601876662467875e-05 | 55.91% | 126.79% | 2.27x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.717275959100967e-05 | 2.479405468632886e-05 | 63.09% | 170.92% | 2.71x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.118044408342019e-05 | 1.4681503297608688e-05 | 52.91% | 112.38% | 2.12x | ✅ |
| `hexbytes_repr[single null byte]` | 3.1204203441562e-05 | 1.4559029176021515e-05 | 53.34% | 114.33% | 2.14x | ✅ |
| `hexbytes_repr[two patterns]` | 5.428993994053966e-05 | 2.1385399724755367e-05 | 60.61% | 153.86% | 2.54x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.685852178322181e-05 | 1.5479892195799383e-05 | 8.18% | 8.91% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.377402906385803e-05 | 4.122112790077971e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.4010807383260936e-05 | 4.092015884407738e-05 | 7.02% | 7.55% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2496132927847216e-05 | 2.048791116243593e-05 | 8.93% | 9.80% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2541996736274517e-05 | 2.0729867250396816e-05 | 8.04% | 8.74% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.037401104581291e-05 | 1.862009694830922e-05 | 8.61% | 9.42% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.045326652251547e-05 | 1.2242934855157574e-05 | -17.12% | -14.62% | 0.85x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.8762145530311432e-05 | 1.708028697283253e-05 | 8.96% | 9.85% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6669488875185826e-05 | 1.4630723405829697e-05 | 12.23% | 13.93% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.607434112115059e-05 | 2.3974980732939576e-05 | 8.05% | 8.76% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022504138461719914 | 0.00022259984519689178 | 1.08% | 1.10% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.614227762346204e-05 | 1.473643876349236e-05 | 8.71% | 9.54% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6861897205583282e-05 | 1.4957724470780065e-05 | 11.29% | 12.73% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6991469890212085e-05 | 1.5154870712838076e-05 | 10.81% | 12.12% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.69999716986003e-05 | 1.5132962006422167e-05 | 10.98% | 12.34% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6751871894630516e-05 | 1.4720006548826458e-05 | 12.13% | 13.80% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.235969340052688e-05 | 2.0535522345628444e-05 | 8.16% | 8.88% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012464503025887488 | 0.00012173437388507291 | 2.34% | 2.39% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.619202427640259e-05 | 1.4713738903747046e-05 | 9.13% | 10.05% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001250255790340839 | 0.00012132576460464241 | 2.96% | 3.05% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.648151895373188e-05 | 3.419160078812326e-05 | 6.28% | 6.70% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7147472070276065e-05 | 1.5676541633249248e-05 | 8.58% | 9.38% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6970096242279136e-05 | 1.4939699278272549e-05 | 11.96% | 13.59% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.687508898169951e-05 | 1.4806374912397953e-05 | 12.26% | 13.97% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.782145386097833e-05 | 1.587176419485977e-05 | 10.94% | 12.28% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.608398969604431e-05 | 2.3694990574526465e-05 | 9.16% | 10.08% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5917322527779658e-05 | 1.4517025884538928e-05 | 8.80% | 9.65% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.588380841536834e-05 | 1.4238592972367177e-05 | 10.36% | 11.55% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.252772088137596e-05 | 2.055557225016118e-05 | 8.75% | 9.59% | 1.10x | ✅ |
