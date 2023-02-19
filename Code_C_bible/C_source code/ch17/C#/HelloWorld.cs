using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
   public partial class HelloWorld : Form
   {
      public HelloWorld()
      {
         InitializeComponent();
      }
      private void button1_Click(object sender, EventArgs e)
      {
         MessageBox.Show("Hello World!", "Greeting");
      }
   }
}