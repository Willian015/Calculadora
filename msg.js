
message();
function message()
{
  var randomconvos = [
  'Oiier',
  'Aí sim',
  '!eta',
  'Massa',
  'Olá',
  '/me Hi',
  '@djs salve',
  'Musica massa',
  'Gostei',
  'Kkkkkkkk',
  'Que loucura',
  'Uou',
  'DJ Pareira, original!',
  '@willian015 coeh',
  '!deletechat @willian015',
  '!deletechat @willian7535',
  ];
  var randomNumber = Math.floor(Math.random()*randomconvos.length);
  
  API.sendChat(randomconvos[randomNumber]);
  setTimeout(message, 120000);
}
