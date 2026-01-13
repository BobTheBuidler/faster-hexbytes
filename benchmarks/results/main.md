#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.677096750063319e-05 | 2.546616136211431e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.710707062360558e-05 | 2.5446463610054447e-05 | 6.13% | 6.53% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6974350617162676e-05 | 2.5233439492365115e-05 | 6.45% | 6.90% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6812533800622696e-05 | 2.5501642749772763e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6783401070872803e-05 | 2.5486861109170693e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.690085969392735e-05 | 2.5559651637269925e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6997689970843876e-05 | 2.5480736722705495e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6788837018602868e-05 | 2.5494679632972293e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6792719797050557e-05 | 2.5622557508202895e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6825377998798652e-05 | 2.5438284797430125e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.6933967728233103e-05 | 2.547193685098717e-05 | 5.43% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6924255248937717e-05 | 2.566841372253148e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.673159448026612e-05 | 2.552379241925018e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.694963154510711e-05 | 2.535542573132703e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6969270347191064e-05 | 2.5527587288428532e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6948371013607305e-05 | 2.539681189219216e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.7462285355484073e-05 | 2.5364203046131283e-05 | 7.64% | 8.27% | 1.08x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.702724354793683e-05 | 2.5348587453579022e-05 | 6.21% | 6.62% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.6773054661371935e-05 | 2.635514710526382e-05 | 1.56% | 1.59% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6825980665971773e-05 | 2.5473734688341663e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6852989766891757e-05 | 2.525154848539552e-05 | 5.96% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.660191387912797e-05 | 2.5510037330822706e-05 | 4.10% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6908593533193162e-05 | 2.5123593290108407e-05 | 6.63% | 7.10% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6887239999467635e-05 | 2.5534800077638577e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.689610447892608e-05 | 2.6037135858957773e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.668346358892368e-05 | 2.5731622631286926e-05 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6127197534254896e-05 | 2.4448627071350914e-05 | 6.42% | 6.87% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6193755346165005e-05 | 2.4730260282816827e-05 | 5.59% | 5.92% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6204506107026285e-05 | 2.4408479139170662e-05 | 6.85% | 7.36% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6208446451649393e-05 | 2.4376219825353306e-05 | 6.99% | 7.52% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6304089267516286e-05 | 2.5067038941121194e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6292845119100303e-05 | 2.4881307434276615e-05 | 5.37% | 5.67% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.5961402905321422e-05 | 2.4202505833530816e-05 | 6.78% | 7.27% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6038074439943034e-05 | 2.4517539923136188e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.624363765083322e-05 | 2.5092966013290522e-05 | 4.38% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6103048239235225e-05 | 2.501905667140604e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6391181401841856e-05 | 2.4869212734862283e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6279777021789803e-05 | 2.4991066819452805e-05 | 4.90% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6138861416980413e-05 | 2.5091085987611218e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.618389725606757e-05 | 2.5110322165909454e-05 | 4.10% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6002314004467365e-05 | 2.5547640820043054e-05 | 1.75% | 1.78% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6242865390964757e-05 | 2.493432821024558e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6130571843706165e-05 | 2.4967874389081712e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.591391545003062e-05 | 2.4913093374863258e-05 | 3.86% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6215348532624892e-05 | 2.4673376558575858e-05 | 5.88% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6717520695675198e-05 | 2.505118092723316e-05 | 6.24% | 6.65% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6054553257301075e-05 | 2.439682510970381e-05 | 6.36% | 6.79% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.610160246335894e-05 | 2.4850970148944863e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6218165770725253e-05 | 2.514943302433346e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6349592218595694e-05 | 2.4970676632122212e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6271860413185486e-05 | 2.4794633175085435e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.7183905309791058e-05 | 2.504275228294904e-05 | 7.88% | 8.55% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6127025007287652e-05 | 2.4429361725153685e-05 | 6.50% | 6.95% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6213199657407467e-05 | 2.4409483416528514e-05 | 6.88% | 7.39% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.627943582597579e-05 | 2.503535929396578e-05 | 4.73% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6022002892916446e-05 | 2.4994109830115693e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.6009778519606374e-05 | 2.5124785329356333e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.6121732539654423e-05 | 2.520575949433692e-05 | 3.51% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.603395631696667e-05 | 2.512046553395984e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6128507181517512e-05 | 2.4972334180040564e-05 | 4.42% | 4.63% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.5900450502328085e-05 | 2.451707838460263e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.641252429039077e-05 | 2.5023561821559145e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.60590549680198e-05 | 2.5537234140793508e-05 | 2.00% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.61853701329552e-05 | 2.5119039420708117e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.613892696204565e-05 | 2.5208406714241434e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6122980310495318e-05 | 2.5213843069521673e-05 | 3.48% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6726984365594182e-05 | 2.5630682744470053e-05 | 4.10% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6597824345467185e-05 | 2.5116516484211883e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6291301193413722e-05 | 2.4970764813355537e-05 | 5.02% | 5.29% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.5970138292199216e-05 | 2.5004521714321663e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6027801197679585e-05 | 2.5108093462671858e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.5977108130696887e-05 | 2.500856866606594e-05 | 3.73% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.5924477934670516e-05 | 2.50565988438389e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6512526776410117e-05 | 2.494378920722927e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.5943092023711112e-05 | 2.5230164144743934e-05 | 2.75% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.626016222460528e-05 | 2.5121134302616787e-05 | 4.34% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.619610347957427e-05 | 2.4946070147111865e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.6257960361966332e-05 | 2.560129480392185e-05 | 2.50% | 2.56% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6174352166946796e-05 | 2.510342506018198e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.604038875726465e-05 | 2.5123787211492342e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.616406113638416e-05 | 2.516023605107198e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.604872297825305e-05 | 2.4995350885102475e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6270401187360904e-05 | 2.4972934872810764e-05 | 4.94% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.631367363043048e-05 | 2.454250248586195e-05 | 6.73% | 7.22% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6203626254098855e-05 | 2.5079664484984253e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.5945367167263786e-05 | 2.4988084531119387e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.619482410736672e-05 | 2.4533008838920085e-05 | 6.34% | 6.77% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.613739972294854e-05 | 2.5725171534846486e-05 | 1.58% | 1.60% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6189374720772985e-05 | 2.5121760926520624e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6261590626486522e-05 | 2.5052037078129097e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.5961130606773627e-05 | 2.520044025675916e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.64113414072472e-05 | 2.4958536010824177e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6266649584040548e-05 | 2.504398077793956e-05 | 4.65% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.5989628374508756e-05 | 2.5031326330427485e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.622439368346798e-05 | 2.516942543017864e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.637908185007474e-05 | 2.5108543630416e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6128636431377726e-05 | 2.5106386899777004e-05 | 3.91% | 4.07% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.608154795960934e-05 | 2.5056742073401336e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.633427743648469e-05 | 2.458476186467044e-05 | 6.64% | 7.12% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6483797560607263e-05 | 2.5054423003458244e-05 | 5.40% | 5.71% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.628442508688852e-05 | 2.5108772712223343e-05 | 4.47% | 4.68% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6616434203218547e-05 | 2.494815971305301e-05 | 6.27% | 6.69% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6021696040916575e-05 | 2.5087592135460614e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.5923774471262674e-05 | 2.492174516450365e-05 | 3.87% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6288444759145613e-05 | 2.4913142672738654e-05 | 5.23% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6120114425672117e-05 | 2.4501533395999625e-05 | 6.20% | 6.61% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6447543679108274e-05 | 2.512637593551425e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6318029707505107e-05 | 2.488075186524415e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6048874020495886e-05 | 2.497721518887801e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.625782167680486e-05 | 2.50780940709991e-05 | 4.49% | 4.70% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.621649955711796e-05 | 2.4916625745785462e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6178202217106357e-05 | 2.493819545334197e-05 | 4.74% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6185524827591208e-05 | 2.4450462938507185e-05 | 6.63% | 7.10% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.6070773082106052e-05 | 2.5073374938614487e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6026626541131224e-05 | 2.5030133959782804e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6352623844346977e-05 | 2.4980266958756992e-05 | 5.21% | 5.49% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6455345001215696e-05 | 2.5090036785320435e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6025025555159028e-05 | 2.4980096858104763e-05 | 4.02% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6159587393905524e-05 | 2.4963313681638852e-05 | 4.57% | 4.79% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6025615086731025e-05 | 2.4908878299704273e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.597390381557499e-05 | 2.501900414739187e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.6045293143475344e-05 | 2.4971156931192283e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6186665423230375e-05 | 2.502398621328837e-05 | 4.44% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.591569244746042e-05 | 2.596947494328657e-05 | -0.21% | -0.21% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6282677319500342e-05 | 2.507952517284446e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.596869095223443e-05 | 2.4943195114642977e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.625826686900746e-05 | 2.5027970659584637e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6148104203278057e-05 | 2.490969835614812e-05 | 4.74% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.5968266129500554e-05 | 2.496580728905419e-05 | 3.86% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.5898125620253083e-05 | 2.4979693346925032e-05 | 3.55% | 3.68% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.5998332912747914e-05 | 2.4998653435757895e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.62176723309357e-05 | 2.4586551733341212e-05 | 6.22% | 6.63% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6209849700656955e-05 | 2.5140250620142023e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6157543277787395e-05 | 2.4447805611818176e-05 | 6.54% | 6.99% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6200618741550512e-05 | 2.5054139576341934e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6195565942033084e-05 | 2.4912367738122456e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6239894650217327e-05 | 2.449943367598896e-05 | 6.63% | 7.10% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6115734294105554e-05 | 2.491036034429984e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.618400532130098e-05 | 2.5096961316918516e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.602833805967867e-05 | 2.497559371737565e-05 | 4.04% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.5847467030974564e-05 | 2.5011856526228614e-05 | 3.23% | 3.34% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.6077442266943477e-05 | 2.5015042291426478e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6089525322628256e-05 | 2.4870002925246136e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.619543220921125e-05 | 2.4966532941564226e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6248171425729426e-05 | 2.4537048536151002e-05 | 6.52% | 6.97% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6367423284743272e-05 | 2.5050334653875726e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6147745995831866e-05 | 2.5147851373410988e-05 | 3.82% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.5997357906724676e-05 | 2.4998727948916214e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6259876235046686e-05 | 2.507964999344902e-05 | 4.49% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.63624255669183e-05 | 2.4850787088260258e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.7550134174386237e-05 | 2.5398082746354337e-05 | 7.81% | 8.47% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.628347997696217e-05 | 2.455720557856005e-05 | 6.57% | 7.03% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6124439601451933e-05 | 2.5083372423768193e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.611299346689769e-05 | 2.5119561807128198e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.658738242981111e-05 | 2.5157667300831372e-05 | 5.38% | 5.68% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.589437250588981e-05 | 2.5100382914956426e-05 | 3.07% | 3.16% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.607350384065034e-05 | 2.5037337600970665e-05 | 3.97% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6307766046051063e-05 | 2.5102187859722137e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.665147974881618e-05 | 2.4560825340564523e-05 | 7.84% | 8.51% | 1.09x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.634888870029098e-05 | 2.506970358392338e-05 | 4.85% | 5.10% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6198135094545528e-05 | 2.5151148943426854e-05 | 4.00% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6249063113105388e-05 | 2.4996119273180704e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6273888808828458e-05 | 2.5117610546844043e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.62394766521562e-05 | 2.5126904016031805e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6404644710253452e-05 | 2.5060651827490587e-05 | 5.09% | 5.36% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6431490742989324e-05 | 2.5141464725773524e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6073113578846756e-05 | 2.5003244892902023e-05 | 4.10% | 4.28% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.59655771965504e-05 | 2.509334525724946e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.597593833313304e-05 | 2.5118413594189088e-05 | 3.30% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6310200943500687e-05 | 2.4948077647933035e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6339694243106663e-05 | 2.5059398564409844e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6058160736728852e-05 | 2.5055766711878387e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.155033116960533e-05 | 6.050481984237814e-05 | 25.81% | 34.78% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.238831790818795e-05 | 5.928805669281222e-05 | 28.04% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.224550765902885e-05 | 5.855614287431767e-05 | 28.80% | 40.46% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.183956842039948e-05 | 5.933124373289839e-05 | 27.50% | 37.94% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.197143243523246e-05 | 5.930287918586584e-05 | 27.65% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.185115440058039e-05 | 5.9703567375092405e-05 | 27.06% | 37.10% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.828923256010966e-05 | 5.7137875801426625e-05 | 27.02% | 37.02% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.184275197244612e-05 | 6.016954952912649e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.201001460413769e-05 | 5.918862245469962e-05 | 27.83% | 38.56% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.271014819379878e-05 | 6.095369798983289e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.157308028057253e-05 | 5.901461963401977e-05 | 27.65% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.495329520800787e-05 | 5.9769500591033195e-05 | 29.64% | 42.13% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.18888099304301e-05 | 5.947873981972391e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.19194798466511e-05 | 5.951597501062871e-05 | 27.35% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.306281030645733e-05 | 5.942066963739779e-05 | 28.46% | 39.79% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.171260502013567e-05 | 5.847747332876392e-05 | 28.44% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.201535650042766e-05 | 6.0011904368304154e-05 | 26.83% | 36.67% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.205822487441368e-05 | 5.969843319982069e-05 | 27.25% | 37.45% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.173180367649948e-05 | 5.944787293885368e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.11549462415969e-05 | 5.922916533918276e-05 | 27.02% | 37.02% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.158037945939478e-05 | 5.978626554257393e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.249783399300277e-05 | 6.0321800707915045e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.252116001368831e-05 | 5.9255709435822663e-05 | 28.19% | 39.26% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.239695674712093e-05 | 5.943978310104789e-05 | 27.86% | 38.62% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.210009090999565e-05 | 5.947338559648251e-05 | 27.56% | 38.05% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.18279069257278e-05 | 5.945754994980436e-05 | 27.34% | 37.62% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.837849013902996e-05 | 5.959170737676089e-05 | 23.97% | 31.53% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.915568447279383e-05 | 5.7442033719469284e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.20339808424181e-05 | 6.020899469846179e-05 | 26.60% | 36.25% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.225557857566557e-05 | 5.976357500944229e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.257021253499644e-05 | 6.0705120191953865e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.244896560807736e-05 | 6.145513196641005e-05 | 25.46% | 34.16% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.252987886821167e-05 | 6.067698697439968e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.278127310901413e-05 | 5.923745988092423e-05 | 28.44% | 39.74% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.2262961761569e-05 | 6.0778431412775715e-05 | 26.12% | 35.35% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.969211659180237e-05 | 5.802972637938929e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.261561395040754e-05 | 6.030013184740615e-05 | 27.01% | 37.01% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.315823606024062e-05 | 6.018336668598586e-05 | 27.63% | 38.17% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.290111169700437e-05 | 5.8833128903208254e-05 | 29.03% | 40.91% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.264140492608604e-05 | 6.212133671045918e-05 | 24.83% | 33.03% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.237493706290512e-05 | 5.956038300643859e-05 | 27.70% | 38.30% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.256868685846572e-05 | 6.0516328705106795e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.434789038824592e-05 | 5.975865283566005e-05 | 29.15% | 41.15% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.273066102235858e-05 | 6.0552929696140696e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.25392791583583e-05 | 6.034671800776632e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.35087043115646e-05 | 6.023513351035172e-05 | 27.87% | 38.64% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.256556794115376e-05 | 6.173392730799389e-05 | 25.23% | 33.74% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.27001779601494e-05 | 6.057864994109787e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.266365102001264e-05 | 6.161434099700873e-05 | 25.46% | 34.16% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.263683925926275e-05 | 6.0493534484024915e-05 | 26.80% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.291450832338576e-05 | 6.072546547541251e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.22759256251807e-05 | 6.100781574398784e-05 | 25.85% | 34.86% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.219285614019268e-05 | 6.060666750979805e-05 | 26.26% | 35.62% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.286041752180693e-05 | 5.9859903398785376e-05 | 27.76% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.243077834207584e-05 | 6.121612522989731e-05 | 25.74% | 34.66% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.870499842895371e-05 | 5.8166543217868994e-05 | 26.10% | 35.31% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.899935999997682e-05 | 5.7708124638802416e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.27695992018951e-05 | 6.038778654291367e-05 | 27.04% | 37.06% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.286602081262768e-05 | 6.255281414300013e-05 | 24.51% | 32.47% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.40293760281327e-05 | 6.104169434346429e-05 | 27.36% | 37.66% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.28897684084368e-05 | 6.001642812526312e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.283504761960748e-05 | 6.12058412666794e-05 | 26.11% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.247673546727984e-05 | 6.018352276960087e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.309402049351288e-05 | 6.144788815295196e-05 | 26.05% | 35.23% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.014448628368077e-05 | 5.8904931400199314e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.23269040570253e-05 | 6.0999431983980884e-05 | 25.91% | 34.96% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.239165843218057e-05 | 6.0412139323356844e-05 | 26.68% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.259584588149936e-05 | 5.9499772622121e-05 | 27.96% | 38.82% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.199763381125025e-05 | 6.02605965777669e-05 | 26.51% | 36.07% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.20917923974957e-05 | 6.084437126884888e-05 | 25.88% | 34.92% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.228028958732187e-05 | 5.976294319376137e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.240273733232511e-05 | 6.15707364906674e-05 | 25.28% | 33.83% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.269032962319024e-05 | 6.0777336583610156e-05 | 26.50% | 36.05% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.198057744429024e-05 | 6.020638291790146e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.210496444113805e-05 | 6.0015431951865905e-05 | 26.90% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.245870447393057e-05 | 6.044928114444239e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.174646963780518e-05 | 6.0808276536655294e-05 | 25.61% | 34.43% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.173666382259024e-05 | 6.138078754089434e-05 | 24.90% | 33.16% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.659698838497626e-05 | 6.02368695104655e-05 | 30.44% | 43.76% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.319468858178778e-05 | 6.0266960346689746e-05 | 27.56% | 38.04% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.287023088105631e-05 | 6.063142404456624e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.257686474858246e-05 | 6.033928145322589e-05 | 26.93% | 36.85% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.202533853007862e-05 | 6.09702284232238e-05 | 25.67% | 34.53% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.273695664401046e-05 | 6.151131078824376e-05 | 25.65% | 34.51% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.946738640636142e-05 | 5.8806062330531604e-05 | 26.00% | 35.13% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.917746510307784e-05 | 5.860842348903306e-05 | 25.98% | 35.10% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.46911618678374e-05 | 6.050152745835527e-05 | 28.56% | 39.98% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.04373944737036e-05 | 5.9013467939127095e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.358171835729781e-05 | 5.8489600342815264e-05 | 30.02% | 42.90% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.189407171250553e-05 | 5.974825869630117e-05 | 27.04% | 37.07% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.374078726748305e-05 | 5.945427525702518e-05 | 29.00% | 40.85% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.39325177180586e-05 | 5.946836756724811e-05 | 29.15% | 41.14% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.127597801243514e-05 | 5.9613288851241286e-05 | 26.65% | 36.34% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.900593785362159e-05 | 5.830285392468781e-05 | 26.20% | 35.51% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.215438779611945e-05 | 5.946207951930205e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.164162470386078e-05 | 5.935860549958709e-05 | 27.29% | 37.54% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.307709945777503e-05 | 6.023798866031807e-05 | 27.49% | 37.91% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.000104319747528828 | 8.091615680588338e-05 | 22.43% | 28.92% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.808685635898554e-05 | 5.7873492493087103e-05 | 25.89% | 34.93% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.287815100019812e-05 | 5.953755221180304e-05 | 28.16% | 39.20% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.12683656511757e-05 | 5.922235151664839e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.152329688368368e-05 | 6.051284441993075e-05 | 25.77% | 34.72% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.089625166666295e-05 | 5.915606939352639e-05 | 26.87% | 36.75% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.451663184974721e-05 | 5.980028056105776e-05 | 29.24% | 41.33% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.786000403526461e-05 | 7.481168971326091e-05 | 23.55% | 30.81% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.85168163874564e-05 | 5.7660819008267266e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.914311881839677e-05 | 7.44648305404657e-05 | 24.89% | 33.14% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.234405353677248e-05 | 6.017357559501309e-05 | 26.92% | 36.84% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.099367364092532e-05 | 5.964220057226179e-05 | 26.36% | 35.80% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.107792333790307e-05 | 5.933409461034167e-05 | 26.82% | 36.65% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.159876752913037e-05 | 5.971660316908486e-05 | 26.82% | 36.64% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.296341878643153e-05 | 5.885963773417601e-05 | 29.05% | 40.95% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.287730022685729e-05 | 6.024244272013044e-05 | 27.31% | 37.57% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 8.066816786975504e-05 | 5.695421447705034e-05 | 29.40% | 41.64% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.890062973412726e-05 | 5.72272234509747e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.31572496600056e-05 | 5.9056921622293034e-05 | 28.98% | 40.81% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.068197345180514e-05 | 5.705591653072113e-05 | 29.28% | 41.41% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.163843292524784e-05 | 5.840498375023456e-05 | 28.46% | 39.78% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.095748505252873e-05 | 5.9164325114678666e-05 | 26.92% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.944737986802118e-05 | 5.8127651165716347e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.985595344463872e-05 | 5.731276214943126e-05 | 28.23% | 39.33% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.902061785327317e-05 | 5.887919111443545e-05 | 25.49% | 34.21% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.722555767633905e-05 | 5.632297347360215e-05 | 27.07% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.843507282599677e-05 | 5.8162837015440475e-05 | 25.85% | 34.85% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.922949627093495e-05 | 5.796457263732078e-05 | 26.84% | 36.69% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.982834024331411e-05 | 5.838607638954386e-05 | 26.86% | 36.72% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010382478268914664 | 8.022887854240864e-05 | 22.73% | 29.41% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.910624232696712e-05 | 5.8684783865817656e-05 | 25.82% | 34.80% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.921116196466999e-05 | 5.7760112125356515e-05 | 27.08% | 37.14% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.908601586991737e-05 | 5.8790990308244505e-05 | 25.66% | 34.52% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.857946629813306e-05 | 5.8244413888819844e-05 | 25.88% | 34.91% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.931768681944103e-05 | 5.734632222513192e-05 | 27.70% | 38.31% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.949081383343261e-05 | 6.128519605008776e-05 | 22.90% | 29.71% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.65186876519331e-05 | 7.50134273058775e-05 | 22.28% | 28.67% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.984447063212042e-05 | 5.837756888672352e-05 | 26.89% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.824390549399657e-05 | 7.207370159889352e-05 | 26.64% | 36.31% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.031823899427404e-05 | 5.82023317438156e-05 | 27.54% | 38.00% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.824505661298088e-05 | 5.6961318927273444e-05 | 27.20% | 37.37% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.909484744327816e-05 | 5.814398213581395e-05 | 26.49% | 36.03% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.185838549748524e-05 | 5.791149189004875e-05 | 29.25% | 41.35% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.029748561200667e-05 | 5.806315199904082e-05 | 27.69% | 38.29% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.007470212448084e-05 | 5.8424286703707455e-05 | 27.04% | 37.06% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.675179091321308e-05 | 5.583298997980473e-05 | 27.26% | 37.47% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.730050585009006e-05 | 5.592184499853334e-05 | 27.66% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.914432590015816e-05 | 5.786958688518924e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_new['']` | 7.345545460046931e-05 | 3.6090291761329914e-05 | 50.87% | 103.53% | 2.04x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.066635971912138e-05 | 4.946018424393927e-05 | 45.45% | 83.31% | 1.83x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.32441088190135e-05 | 4.849459721211405e-05 | 47.99% | 92.28% | 1.92x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.744473032894627e-05 | 4.615576057169882e-05 | 47.22% | 89.46% | 1.89x | ✅ |
| `hexbytes_new['0x']` | 7.845353036805725e-05 | 3.6349212377693455e-05 | 53.67% | 115.83% | 2.16x | ✅ |
| `hexbytes_new['0x1234']` | 8.597146618935771e-05 | 4.3990692755740126e-05 | 48.83% | 95.43% | 1.95x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.504580097591137e-05 | 4.3528879725019754e-05 | 48.82% | 95.38% | 1.95x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.51909546311707e-05 | 4.318011463254736e-05 | 49.31% | 97.29% | 1.97x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.488437497770535e-05 | 4.34605012564098e-05 | 48.80% | 95.31% | 1.95x | ✅ |
| `hexbytes_new['abc']` | 8.417600881198385e-05 | 4.71908521099129e-05 | 43.94% | 78.37% | 1.78x | ✅ |
| `hexbytes_new['deadbeef']` | 7.790488376406393e-05 | 3.991458775728366e-05 | 48.76% | 95.18% | 1.95x | ✅ |
| `hexbytes_new[0-9]` | 4.251069574837973e-05 | 2.3789940755908184e-05 | 44.04% | 78.69% | 1.79x | ✅ |
| `hexbytes_new[0]` | 0.00012509178388272064 | 6.31297860887802e-05 | 49.53% | 98.15% | 1.98x | ✅ |
| `hexbytes_new[123456]` | 0.0001291566936212715 | 6.661351703787598e-05 | 48.42% | 93.89% | 1.94x | ✅ |
| `hexbytes_new[2**16]` | 0.00012817330005355766 | 6.548257443872732e-05 | 48.91% | 95.74% | 1.96x | ✅ |
| `hexbytes_new[2**256-1]` | 0.0001342118767614409 | 7.270459892947516e-05 | 45.83% | 84.60% | 1.85x | ✅ |
| `hexbytes_new[2**32]` | 0.00013236613822722564 | 7.001487689891875e-05 | 47.11% | 89.05% | 1.89x | ✅ |
| `hexbytes_new[2**64]` | 0.00013227685986501718 | 7.264237376310764e-05 | 45.08% | 82.09% | 1.82x | ✅ |
| `hexbytes_new[2**8]` | 0.00012741676234928452 | 6.509217932682896e-05 | 48.91% | 95.75% | 1.96x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4149586938165964e-05 | 2.520288117059084e-05 | 42.91% | 75.18% | 1.75x | ✅ |
| `hexbytes_new[False]` | 5.937081337313145e-05 | 2.563146687233389e-05 | 56.83% | 131.63% | 2.32x | ✅ |
| `hexbytes_new[True]` | 5.9733931082441424e-05 | 2.5753066457409307e-05 | 56.89% | 131.95% | 2.32x | ✅ |
| `hexbytes_new[all byte values]` | 4.4193561362922396e-05 | 2.52150380157253e-05 | 42.94% | 75.27% | 1.75x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3578614420202435e-05 | 2.4421713433259615e-05 | 43.96% | 78.44% | 1.78x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.383432800033756e-05 | 2.4444427645245616e-05 | 44.23% | 79.32% | 1.79x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.214545728321032e-05 | 2.400962524312645e-05 | 43.03% | 75.54% | 1.76x | ✅ |
| `hexbytes_new[b'']` | 4.1948077890675435e-05 | 2.4560707798842254e-05 | 41.45% | 70.79% | 1.71x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.2118448107729504e-05 | 2.3919236129311714e-05 | 43.21% | 76.09% | 1.76x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.253038362137338e-05 | 2.3903154620869546e-05 | 43.80% | 77.93% | 1.78x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.304570067295508e-05 | 2.4460814584612077e-05 | 43.17% | 75.98% | 1.76x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.520866481832055e-05 | 3.7311165184247624e-05 | 32.42% | 47.97% | 1.48x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.232663571603447e-05 | 2.368932666625687e-05 | 44.03% | 78.67% | 1.79x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.292669634448658e-05 | 2.4101977790233538e-05 | 43.85% | 78.10% | 1.78x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.197796217613305e-05 | 2.3634570419457556e-05 | 43.70% | 77.61% | 1.78x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.204927532046997e-05 | 2.371594243435658e-05 | 43.60% | 77.30% | 1.77x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.3097988199332345e-05 | 2.404915432206148e-05 | 44.20% | 79.21% | 1.79x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.391904264590491e-05 | 2.44181254272315e-05 | 44.40% | 79.86% | 1.80x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.0178664159072526e-05 | 3.146513159085728e-05 | 37.29% | 59.47% | 1.59x | ✅ |
| `hexbytes_new[b'abc']` | 4.206680532515429e-05 | 2.3958463562605426e-05 | 43.05% | 75.58% | 1.76x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.771136246198685e-05 | 3.486792445919856e-05 | 48.51% | 94.19% | 1.94x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.99937941268478e-05 | 3.7230865631403554e-05 | 46.81% | 88.00% | 1.88x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.987975266793083e-05 | 3.725584458701188e-05 | 46.69% | 87.57% | 1.88x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.94525055616418e-05 | 3.5747670726682936e-05 | 48.53% | 94.29% | 1.94x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.952667676787502e-05 | 3.5974348978505515e-05 | 48.26% | 93.27% | 1.93x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.76752309118545e-05 | 3.477363507817244e-05 | 48.62% | 94.62% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.506011694833976e-05 | 3.324625127624832e-05 | 48.90% | 95.69% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.76173940312083e-05 | 3.455432838781015e-05 | 48.90% | 95.68% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.722415054490435e-05 | 3.4437494654227e-05 | 48.77% | 95.21% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.867736988869955e-05 | 3.6126214475909125e-05 | 47.40% | 90.10% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.936740885976618e-05 | 5.603165983792823e-05 | 37.30% | 59.49% | 1.59x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.744047494452775e-05 | 3.4833501740609363e-05 | 48.35% | 93.61% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.825125286458525e-05 | 3.531555643177338e-05 | 48.26% | 93.26% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.685033866842277e-05 | 3.494025154829075e-05 | 47.73% | 91.33% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.754983501165195e-05 | 3.500199725659119e-05 | 48.18% | 92.99% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.811088732093092e-05 | 3.449856482635341e-05 | 49.35% | 97.43% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.945901445827088e-05 | 3.57084431508321e-05 | 48.59% | 94.52% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.500071501361611e-05 | 4.744586812956812e-05 | 44.18% | 79.15% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.723259924046662e-05 | 3.446422694262533e-05 | 48.74% | 95.08% | 1.95x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.472430448793436e-05 | 4.809368078651153e-05 | 43.24% | 76.17% | 1.76x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.109432469431718e-05 | 3.7001986665138454e-05 | 47.95% | 92.14% | 1.92x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.791499041883494e-05 | 3.543571909256297e-05 | 47.82% | 91.66% | 1.92x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.75282320286602e-05 | 3.546612444973536e-05 | 47.48% | 90.40% | 1.90x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.745126418832329e-05 | 3.5472471243011025e-05 | 47.41% | 90.15% | 1.90x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.714870954028779e-05 | 3.4873491199582083e-05 | 48.07% | 92.55% | 1.93x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.907146220651238e-05 | 3.585336615767391e-05 | 48.09% | 92.65% | 1.93x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.796470745710859e-05 | 3.7008399485503416e-05 | 45.55% | 83.65% | 1.84x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.825621572548887e-05 | 3.600162696566641e-05 | 47.26% | 89.59% | 1.90x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.934452138951489e-05 | 3.559213241784862e-05 | 48.67% | 94.83% | 1.95x | ✅ |
| `hexbytes_new[long alternating]` | 5.050554765384546e-05 | 3.2317467527784854e-05 | 36.01% | 56.28% | 1.56x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.324943171288201e-05 | 4.149246601184176e-05 | 50.16% | 100.64% | 2.01x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.553616212811409e-05 | 4.395881410873002e-05 | 48.61% | 94.58% | 1.95x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.519467595012829e-05 | 4.4023889582701205e-05 | 48.33% | 93.52% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.454769730674073e-05 | 4.215431825684142e-05 | 50.14% | 100.57% | 2.01x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.466245332406337e-05 | 4.26195764668157e-05 | 49.66% | 98.65% | 1.99x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.341179482022743e-05 | 4.232913678971848e-05 | 49.25% | 97.06% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.230623529413141e-05 | 4.038014125940601e-05 | 50.94% | 103.83% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.157632898088994e-05 | 4.2849994579079246e-05 | 47.47% | 90.38% | 1.90x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.38960549652497e-05 | 4.4346985678889744e-05 | 47.14% | 89.18% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.400959349411914e-05 | 4.49677099256748e-05 | 46.47% | 86.82% | 1.87x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010489935731573403 | 6.448226210374558e-05 | 38.53% | 62.68% | 1.63x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.343497307467582e-05 | 4.267856353923201e-05 | 48.85% | 95.50% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.291359233975108e-05 | 4.135445683367225e-05 | 50.12% | 100.49% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.401468425584304e-05 | 4.229304229736518e-05 | 49.66% | 98.65% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.370734760313472e-05 | 4.2157053056541816e-05 | 49.64% | 98.56% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.610185318533867e-05 | 4.237322597754137e-05 | 50.79% | 103.20% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.444405870440941e-05 | 4.557695111644709e-05 | 46.03% | 85.28% | 1.85x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.843103056939387e-05 | 5.559914157780678e-05 | 43.51% | 77.04% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.410988277840958e-05 | 4.195710003774613e-05 | 50.12% | 100.47% | 2.00x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.932104511117186e-05 | 5.54384434372687e-05 | 44.18% | 79.16% | 1.79x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.61973355600782e-05 | 4.4658182078967665e-05 | 48.19% | 93.02% | 1.93x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.286051659789122e-05 | 4.130585083643681e-05 | 50.15% | 100.60% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.3786319503374e-05 | 4.190923217209202e-05 | 49.98% | 99.92% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.367254653792425e-05 | 4.260919285430111e-05 | 49.08% | 96.37% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.310788111887884e-05 | 4.262195305749094e-05 | 48.71% | 94.99% | 1.95x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.476456261040626e-05 | 4.331535423755868e-05 | 48.90% | 95.69% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.379415190505698e-05 | 4.2764597836796926e-05 | 48.96% | 95.94% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.488327447215093e-05 | 4.294845857713649e-05 | 49.40% | 97.64% | 1.98x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.424125697678072e-05 | 4.3275801787664583e-05 | 48.63% | 94.66% | 1.95x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.372993644445954e-05 | 2.5411356205087885e-05 | 41.89% | 72.09% | 1.72x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.248119287561569e-05 | 2.4353003121212424e-05 | 42.67% | 74.44% | 1.74x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.18435145415736e-05 | 2.372256308507477e-05 | 43.31% | 76.39% | 1.76x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.24696397305189e-05 | 2.4039718353854714e-05 | 43.40% | 76.66% | 1.77x | ✅ |
| `hexbytes_new[palindrome]` | 4.2244431573821294e-05 | 2.380493889291614e-05 | 43.65% | 77.46% | 1.77x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.2905246430318124e-05 | 2.490038164026302e-05 | 41.96% | 72.31% | 1.72x | ✅ |
| `hexbytes_new[single 0xff]` | 4.183938946197894e-05 | 2.45325665756792e-05 | 41.36% | 70.55% | 1.71x | ✅ |
| `hexbytes_new[single null byte]` | 4.182342210086683e-05 | 2.3911918353129824e-05 | 42.83% | 74.91% | 1.75x | ✅ |
| `hexbytes_new[two patterns]` | 4.368533904851205e-05 | 2.460146056472764e-05 | 43.68% | 77.57% | 1.78x | ✅ |
| `hexbytes_repr[0-9]` | 3.41560508435872e-05 | 1.5309929697705694e-05 | 55.18% | 123.10% | 2.23x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012438470554876167 | 4.194774010980878e-05 | 66.28% | 196.52% | 2.97x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012440397966291064 | 4.1924446162558505e-05 | 66.30% | 196.73% | 2.97x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.4155868622833484e-05 | 2.0701179862242427e-05 | 61.77% | 161.61% | 2.62x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.385234136797568e-05 | 2.0700033309758138e-05 | 61.56% | 160.16% | 2.60x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.543264276965422e-05 | 1.875657393987424e-05 | 58.72% | 142.22% | 2.42x | ✅ |
| `hexbytes_repr[b'']` | 2.5484555914777816e-05 | 1.1959006331593055e-05 | 53.07% | 113.10% | 2.13x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.1483763174884856e-05 | 1.7560144328078217e-05 | 57.67% | 136.24% | 2.36x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.2584215360763516e-05 | 1.45635280229208e-05 | 55.30% | 123.74% | 2.24x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.69110010357153e-05 | 2.4310991023391442e-05 | 63.67% | 175.23% | 2.75x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007704808368445702 | 0.00022314018984790764 | 71.04% | 245.29% | 3.45x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.1859597860932515e-05 | 1.4919893213059237e-05 | 53.17% | 113.54% | 2.14x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.284022471992879e-05 | 1.471989192642426e-05 | 55.18% | 123.10% | 2.23x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.3733138739116994e-05 | 1.528039574978366e-05 | 54.70% | 120.76% | 2.21x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.340197144281932e-05 | 1.518080923871474e-05 | 54.55% | 120.03% | 2.20x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.253888483357709e-05 | 1.4975668782503825e-05 | 53.98% | 117.28% | 2.17x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.3917931722106286e-05 | 2.081240390301341e-05 | 61.40% | 159.07% | 2.59x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040398695618890795 | 0.00012199369672888422 | 69.80% | 231.15% | 3.31x | ✅ |
| `hexbytes_repr[b'abc']` | 3.201724157749836e-05 | 1.490161691736895e-05 | 53.46% | 114.86% | 2.15x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00040450948865724943 | 0.00012216547950172612 | 69.80% | 231.12% | 3.31x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010296637106493207 | 3.607270024522175e-05 | 64.97% | 185.44% | 2.85x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.417247582676942e-05 | 1.5389476332668944e-05 | 54.97% | 122.05% | 2.22x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.3398885138171926e-05 | 1.496477733768245e-05 | 55.19% | 123.18% | 2.23x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.2933573439988966e-05 | 1.4854505989461582e-05 | 54.90% | 121.71% | 2.22x | ✅ |
| `hexbytes_repr[palindrome]` | 4.077753850953032e-05 | 1.663789413793956e-05 | 59.20% | 145.09% | 2.45x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.696727321963131e-05 | 2.424303714279904e-05 | 63.80% | 176.23% | 2.76x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.062192288047796e-05 | 1.4503869462813455e-05 | 52.64% | 111.13% | 2.11x | ✅ |
| `hexbytes_repr[single null byte]` | 3.0696147119202304e-05 | 1.448676224458017e-05 | 52.81% | 111.89% | 2.12x | ✅ |
| `hexbytes_repr[two patterns]` | 5.3656133911473574e-05 | 2.0650593172747327e-05 | 61.51% | 159.83% | 2.60x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7026707677423737e-05 | 1.4379292593674166e-05 | 15.55% | 18.41% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.312598934866605e-05 | 4.048669109203021e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.3087466337420214e-05 | 4.063296322843207e-05 | 5.70% | 6.04% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2457688417439047e-05 | 1.935602559929459e-05 | 13.81% | 16.02% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.233564622243665e-05 | 1.9509661550260355e-05 | 12.65% | 14.49% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0140132306668544e-05 | 1.754620522719955e-05 | 12.88% | 14.78% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0025182944990235e-05 | 1.1148609188901906e-05 | -11.21% | -10.08% | 0.90x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.8926597082681733e-05 | 1.641386885500428e-05 | 13.28% | 15.31% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6659237839170123e-05 | 1.3699226948916315e-05 | 17.77% | 21.61% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5984185727147702e-05 | 2.2925150930863817e-05 | 11.77% | 13.34% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022475629428998398 | 0.00022245531203015606 | 1.02% | 1.03% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6049233000623907e-05 | 1.4167372862006404e-05 | 11.73% | 13.28% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.670923727115273e-05 | 1.3853632345755322e-05 | 17.09% | 20.61% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6952233942959324e-05 | 1.4034071947538588e-05 | 17.21% | 20.79% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.7649476870987082e-05 | 1.4089519062982532e-05 | 20.17% | 25.27% | 1.25x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6646996912589964e-05 | 1.3775691687902837e-05 | 17.25% | 20.84% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.220018659544837e-05 | 1.9563000323624515e-05 | 11.88% | 13.48% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012419026724604047 | 0.00012144659899832322 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.5918686334799055e-05 | 1.3646771913463307e-05 | 14.27% | 16.65% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012485615513375397 | 0.00012133060204371034 | 2.82% | 2.91% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.615738705841287e-05 | 3.345687383376146e-05 | 7.47% | 8.07% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7034018127496066e-05 | 1.4396187906740844e-05 | 15.49% | 18.32% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6886182223925318e-05 | 1.386844077796719e-05 | 17.87% | 21.76% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6605670494848825e-05 | 1.3854291287091234e-05 | 16.57% | 19.86% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.8203981844352605e-05 | 1.5103430692383715e-05 | 17.03% | 20.53% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.608604157080855e-05 | 2.323634438637098e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5859231667132806e-05 | 1.344127692403774e-05 | 15.25% | 17.99% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.574747855316816e-05 | 1.3693109368564753e-05 | 13.05% | 15.00% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2132641700746387e-05 | 1.963958139867803e-05 | 11.26% | 12.69% | 1.13x | ✅ |
