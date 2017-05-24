
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
  '@willian015 salve',
  'Musica massa',
  'Gostei',
  'Kkkkkkkk',
  'Que loucura',
  'Uou',
  'DJ Pareira, original!',
  '@willian015 coeh',
  ];
  var randomNumber = Math.floor(Math.random()*randomconvos.length);
  
  API.sendChat(randomconvos[randomNumber]);
  setTimeout(message, 120000);
}
