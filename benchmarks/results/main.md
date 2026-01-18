#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/chore/rule-sync-agents-20260118125710/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/chore/rule-sync-agents-20260118125710/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.69283911115099e-05 | 2.5616275176469773e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6999730668729856e-05 | 2.5521914380529987e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6998967690632142e-05 | 2.5950907849360687e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6986024127579067e-05 | 2.575022071934659e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6966765179603624e-05 | 2.5655503059006795e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6925675947116053e-05 | 2.574180623705962e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6818073407517803e-05 | 2.5757527155104613e-05 | 3.95% | 4.12% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.7080735816393613e-05 | 2.56717856996318e-05 | 5.20% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6888836014353154e-05 | 2.5707067314355516e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6862399786457717e-05 | 2.5595120460918477e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.6820075598029654e-05 | 2.573440719075248e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6888289083894088e-05 | 2.557450172346906e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6576538252746452e-05 | 2.5618251593384704e-05 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.677914162872918e-05 | 2.5656392483631962e-05 | 4.19% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6812410668327462e-05 | 2.568969514626652e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6859258257335447e-05 | 2.5556493060100917e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.683507132464216e-05 | 2.5436702936989048e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6853955129944715e-05 | 2.5755314103898605e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.6910413445418128e-05 | 2.5865984071479798e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6863142828388338e-05 | 2.67254290013392e-05 | 0.51% | 0.52% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6948606895060537e-05 | 2.5629435190172813e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6830604115442657e-05 | 2.5665014028184765e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6885418269266564e-05 | 2.575552467558442e-05 | 4.20% | 4.39% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6873782500013545e-05 | 2.569712593268766e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.69625915575118e-05 | 2.582421298727763e-05 | 4.22% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6879987758929765e-05 | 2.6408833515391112e-05 | 1.75% | 1.78% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6379162836878678e-05 | 2.5242502676480735e-05 | 4.31% | 4.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6360433957992325e-05 | 2.5519622339154868e-05 | 3.19% | 3.29% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6166131194635e-05 | 2.543652517783788e-05 | 2.79% | 2.87% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6260335880905984e-05 | 2.524732191107055e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6422172321606422e-05 | 2.522322504560235e-05 | 4.54% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6494296489511152e-05 | 2.5605928146202235e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.648319169254849e-05 | 2.5000265907440162e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.622855676839946e-05 | 2.497908359654995e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6421794433434737e-05 | 2.5112841993709912e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6229199960595715e-05 | 2.536728385236729e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.615525144514446e-05 | 2.5098984836400076e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6479198556109822e-05 | 2.52321908972164e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.638708022756806e-05 | 2.5344270361722193e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6386487768760943e-05 | 2.5295896289900345e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6005132952284476e-05 | 2.529421744814379e-05 | 2.73% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.633951743954395e-05 | 2.518387772491225e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6261303504648746e-05 | 2.5047389534739354e-05 | 4.62% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6212278495313324e-05 | 2.5147632254414383e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6057601690270993e-05 | 2.5203510031502044e-05 | 3.28% | 3.39% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6195977913661692e-05 | 2.551265009289503e-05 | 2.61% | 2.68% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6434706548265253e-05 | 2.51108588997142e-05 | 5.01% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6033444072842364e-05 | 2.596464486854288e-05 | 0.26% | 0.26% | 1.00x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6252873452873477e-05 | 2.564004341469672e-05 | 2.33% | 2.39% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6252720881639473e-05 | 2.542956012504767e-05 | 3.14% | 3.24% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6243678890342427e-05 | 2.5310704414924872e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.612376155603621e-05 | 2.5151805435951912e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6368288179352274e-05 | 2.5368514620104968e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6150369528751676e-05 | 2.5280099838802907e-05 | 3.33% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6388191085123e-05 | 2.5387138627549025e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6318623130475165e-05 | 2.5495383265608143e-05 | 3.13% | 3.23% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.628549712806675e-05 | 2.5622878031838825e-05 | 2.52% | 2.59% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.6110847669525822e-05 | 2.5541192778138178e-05 | 2.18% | 2.23% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6304643254051916e-05 | 2.5633529743596825e-05 | 2.55% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.638039148900325e-05 | 2.5544380110233024e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.6350701840815056e-05 | 2.5304257507348886e-05 | 3.97% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6282857066311317e-05 | 2.5618274141890765e-05 | 2.53% | 2.59% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.630933389500524e-05 | 2.563995516199188e-05 | 2.54% | 2.61% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.6269667723188697e-05 | 2.5244978117706368e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6353559889200486e-05 | 2.5638404105401974e-05 | 2.71% | 2.79% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.626616147545569e-05 | 2.560574639632839e-05 | 2.51% | 2.58% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6646231622798393e-05 | 2.5110321346995758e-05 | 5.76% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6254832440705824e-05 | 2.5251191476189927e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.634241510592603e-05 | 2.559222009221512e-05 | 2.85% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6272037873125878e-05 | 2.540029171918911e-05 | 3.32% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6453237004460087e-05 | 2.544256138694491e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.62073987530807e-05 | 2.5213468602641046e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6375201243292186e-05 | 2.5389349203648667e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6490849636312388e-05 | 2.5411109976977264e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.639137126086741e-05 | 2.5272126906103852e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6265131716287386e-05 | 2.559380447968897e-05 | 2.56% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.6711794527130647e-05 | 2.5307196339004493e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.6370534412390815e-05 | 2.5473151993545742e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6506913709812672e-05 | 2.528897318379536e-05 | 4.59% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6307012062884106e-05 | 2.522788299482846e-05 | 4.10% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6061325983008944e-05 | 2.5526085733847463e-05 | 2.05% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.604170469613609e-05 | 2.5648099930831434e-05 | 1.51% | 1.53% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6232862830633438e-05 | 2.5387853975458605e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.621208186560846e-05 | 2.5330484695838844e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6195646473262434e-05 | 2.5547438560930133e-05 | 2.47% | 2.54% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6156326160264095e-05 | 2.5075980615661307e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.6154026916831872e-05 | 2.510514820204021e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.6355949149010243e-05 | 2.5292383913501485e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6187853503727114e-05 | 2.5387084362915145e-05 | 3.06% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6210042681768105e-05 | 2.595305224792419e-05 | 0.98% | 0.99% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6168437937824477e-05 | 2.548584601508535e-05 | 2.61% | 2.68% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6273391636825608e-05 | 2.530193574236953e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.619089196712469e-05 | 2.543406928122681e-05 | 2.89% | 2.98% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6371577120984044e-05 | 2.5391363332756647e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6260936710431696e-05 | 2.52765317188315e-05 | 3.75% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.625964194957999e-05 | 2.552658160371261e-05 | 2.79% | 2.87% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.622281443610354e-05 | 2.534752874141929e-05 | 3.34% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6173407648158114e-05 | 2.5525320136801654e-05 | 2.48% | 2.54% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6291660190424433e-05 | 2.518310719358404e-05 | 4.22% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6377440038847867e-05 | 2.537578214588703e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.622790047996619e-05 | 2.558112749313973e-05 | 2.47% | 2.53% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6154131869174645e-05 | 2.5355763746787744e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6209162778185912e-05 | 2.5181529677797152e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6246394597017366e-05 | 2.5575349261658713e-05 | 2.56% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6094520059919724e-05 | 2.5424567353346293e-05 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6133709103252362e-05 | 2.5112984224381516e-05 | 3.91% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6192411573536343e-05 | 2.5113755985634256e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.621367852373121e-05 | 2.5133617361881212e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6249112200312134e-05 | 2.5233539386866817e-05 | 3.87% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6083018879645315e-05 | 2.5292295507281864e-05 | 3.03% | 3.13% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.6201444481504007e-05 | 2.5522611054015063e-05 | 2.59% | 2.66% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6097034542971305e-05 | 2.5481550829116906e-05 | 2.36% | 2.42% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6176121015966702e-05 | 2.529017845518547e-05 | 3.38% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.6227967818025572e-05 | 2.531007756670581e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.610288441906622e-05 | 2.5424304816694766e-05 | 2.60% | 2.67% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.614557475916853e-05 | 2.521495501023442e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5994747316790003e-05 | 2.5266410056610773e-05 | 2.80% | 2.88% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6263627744470984e-05 | 2.5271063322384705e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6009552607660225e-05 | 2.56150776778578e-05 | 1.52% | 1.54% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6313129657893018e-05 | 2.5454098700817702e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6277789209178582e-05 | 2.5078525962315038e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.6247406046508047e-05 | 2.546242593058305e-05 | 2.99% | 3.08% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6121008253025666e-05 | 2.5218329772532884e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6205295332547447e-05 | 2.563686284780729e-05 | 2.17% | 2.22% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6201628312436468e-05 | 2.5228206658336453e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.619897266970417e-05 | 2.527287974592848e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6344190589463642e-05 | 2.5203305699296432e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6129443758470477e-05 | 2.533859430164668e-05 | 3.03% | 3.12% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6128384542861015e-05 | 2.5442658143926237e-05 | 2.62% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.611245876336028e-05 | 2.544795594233304e-05 | 2.54% | 2.61% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6071607403634088e-05 | 2.524598335627807e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.7028603439053815e-05 | 2.515656677360581e-05 | 6.93% | 7.44% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.609115849429078e-05 | 2.5186217597581988e-05 | 3.47% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6103944392029453e-05 | 2.530493319727629e-05 | 3.06% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6067547427739237e-05 | 2.527593620642695e-05 | 3.04% | 3.13% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6288621172220184e-05 | 2.5408369251639693e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.622433547451636e-05 | 2.535071725030792e-05 | 3.33% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6045568634308875e-05 | 2.550061542945448e-05 | 2.09% | 2.14% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.6304525669436878e-05 | 2.518778865697014e-05 | 4.25% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.615698417692929e-05 | 2.5451240223744197e-05 | 2.70% | 2.77% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.615596331674867e-05 | 2.5188266946487874e-05 | 3.70% | 3.84% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.595304096015827e-05 | 2.5429559814932092e-05 | 2.02% | 2.06% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6159289306964417e-05 | 2.555358750548499e-05 | 2.32% | 2.37% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6342093856260467e-05 | 2.5145610497351762e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6117921175400588e-05 | 2.4890788025820318e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6159170713005857e-05 | 2.5393076256690577e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6186785456831452e-05 | 2.522129908765081e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.6097432285579705e-05 | 2.5327912148052135e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.7334889204743318e-05 | 2.5211354595166485e-05 | 7.77% | 8.42% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6172779010616766e-05 | 2.5104229086648708e-05 | 4.08% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.636043441854924e-05 | 2.54410367377154e-05 | 3.49% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.623316167825366e-05 | 2.5201805469693834e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.613582163138011e-05 | 2.5468671658700074e-05 | 2.55% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.6133428302248812e-05 | 2.5421847450493615e-05 | 2.72% | 2.80% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6187891386185085e-05 | 2.5403021080129135e-05 | 3.00% | 3.09% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6310811800096577e-05 | 2.537529870341095e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6380635318557808e-05 | 2.5068870686851923e-05 | 4.97% | 5.23% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6339584167241252e-05 | 2.553614700534034e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6400726934198737e-05 | 2.5005567680641964e-05 | 5.28% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.6337001725280057e-05 | 2.5340284805646665e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.5755091192647228e-05 | 2.5613960362753423e-05 | 0.55% | 0.55% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.625214006420115e-05 | 2.6271272293557554e-05 | -0.07% | -0.07% | 1.00x | ❌ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6308615025656626e-05 | 2.613411059457539e-05 | 0.66% | 0.67% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.619061141396771e-05 | 2.5474630348392434e-05 | 2.73% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.631757396669067e-05 | 2.5391167284097495e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.619003906295525e-05 | 2.535452032261527e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6159680059369158e-05 | 2.54706810900509e-05 | 2.63% | 2.71% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6052600894523705e-05 | 2.5587865802113523e-05 | 1.78% | 1.82% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6233394545053954e-05 | 2.533885699814673e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6237967951546962e-05 | 2.5332166535775002e-05 | 3.45% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6185334333610856e-05 | 2.539773887190213e-05 | 3.01% | 3.10% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.613479357536468e-05 | 2.5598071054703036e-05 | 2.05% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.105975137812821e-05 | 5.481487708178456e-05 | 32.38% | 47.88% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.236059832150061e-05 | 5.5108442146732463e-05 | 33.09% | 49.45% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.232455119160902e-05 | 5.510937173507313e-05 | 33.06% | 49.38% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.06235280552206e-05 | 5.517849610102458e-05 | 31.56% | 46.11% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.118805457234763e-05 | 5.487337372487048e-05 | 32.41% | 47.96% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.093941985272461e-05 | 5.509685314965579e-05 | 31.93% | 46.90% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.772210564023225e-05 | 5.3747816623796714e-05 | 30.85% | 44.61% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.05993501941467e-05 | 5.4971582377887335e-05 | 31.80% | 46.62% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.097276826746963e-05 | 5.62692518519193e-05 | 30.51% | 43.90% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.142553331087734e-05 | 5.6188332495538235e-05 | 30.99% | 44.92% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.100569448873429e-05 | 5.529641662219181e-05 | 31.74% | 46.49% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.301900984496845e-05 | 5.532963296612268e-05 | 33.35% | 50.04% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.148905533460545e-05 | 5.5971407360545615e-05 | 31.31% | 45.59% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.014923563487848e-05 | 5.558609893190703e-05 | 30.65% | 44.19% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.112102613241673e-05 | 5.5138246606804455e-05 | 32.03% | 47.12% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.126960174382325e-05 | 5.5332063069176954e-05 | 31.92% | 46.88% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.08691876906077e-05 | 5.540392402908042e-05 | 31.49% | 45.96% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.086621884131856e-05 | 5.5426538184799556e-05 | 31.46% | 45.90% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.14013981222922e-05 | 5.5462789880797595e-05 | 31.87% | 46.77% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.201343524718142e-05 | 5.5621467063806916e-05 | 32.18% | 47.45% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.043498748260196e-05 | 5.48880229911428e-05 | 31.76% | 46.54% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.055400025195636e-05 | 5.488033337292052e-05 | 31.87% | 46.78% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.149287885566302e-05 | 5.526957451220506e-05 | 32.18% | 47.45% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.179131101896585e-05 | 5.483670064503371e-05 | 32.96% | 49.15% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.080982370071661e-05 | 5.5101181224007555e-05 | 31.81% | 46.66% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.13209763708926e-05 | 5.531046226060817e-05 | 31.98% | 47.03% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.780290996659877e-05 | 5.3516723037093496e-05 | 31.22% | 45.38% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.76050036371411e-05 | 5.298761349052539e-05 | 31.72% | 46.46% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.075697159436392e-05 | 5.478558872486358e-05 | 32.16% | 47.41% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.219292674634763e-05 | 5.592609946515135e-05 | 31.96% | 46.97% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.353490138433258e-05 | 5.5649577512024254e-05 | 33.38% | 50.11% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.163822397381381e-05 | 5.58269139622752e-05 | 31.62% | 46.23% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.322170122318573e-05 | 5.5859135694980034e-05 | 32.88% | 48.98% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.26110202697614e-05 | 5.567202320656465e-05 | 32.61% | 48.39% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.204810244546026e-05 | 5.5831542905697626e-05 | 31.95% | 46.96% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.880606119387316e-05 | 5.367918951633124e-05 | 31.88% | 46.81% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.229839702368632e-05 | 5.577882989138682e-05 | 32.22% | 47.54% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.266256470671652e-05 | 5.606540011679899e-05 | 32.18% | 47.44% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.190779881869502e-05 | 5.5646814971458695e-05 | 32.06% | 47.19% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.212139886555137e-05 | 5.578066574918561e-05 | 32.08% | 47.22% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.174710043046356e-05 | 5.570143960201957e-05 | 31.86% | 46.76% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.205138660145374e-05 | 5.57728069004443e-05 | 32.03% | 47.12% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.266167503037382e-05 | 5.5450438725352284e-05 | 32.92% | 49.07% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.259781766054667e-05 | 5.5745220174884274e-05 | 32.51% | 48.17% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.24188007283851e-05 | 5.568929189824519e-05 | 32.43% | 48.00% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.337336569846819e-05 | 5.586100419949358e-05 | 33.00% | 49.25% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.266820022212018e-05 | 5.597785479182874e-05 | 32.29% | 47.68% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.275696888750723e-05 | 5.5371383490866384e-05 | 33.09% | 49.46% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.31646373265731e-05 | 5.542797229282129e-05 | 33.35% | 50.04% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.245528849509273e-05 | 5.597281966327856e-05 | 32.12% | 47.31% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.26775840010688e-05 | 5.587259208900958e-05 | 32.42% | 47.98% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.258024411314175e-05 | 5.5500318269759133e-05 | 32.79% | 48.79% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.14349399762694e-05 | 5.557446187990204e-05 | 31.76% | 46.53% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.289615750929638e-05 | 5.561492825468509e-05 | 32.91% | 49.05% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.276438574253912e-05 | 5.575303114722492e-05 | 32.64% | 48.45% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.938480176575532e-05 | 5.347174243442619e-05 | 32.64% | 48.46% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.913148978261217e-05 | 5.3401914566269836e-05 | 32.51% | 48.18% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.233530490309502e-05 | 5.583355948837201e-05 | 32.19% | 47.47% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.1276561495304e-05 | 5.6166921827904446e-05 | 30.89% | 44.71% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.172720431282363e-05 | 5.6605645287131886e-05 | 30.74% | 44.38% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.155238600664236e-05 | 5.665241247488674e-05 | 30.53% | 43.95% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.159706043984762e-05 | 5.598195877858935e-05 | 31.39% | 45.76% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.108621701718927e-05 | 5.574856024490293e-05 | 31.25% | 45.45% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.159975098612211e-05 | 5.661309583118887e-05 | 30.62% | 44.14% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.873353605951348e-05 | 5.424644129973035e-05 | 31.10% | 45.14% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.168880777326998e-05 | 5.587142317286708e-05 | 31.60% | 46.21% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.18222766063264e-05 | 5.5822270919442176e-05 | 31.78% | 46.58% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.162991089128733e-05 | 5.602366047270005e-05 | 31.37% | 45.71% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.145791599867878e-05 | 5.554519279299632e-05 | 31.81% | 46.65% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.06204003736399e-05 | 5.718574542952355e-05 | 29.07% | 40.98% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.122729994989638e-05 | 5.5259485349060394e-05 | 31.97% | 46.99% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.154502045618288e-05 | 5.585334620115516e-05 | 31.51% | 46.00% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.036687196567934e-05 | 5.590969469601446e-05 | 30.43% | 43.74% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.15215259560804e-05 | 5.760774695306228e-05 | 29.33% | 41.51% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.164933581181197e-05 | 5.584261849988191e-05 | 31.61% | 46.21% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.18565723451693e-05 | 5.576122065393045e-05 | 31.88% | 46.80% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.013681601059822e-05 | 5.537532650054789e-05 | 30.90% | 44.72% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.113909722220245e-05 | 5.604960023420246e-05 | 30.92% | 44.76% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.163709165200549e-05 | 5.6008374630148534e-05 | 31.39% | 45.76% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.122786120803838e-05 | 5.541433474303351e-05 | 31.78% | 46.58% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.116924153673585e-05 | 5.597242748580222e-05 | 31.04% | 45.02% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.169187148332455e-05 | 5.629960125137062e-05 | 31.08% | 45.10% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.166863750076529e-05 | 5.5969196370689185e-05 | 31.47% | 45.92% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.208032770984534e-05 | 5.626583154008663e-05 | 31.45% | 45.88% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.785584840145343e-05 | 5.4464500942019466e-05 | 30.04% | 42.95% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.865268548547168e-05 | 5.403137031059829e-05 | 31.30% | 45.57% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.177052953623722e-05 | 5.629302721331119e-05 | 31.16% | 45.26% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.069563107585817e-05 | 5.482334098817829e-05 | 32.06% | 47.19% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.138416820580639e-05 | 5.494571255172994e-05 | 32.49% | 48.12% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.093812863996929e-05 | 5.478705662739204e-05 | 32.31% | 47.73% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.28610119716024e-05 | 5.4731505549230545e-05 | 33.95% | 51.40% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.250740220510137e-05 | 5.4724499388984e-05 | 33.67% | 50.77% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.013048413366151e-05 | 5.3849786559486365e-05 | 32.80% | 48.80% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.821086241354979e-05 | 5.308851473612391e-05 | 32.12% | 47.32% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.10702998406187e-05 | 5.452871202000174e-05 | 32.74% | 48.67% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.088093457744835e-05 | 5.480335506621339e-05 | 32.24% | 47.58% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.113120960591806e-05 | 5.4564573957500676e-05 | 32.75% | 48.69% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010253068358414813 | 7.393375673229018e-05 | 27.89% | 38.68% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.67992095243633e-05 | 5.310738559866628e-05 | 30.85% | 44.61% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.118375812953576e-05 | 5.506613069529134e-05 | 32.17% | 47.43% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.113616140143809e-05 | 5.464508475262036e-05 | 32.65% | 48.48% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.008040881373284e-05 | 5.518572253664927e-05 | 31.09% | 45.11% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.009161781231696e-05 | 5.4661367653521245e-05 | 31.75% | 46.52% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.150860556234318e-05 | 5.509459883908749e-05 | 32.41% | 47.94% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.69885889446842e-05 | 6.831939752940179e-05 | 29.56% | 41.96% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.718782566188137e-05 | 5.243365685299055e-05 | 32.07% | 47.21% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.710222389866107e-05 | 6.941170806545897e-05 | 28.52% | 39.89% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.198495044999402e-05 | 5.453679406824498e-05 | 33.48% | 50.33% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.982006392529135e-05 | 5.4749191781199144e-05 | 31.41% | 45.79% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.057440417383381e-05 | 5.463019123866408e-05 | 32.20% | 47.49% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.043462265156462e-05 | 5.5468846819356124e-05 | 31.04% | 45.01% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.192022334959015e-05 | 5.433123442658523e-05 | 33.68% | 50.78% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.11655789295835e-05 | 5.388972507363989e-05 | 33.61% | 50.61% | 1.51x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.843202782584244e-05 | 5.313208547475651e-05 | 32.26% | 47.62% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.78415072730764e-05 | 5.276465269785985e-05 | 32.22% | 47.53% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.331508779109011e-05 | 5.454747120613365e-05 | 34.53% | 52.74% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.849712187504855e-05 | 5.299878421829776e-05 | 32.48% | 48.11% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.044351405583151e-05 | 5.390314038892092e-05 | 32.99% | 49.24% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.145154164324442e-05 | 5.363859279917792e-05 | 34.15% | 51.85% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.947754544862545e-05 | 5.397383500082556e-05 | 32.09% | 47.25% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.880073140678047e-05 | 5.269184926552048e-05 | 33.13% | 49.55% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.759064584635141e-05 | 5.2973167248451094e-05 | 31.73% | 46.47% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.595976941573633e-05 | 5.070432162043062e-05 | 33.25% | 49.81% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.972192542557854e-05 | 5.204986394330097e-05 | 34.71% | 53.16% | 1.53x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.199168571232162e-05 | 5.230278739101727e-05 | 36.21% | 56.76% | 1.57x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.76842271748228e-05 | 5.29154418013094e-05 | 31.88% | 46.81% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010142420449353397 | 7.214734102500575e-05 | 28.87% | 40.58% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.924285454234038e-05 | 5.338205218316076e-05 | 32.63% | 48.44% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.83290680473193e-05 | 5.331408897419378e-05 | 31.94% | 46.92% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.931943524986597e-05 | 5.3140177900839747e-05 | 33.00% | 49.26% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.828413107008261e-05 | 5.259999119957482e-05 | 32.81% | 48.83% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.123250137497016e-05 | 5.33548371450428e-05 | 34.32% | 52.25% | 1.52x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.917481947727351e-05 | 5.272202830134212e-05 | 33.41% | 50.17% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.578374572960443e-05 | 6.630747059694877e-05 | 30.77% | 44.45% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.939601753524279e-05 | 5.302783822778837e-05 | 33.21% | 49.73% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.604550522858666e-05 | 6.611255649143793e-05 | 31.17% | 45.28% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.918494822190466e-05 | 5.3517769829536024e-05 | 32.41% | 47.96% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.806183052162596e-05 | 5.2181188908703066e-05 | 33.15% | 49.60% | 1.50x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.802847992809902e-05 | 5.2684227367200756e-05 | 32.48% | 48.11% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.82882485072353e-05 | 5.3007508683587815e-05 | 32.29% | 47.69% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.844039042169041e-05 | 5.2546053166036015e-05 | 33.01% | 49.28% | 1.49x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.912859141702315e-05 | 5.352550932418795e-05 | 32.36% | 47.83% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.587936081348229e-05 | 5.170250760455073e-05 | 31.86% | 46.76% | 1.47x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.496430579461874e-05 | 5.1721185367653886e-05 | 31.01% | 44.94% | 1.45x | ✅ |
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
| `hexbytes_new[b'\\x00'*32]` | 4.2408475867380275e-05 | 2.4077768670823522e-05 | 43.22% | 76.13% | 1.76x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.309859694028344e-05 | 2.470791838447801e-05 | 42.67% | 74.43% | 1.74x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.270329515521949e-05 | 2.5868785223905073e-05 | 39.42% | 65.08% | 1.65x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.49923443806095e-05 | 3.625563248661583e-05 | 34.07% | 51.68% | 1.52x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.331387773663198e-05 | 2.4691101196285233e-05 | 42.99% | 75.42% | 1.75x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2698089177583676e-05 | 2.5053980648177234e-05 | 41.32% | 70.42% | 1.70x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.283133584742631e-05 | 2.4578583802088582e-05 | 42.62% | 74.26% | 1.74x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2758026642883686e-05 | 2.456171661061161e-05 | 42.56% | 74.08% | 1.74x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.316646904647953e-05 | 2.4651607358229816e-05 | 42.89% | 75.11% | 1.75x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.39789755210193e-05 | 2.571656383021084e-05 | 41.53% | 71.01% | 1.71x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.934743886398508e-05 | 3.068664914398422e-05 | 37.82% | 60.81% | 1.61x | ✅ |
| `hexbytes_new[b'abc']` | 4.29546944150122e-05 | 2.484534065783701e-05 | 42.16% | 72.89% | 1.73x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.782070518550947e-05 | 3.405842489150025e-05 | 49.78% | 99.13% | 1.99x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.020101575534454e-05 | 3.7117796382833374e-05 | 47.13% | 89.13% | 1.89x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.068993493383657e-05 | 3.701486852398984e-05 | 47.64% | 90.98% | 1.91x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.792100754609193e-05 | 3.4384046623693636e-05 | 49.38% | 97.54% | 1.98x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.838218411342632e-05 | 3.641896715780786e-05 | 46.74% | 87.77% | 1.88x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.692784158450417e-05 | 3.396899955314511e-05 | 49.25% | 97.03% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.716204284818242e-05 | 3.3019949280202435e-05 | 50.84% | 103.40% | 2.03x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.814215481466295e-05 | 3.43327094562498e-05 | 49.62% | 98.48% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.794215906678314e-05 | 3.489900342440313e-05 | 48.63% | 94.68% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.991987249650581e-05 | 3.5351566156682795e-05 | 49.44% | 97.78% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.75408102590116e-05 | 5.393412605143254e-05 | 38.39% | 62.31% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.782901651254008e-05 | 3.4482979036347726e-05 | 49.16% | 96.70% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.72732555006822e-05 | 3.426092935203108e-05 | 49.07% | 96.36% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.690130250078638e-05 | 3.390417414464032e-05 | 49.32% | 97.32% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.78709728274278e-05 | 3.3910971401480405e-05 | 50.04% | 100.14% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.771955826747288e-05 | 3.460177448261763e-05 | 48.90% | 95.71% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.848256669994332e-05 | 3.4862895538563695e-05 | 49.09% | 96.43% | 1.96x | ✅ |
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
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.27879960809375e-05 | 4.211380507182377e-05 | 49.13% | 96.58% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.390076889380432e-05 | 4.222032493006758e-05 | 49.68% | 98.72% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.422973045693937e-05 | 4.240498025597364e-05 | 49.66% | 98.63% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010412247047925015 | 6.146802113597058e-05 | 40.97% | 69.39% | 1.69x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.397491212564028e-05 | 4.257408768977069e-05 | 49.30% | 97.24% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.46172129632406e-05 | 4.227771617739256e-05 | 50.04% | 100.15% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.267115753293117e-05 | 4.1862872687981416e-05 | 49.36% | 97.48% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.326827602421969e-05 | 4.258166675944418e-05 | 48.86% | 95.55% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.367870161252743e-05 | 4.205767225587506e-05 | 49.74% | 98.96% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.466471027896374e-05 | 4.260718412757146e-05 | 49.68% | 98.71% | 1.99x | ✅ |
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
| `hexbytes_repr[b'\\x00'*32]` | 4.127919152964111e-05 | 1.746770229489318e-05 | 57.68% | 136.32% | 2.36x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.2455623931847736e-05 | 1.4545244483118025e-05 | 55.18% | 123.14% | 2.23x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.648365072108627e-05 | 2.4502750795368466e-05 | 63.14% | 171.33% | 2.71x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007703843362781556 | 0.0002235682322864015 | 70.98% | 244.59% | 3.45x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.174018249216361e-05 | 1.4644653582118003e-05 | 53.86% | 116.74% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.277267024570937e-05 | 1.4635281259749667e-05 | 55.34% | 123.93% | 2.24x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.3594713338952175e-05 | 1.5369208281417234e-05 | 54.25% | 118.58% | 2.19x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.3660498605083544e-05 | 1.521930385645787e-05 | 54.79% | 121.17% | 2.21x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.249485092179475e-05 | 1.4597163433455663e-05 | 55.08% | 122.61% | 2.23x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.373762815802136e-05 | 2.105965465975694e-05 | 60.81% | 155.17% | 2.55x | ✅ |
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
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.94447334586809e-05 | 1.689499535458249e-05 | 13.11% | 15.09% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.675854486022142e-05 | 1.4610983308404025e-05 | 12.81% | 14.70% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6300781340107962e-05 | 2.397516988066615e-05 | 8.84% | 9.70% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022608847683892728 | 0.00022290888771978558 | 1.41% | 1.43% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.638183638564619e-05 | 1.4645193774382499e-05 | 10.60% | 11.86% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6878469692607907e-05 | 1.4704213291116563e-05 | 12.88% | 14.79% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.7310604168894874e-05 | 1.5129687056490917e-05 | 12.60% | 14.41% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.7195706493606917e-05 | 1.5081269153024118e-05 | 12.30% | 14.02% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.7135026200913913e-05 | 1.4642456794118693e-05 | 14.55% | 17.02% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.266383538451679e-05 | 2.038775351858712e-05 | 10.04% | 11.16% | 1.11x | ✅ |
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
